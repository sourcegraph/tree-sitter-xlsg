module.exports = grammar({
  name: "xlsg",

  extras: (_) => [" "],
  inline: ($) => [$.unstructured],

  rules: {
    file: ($) => repeat($.row),
    row: ($) =>
      seq(
        $.address,
        "\t",
        choice(prec.left(2, $.formula), prec.left(1, $.unstructured))
      ),
    address: ($) => seq($.sheet, "!", $.reference),
    sheet: (_) => /[^!]+/,
    reference: (_) => /[^\t]+/,
    kind: (_) => /[^\t]+/,

    unstructured: ($) => seq($.kind, "\t", $.value, "\n"),

    formula: ($) => seq(field("kind", "FORMULA"), "\t", $.expression, "\n"),
    value: (_) => prec(1, /[^\n]+/),

    expression: ($) => prec(2, choice($.number, $.identifier, $.call)),
    argument_list: ($) =>
      seq(
        "(",
        optional(
          seq($.expression, repeat(seq(",", $.expression)), optional(","))
        ),
        ")"
      ),
    call: ($) => seq(alias($.identifier, $.function_name), $.argument_list),

    number: (_) => /[0-9]+/,
    identifier: (_) => {
      const alpha = /[a-zA-Z]/;
      const alphanumeric = /[a-zA-Z0-9]/;
      return token(seq(alpha, repeat(alphanumeric)));
    },
  },
});
