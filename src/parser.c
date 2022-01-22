#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_open = 1,
  anon_sym_note = 2,
  anon_sym_balance = 3,
  anon_sym_SEMI = 4,
  sym_account = 5,
  sym_date = 6,
  sym_note = 7,
  sym_amount = 8,
  sym_currency = 9,
  sym_source_file = 10,
  sym__definition = 11,
  sym_entry_definition = 12,
  sym_entry_type_definition = 13,
  sym_open_definition = 14,
  sym_note_definition = 15,
  sym_balance_definition = 16,
  sym_comment_definition = 17,
  aux_sym_source_file_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_open] = "open",
  [anon_sym_note] = "note",
  [anon_sym_balance] = "balance",
  [anon_sym_SEMI] = ";",
  [sym_account] = "account",
  [sym_date] = "date",
  [sym_note] = "note",
  [sym_amount] = "amount",
  [sym_currency] = "currency",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_entry_definition] = "entry_definition",
  [sym_entry_type_definition] = "entry_type_definition",
  [sym_open_definition] = "open_definition",
  [sym_note_definition] = "note_definition",
  [sym_balance_definition] = "balance_definition",
  [sym_comment_definition] = "comment_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_account] = sym_account,
  [sym_date] = sym_date,
  [sym_note] = sym_note,
  [sym_amount] = sym_amount,
  [sym_currency] = sym_currency,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_entry_definition] = sym_entry_definition,
  [sym_entry_type_definition] = sym_entry_type_definition,
  [sym_open_definition] = sym_open_definition,
  [sym_note_definition] = sym_note_definition,
  [sym_balance_definition] = sym_balance_definition,
  [sym_comment_definition] = sym_comment_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_entry_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_entry_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_open_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_note_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '1') ADVANCE(40);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(22);
      if (lookahead == '1') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      END_STATE();
    case 18:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(3);
      END_STATE();
    case 19:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(35);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 22:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(39);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_currency);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_note] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
    [sym_currency] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__definition] = STATE(3),
    [sym_entry_definition] = STATE(3),
    [sym_comment_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_open,
    ACTIONS(11), 1,
      anon_sym_note,
    ACTIONS(13), 1,
      anon_sym_balance,
    STATE(6), 1,
      sym_entry_type_definition,
    STATE(7), 3,
      sym_open_definition,
      sym_note_definition,
      sym_balance_definition,
  [18] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_date,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym__definition,
      sym_entry_definition,
      sym_comment_definition,
      aux_sym_source_file_repeat1,
  [34] = 4,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_SEMI,
    ACTIONS(22), 1,
      sym_date,
    STATE(4), 4,
      sym__definition,
      sym_entry_definition,
      sym_comment_definition,
      aux_sym_source_file_repeat1,
  [50] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [56] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [62] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [68] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [74] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [80] = 1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [86] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [90] = 1,
    ACTIONS(39), 1,
      sym_account,
  [94] = 1,
    ACTIONS(41), 1,
      sym_account,
  [98] = 1,
    ACTIONS(43), 1,
      sym_account,
  [102] = 1,
    ACTIONS(45), 1,
      sym_note,
  [106] = 1,
    ACTIONS(47), 1,
      sym_amount,
  [110] = 1,
    ACTIONS(49), 1,
      sym_currency,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 90,
  [SMALL_STATE(13)] = 94,
  [SMALL_STATE(14)] = 98,
  [SMALL_STATE(15)] = 102,
  [SMALL_STATE(16)] = 106,
  [SMALL_STATE(17)] = 110,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_definition, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_definition, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_type_definition, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_beancount(void) {
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
