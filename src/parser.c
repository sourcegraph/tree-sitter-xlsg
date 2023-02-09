#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 1
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_TAB = 1,
  anon_sym_BANG = 2,
  sym_sheet = 3,
  aux_sym_reference_token1 = 4,
  anon_sym_LF = 5,
  anon_sym_FORMULA = 6,
  aux_sym_value_token1 = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  sym_number = 11,
  sym_identifier = 12,
  sym_file = 13,
  sym_row = 14,
  sym_address = 15,
  sym_reference = 16,
  sym_kind = 17,
  sym_formula = 18,
  sym_value = 19,
  sym_expression = 20,
  sym_argument_list = 21,
  sym_call = 22,
  aux_sym_file_repeat1 = 23,
  aux_sym_argument_list_repeat1 = 24,
  alias_sym_function_name = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_TAB] = "\t",
  [anon_sym_BANG] = "!",
  [sym_sheet] = "sheet",
  [aux_sym_reference_token1] = "reference_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_FORMULA] = "FORMULA",
  [aux_sym_value_token1] = "value_token1",
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
  [anon_sym_FORMULA] = anon_sym_FORMULA,
  [aux_sym_value_token1] = aux_sym_value_token1,
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
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
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

enum {
  field_kind = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
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
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == ')') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_FORMULA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(36),
    [sym_row] = STATE(4),
    [sym_address] = STATE(33),
    [aux_sym_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_sheet] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(18), 1,
      sym_call,
    STATE(25), 1,
      sym_expression,
  [16] = 5,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_call,
    STATE(25), 1,
      sym_expression,
  [32] = 4,
    ACTIONS(5), 1,
      sym_sheet,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_address,
    STATE(5), 2,
      sym_row,
      aux_sym_file_repeat1,
  [46] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_sheet,
    STATE(33), 1,
      sym_address,
    STATE(5), 2,
      sym_row,
      aux_sym_file_repeat1,
  [60] = 5,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_expression,
    STATE(18), 1,
      sym_call,
  [76] = 3,
    ACTIONS(26), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_argument_list,
    ACTIONS(24), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [88] = 4,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(18), 1,
      sym_call,
    STATE(29), 1,
      sym_expression,
  [101] = 4,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(18), 1,
      sym_call,
    STATE(25), 1,
      sym_expression,
  [114] = 4,
    ACTIONS(28), 1,
      aux_sym_reference_token1,
    ACTIONS(30), 1,
      anon_sym_FORMULA,
    STATE(24), 1,
      sym_formula,
    STATE(32), 1,
      sym_kind,
  [127] = 3,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_argument_list_repeat1,
  [137] = 3,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_argument_list_repeat1,
  [147] = 1,
    ACTIONS(38), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [153] = 3,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_argument_list_repeat1,
  [163] = 1,
    ACTIONS(45), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [169] = 1,
    ACTIONS(47), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [175] = 1,
    ACTIONS(49), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [181] = 1,
    ACTIONS(24), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [187] = 1,
    ACTIONS(51), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [193] = 1,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_sheet,
  [198] = 1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_sheet,
  [203] = 2,
    ACTIONS(57), 1,
      aux_sym_value_token1,
    STATE(27), 1,
      sym_value,
  [210] = 2,
    ACTIONS(59), 1,
      aux_sym_reference_token1,
    STATE(31), 1,
      sym_reference,
  [217] = 1,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_sheet,
  [222] = 1,
    ACTIONS(43), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [227] = 1,
    ACTIONS(63), 1,
      anon_sym_LF,
  [231] = 1,
    ACTIONS(65), 1,
      anon_sym_LF,
  [235] = 1,
    ACTIONS(67), 1,
      anon_sym_BANG,
  [239] = 1,
    ACTIONS(69), 1,
      anon_sym_LF,
  [243] = 1,
    ACTIONS(71), 1,
      anon_sym_TAB,
  [247] = 1,
    ACTIONS(73), 1,
      anon_sym_TAB,
  [251] = 1,
    ACTIONS(75), 1,
      anon_sym_TAB,
  [255] = 1,
    ACTIONS(77), 1,
      anon_sym_TAB,
  [259] = 1,
    ACTIONS(79), 1,
      anon_sym_TAB,
  [263] = 1,
    ACTIONS(81), 1,
      anon_sym_TAB,
  [267] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 101,
  [SMALL_STATE(10)] = 114,
  [SMALL_STATE(11)] = 127,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 169,
  [SMALL_STATE(17)] = 175,
  [SMALL_STATE(18)] = 181,
  [SMALL_STATE(19)] = 187,
  [SMALL_STATE(20)] = 193,
  [SMALL_STATE(21)] = 198,
  [SMALL_STATE(22)] = 203,
  [SMALL_STATE(23)] = 210,
  [SMALL_STATE(24)] = 217,
  [SMALL_STATE(25)] = 222,
  [SMALL_STATE(26)] = 227,
  [SMALL_STATE(27)] = 231,
  [SMALL_STATE(28)] = 235,
  [SMALL_STATE(29)] = 239,
  [SMALL_STATE(30)] = 243,
  [SMALL_STATE(31)] = 247,
  [SMALL_STATE(32)] = 251,
  [SMALL_STATE(33)] = 255,
  [SMALL_STATE(34)] = 259,
  [SMALL_STATE(35)] = 263,
  [SMALL_STATE(36)] = 267,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(28),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formula, 4, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
