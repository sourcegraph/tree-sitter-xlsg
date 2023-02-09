module.exports = grammar({
  name: "xlsg",

  rules: {
    file: ($) => repeat($.row),
    row: ($) => seq($.address, "\t", $.kind, "\t", $.value, "\n"),
    address: ($) => seq($.sheet, "!", $.reference),
    sheet: (_) => /[^!]+/,
    reference: (_) => /[^\t]+/,
    kind: (_) => /[^\t]+/,
    value: (_) => /[^\n]+/,
  },
});
