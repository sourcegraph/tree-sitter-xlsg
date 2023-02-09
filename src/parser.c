#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 1
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_TAB = 1,
  anon_sym_BANG = 2,
  sym_sheet = 3,
  aux_sym_reference_token1 = 4,
  anon_sym_LF = 5,
  anon_sym_FORMULA = 6,
  aux_sym_value_token1 = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_STAR = 10,
  anon_sym_SLASH = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  sym_number = 15,
  sym_identifier = 16,
  sym_file = 17,
  sym_row = 18,
  sym_address = 19,
  sym_reference = 20,
  sym_kind = 21,
  sym_formula = 22,
  sym_value = 23,
  sym_expression = 24,
  sym_binary_expr = 25,
  sym_operator = 26,
  sym_argument_list = 27,
  sym_call = 28,
  aux_sym_file_repeat1 = 29,
  aux_sym_argument_list_repeat1 = 30,
  alias_sym_function_name = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_TAB] = "\t",
  [anon_sym_BANG] = "!",
  [sym_sheet] = "sheet",
  [aux_sym_reference_token1] = "reference_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_FORMULA] = "kind",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_file] = "file",
  [sym_row] = "row",
  [sym_address] = "address",
  [sym_reference] = "reference",
  [sym_kind] = "kind",
  [sym_formula] = "formula",
  [sym_value] = "value",
  [sym_expression] = "expression",
  [sym_binary_expr] = "binary_expr",
  [sym_operator] = "operator",
  [sym_argument_list] = "argument_list",
  [sym_call] = "call",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_function_name] = "function_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_sheet] = sym_sheet,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_FORMULA] = sym_kind,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_file] = sym_file,
  [sym_row] = sym_row,
  [sym_address] = sym_address,
  [sym_reference] = sym_reference,
  [sym_kind] = sym_kind,
  [sym_formula] = sym_formula,
  [sym_value] = sym_value,
  [sym_expression] = sym_expression,
  [sym_binary_expr] = sym_binary_expr,
  [sym_operator] = sym_operator,
  [sym_argument_list] = sym_argument_list,
  [sym_call] = sym_call,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [alias_sym_function_name] = alias_sym_function_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_sheet] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FORMULA] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_row] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_formula] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_function_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\t') ADVANCE(7);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == ')') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_sheet);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_sheet);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == 'L') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == 'M') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == 'R') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == 'U') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_FORMULA);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_FORMULA);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_FORMULA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(39),
    [sym_row] = STATE(16),
    [sym_address] = STATE(38),
    [aux_sym_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_sheet] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_argument_list,
    ACTIONS(7), 7,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16] = 3,
    STATE(18), 1,
      sym_operator,
    ACTIONS(11), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(13), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [31] = 5,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_operator,
    STATE(23), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(13), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [50] = 1,
    ACTIONS(19), 7,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [60] = 1,
    ACTIONS(21), 7,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [70] = 3,
    STATE(18), 1,
      sym_operator,
    ACTIONS(23), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(13), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [84] = 1,
    ACTIONS(25), 7,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [94] = 1,
    ACTIONS(27), 7,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [104] = 1,
    ACTIONS(29), 7,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [114] = 1,
    ACTIONS(7), 7,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [124] = 5,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(4), 1,
      sym_expression,
    STATE(11), 2,
      sym_binary_expr,
      sym_call,
  [141] = 5,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(11), 2,
      sym_binary_expr,
      sym_call,
  [158] = 3,
    ACTIONS(39), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym_operator,
    ACTIONS(13), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [171] = 5,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_expression,
    STATE(11), 2,
      sym_binary_expr,
      sym_call,
  [188] = 4,
    ACTIONS(5), 1,
      sym_sheet,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_address,
    STATE(20), 2,
      sym_row,
      aux_sym_file_repeat1,
  [202] = 4,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    STATE(11), 2,
      sym_binary_expr,
      sym_call,
  [216] = 4,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_expression,
    STATE(11), 2,
      sym_binary_expr,
      sym_call,
  [230] = 4,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(7), 1,
      sym_expression,
    STATE(11), 2,
      sym_binary_expr,
      sym_call,
  [244] = 4,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_sheet,
    STATE(38), 1,
      sym_address,
    STATE(20), 2,
      sym_row,
      aux_sym_file_repeat1,
  [258] = 4,
    ACTIONS(50), 1,
      aux_sym_reference_token1,
    ACTIONS(52), 1,
      anon_sym_FORMULA,
    STATE(28), 1,
      sym_formula,
    STATE(34), 1,
      sym_kind,
  [271] = 3,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_argument_list_repeat1,
  [281] = 3,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_argument_list_repeat1,
  [291] = 1,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_sheet,
  [296] = 1,
    ACTIONS(61), 2,
      sym_number,
      sym_identifier,
  [301] = 2,
    ACTIONS(63), 1,
      aux_sym_value_token1,
    STATE(31), 1,
      sym_value,
  [308] = 1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_sheet,
  [313] = 1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_sheet,
  [318] = 2,
    ACTIONS(69), 1,
      aux_sym_reference_token1,
    STATE(30), 1,
      sym_reference,
  [325] = 1,
    ACTIONS(71), 1,
      anon_sym_TAB,
  [329] = 1,
    ACTIONS(73), 1,
      anon_sym_LF,
  [333] = 1,
    ACTIONS(75), 1,
      anon_sym_BANG,
  [337] = 1,
    ACTIONS(77), 1,
      anon_sym_LF,
  [341] = 1,
    ACTIONS(79), 1,
      anon_sym_TAB,
  [345] = 1,
    ACTIONS(81), 1,
      anon_sym_TAB,
  [349] = 1,
    ACTIONS(83), 1,
      anon_sym_TAB,
  [353] = 1,
    ACTIONS(85), 1,
      anon_sym_TAB,
  [357] = 1,
    ACTIONS(87), 1,
      anon_sym_TAB,
  [361] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 31,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 70,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 171,
  [SMALL_STATE(16)] = 188,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 216,
  [SMALL_STATE(19)] = 230,
  [SMALL_STATE(20)] = 244,
  [SMALL_STATE(21)] = 258,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 281,
  [SMALL_STATE(24)] = 291,
  [SMALL_STATE(25)] = 296,
  [SMALL_STATE(26)] = 301,
  [SMALL_STATE(27)] = 308,
  [SMALL_STATE(28)] = 313,
  [SMALL_STATE(29)] = 318,
  [SMALL_STATE(30)] = 325,
  [SMALL_STATE(31)] = 329,
  [SMALL_STATE(32)] = 333,
  [SMALL_STATE(33)] = 337,
  [SMALL_STATE(34)] = 341,
  [SMALL_STATE(35)] = 345,
  [SMALL_STATE(36)] = 349,
  [SMALL_STATE(37)] = 353,
  [SMALL_STATE(38)] = 357,
  [SMALL_STATE(39)] = 361,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(32),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xlsg(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
