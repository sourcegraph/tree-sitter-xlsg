#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_TAB = 1,
  anon_sym_LF = 2,
  anon_sym_BANG = 3,
  sym_sheet = 4,
  aux_sym_reference_token1 = 5,
  sym_value = 6,
  sym_file = 7,
  sym_row = 8,
  sym_address = 9,
  sym_reference = 10,
  sym_kind = 11,
  aux_sym_file_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_TAB] = "\t",
  [anon_sym_LF] = "\n",
  [anon_sym_BANG] = "!",
  [sym_sheet] = "sheet",
  [aux_sym_reference_token1] = "reference_token1",
  [sym_value] = "value",
  [sym_file] = "file",
  [sym_row] = "row",
  [sym_address] = "address",
  [sym_reference] = "reference",
  [sym_kind] = "kind",
  [aux_sym_file_repeat1] = "file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_sheet] = sym_sheet,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
  [sym_value] = sym_value,
  [sym_file] = sym_file,
  [sym_row] = sym_row,
  [sym_address] = sym_address,
  [sym_reference] = sym_reference,
  [sym_kind] = sym_kind,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
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
  [anon_sym_LF] = {
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
  [sym_value] = {
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
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(11);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_sheet);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_sheet);
      if (lookahead != 0 &&
          lookahead != '!') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(8),
    [sym_row] = STATE(2),
    [sym_address] = STATE(9),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_sheet] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_sheet,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_address,
    STATE(3), 2,
      sym_row,
      aux_sym_file_repeat1,
  [14] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_sheet,
    STATE(9), 1,
      sym_address,
    STATE(3), 2,
      sym_row,
      aux_sym_file_repeat1,
  [28] = 2,
    ACTIONS(14), 1,
      aux_sym_reference_token1,
    STATE(11), 1,
      sym_reference,
  [35] = 2,
    ACTIONS(16), 1,
      aux_sym_reference_token1,
    STATE(13), 1,
      sym_kind,
  [42] = 1,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      sym_sheet,
  [47] = 1,
    ACTIONS(20), 1,
      anon_sym_BANG,
  [51] = 1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
  [55] = 1,
    ACTIONS(24), 1,
      anon_sym_TAB,
  [59] = 1,
    ACTIONS(26), 1,
      anon_sym_TAB,
  [63] = 1,
    ACTIONS(28), 1,
      anon_sym_TAB,
  [67] = 1,
    ACTIONS(30), 1,
      anon_sym_TAB,
  [71] = 1,
    ACTIONS(32), 1,
      anon_sym_TAB,
  [75] = 1,
    ACTIONS(34), 1,
      sym_value,
  [79] = 1,
    ACTIONS(36), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 47,
  [SMALL_STATE(8)] = 51,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 59,
  [SMALL_STATE(11)] = 63,
  [SMALL_STATE(12)] = 67,
  [SMALL_STATE(13)] = 71,
  [SMALL_STATE(14)] = 75,
  [SMALL_STATE(15)] = 79,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(7),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 6),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [22] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
