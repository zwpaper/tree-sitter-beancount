#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_option = 1,
  anon_sym_plugin = 2,
  anon_sym_include = 3,
  anon_sym_pushtag = 4,
  anon_sym_poptag = 5,
  anon_sym_open = 6,
  anon_sym_COMMA = 7,
  anon_sym_close = 8,
  anon_sym_commodity = 9,
  aux_sym_price_token1 = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  sym_tag = 13,
  sym_link = 14,
  anon_sym_note = 15,
  anon_sym_document = 16,
  sym_filepath = 17,
  anon_sym_event = 18,
  anon_sym_balance = 19,
  anon_sym_price = 20,
  anon_sym_pad = 21,
  anon_sym_custom = 22,
  aux_sym_uncheck_token1 = 23,
  anon_sym_Assets = 24,
  anon_sym_Liabilities = 25,
  anon_sym_Equity = 26,
  anon_sym_Income = 27,
  anon_sym_Expenses = 28,
  anon_sym_COLON = 29,
  sym_metadata_key = 30,
  sym__account_component = 31,
  anon_sym_STRICT = 32,
  anon_sym_NONE = 33,
  sym_date = 34,
  sym_note = 35,
  anon_sym_DQUOTE = 36,
  aux_sym_text_token1 = 37,
  sym_unsigned_amount = 38,
  sym_amount = 39,
  anon_sym_STAR = 40,
  anon_sym_BANG = 41,
  sym_commodity = 42,
  anon_sym_SEMI = 43,
  aux_sym_comment_token1 = 44,
  sym_source_file = 45,
  sym__definition = 46,
  sym_option_definition = 47,
  sym_plugin_definition = 48,
  sym_include_definition = 49,
  sym_pushtag_definition = 50,
  sym_poptag_definition = 51,
  sym__entry_definition = 52,
  sym_open_definition = 53,
  sym_close_definition = 54,
  sym_commodity_definition = 55,
  sym_transaction_definition = 56,
  sym_post_definition = 57,
  sym_price = 58,
  sym_cost = 59,
  sym_note_definition = 60,
  sym_document_definition = 61,
  sym_event_definition = 62,
  sym_balance_definition = 63,
  sym_price_definition = 64,
  sym_pad_definition = 65,
  sym_custom_definition = 66,
  sym_uncheck = 67,
  sym_account = 68,
  sym_metadata_definition = 69,
  sym_metadata_value = 70,
  sym_text = 71,
  sym_txn = 72,
  sym_comment = 73,
  aux_sym_source_file_repeat1 = 74,
  aux_sym__entry_definition_repeat1 = 75,
  aux_sym_open_definition_repeat1 = 76,
  aux_sym_transaction_definition_repeat1 = 77,
  aux_sym_transaction_definition_repeat2 = 78,
  aux_sym_custom_definition_repeat1 = 79,
  aux_sym_account_repeat1 = 80,
  aux_sym_text_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_option] = "option",
  [anon_sym_plugin] = "plugin",
  [anon_sym_include] = "include",
  [anon_sym_pushtag] = "pushtag",
  [anon_sym_poptag] = "poptag",
  [anon_sym_open] = "open",
  [anon_sym_COMMA] = ",",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [aux_sym_price_token1] = "price_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [anon_sym_note] = "note",
  [anon_sym_document] = "document",
  [sym_filepath] = "filepath",
  [anon_sym_event] = "event",
  [anon_sym_balance] = "balance",
  [anon_sym_price] = "price",
  [anon_sym_pad] = "pad",
  [anon_sym_custom] = "custom",
  [aux_sym_uncheck_token1] = "uncheck_token1",
  [anon_sym_Assets] = "Assets",
  [anon_sym_Liabilities] = "Liabilities",
  [anon_sym_Equity] = "Equity",
  [anon_sym_Income] = "Income",
  [anon_sym_Expenses] = "Expenses",
  [anon_sym_COLON] = ":",
  [sym_metadata_key] = "metadata_key",
  [sym__account_component] = "_account_component",
  [anon_sym_STRICT] = "STRICT",
  [anon_sym_NONE] = "NONE",
  [sym_date] = "date",
  [sym_note] = "note",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_text_token1] = "text_token1",
  [sym_unsigned_amount] = "unsigned_amount",
  [sym_amount] = "amount",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [sym_commodity] = "commodity",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_option_definition] = "option_definition",
  [sym_plugin_definition] = "plugin_definition",
  [sym_include_definition] = "include_definition",
  [sym_pushtag_definition] = "pushtag_definition",
  [sym_poptag_definition] = "poptag_definition",
  [sym__entry_definition] = "_entry_definition",
  [sym_open_definition] = "open_definition",
  [sym_close_definition] = "close_definition",
  [sym_commodity_definition] = "commodity_definition",
  [sym_transaction_definition] = "transaction_definition",
  [sym_post_definition] = "post_definition",
  [sym_price] = "price",
  [sym_cost] = "cost",
  [sym_note_definition] = "note_definition",
  [sym_document_definition] = "document_definition",
  [sym_event_definition] = "event_definition",
  [sym_balance_definition] = "balance_definition",
  [sym_price_definition] = "price_definition",
  [sym_pad_definition] = "pad_definition",
  [sym_custom_definition] = "custom_definition",
  [sym_uncheck] = "uncheck",
  [sym_account] = "account",
  [sym_metadata_definition] = "metadata_definition",
  [sym_metadata_value] = "metadata_value",
  [sym_text] = "text",
  [sym_txn] = "txn",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__entry_definition_repeat1] = "_entry_definition_repeat1",
  [aux_sym_open_definition_repeat1] = "open_definition_repeat1",
  [aux_sym_transaction_definition_repeat1] = "transaction_definition_repeat1",
  [aux_sym_transaction_definition_repeat2] = "transaction_definition_repeat2",
  [aux_sym_custom_definition_repeat1] = "custom_definition_repeat1",
  [aux_sym_account_repeat1] = "account_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_plugin] = anon_sym_plugin,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [aux_sym_price_token1] = aux_sym_price_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_document] = anon_sym_document,
  [sym_filepath] = sym_filepath,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_price] = anon_sym_price,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_custom] = anon_sym_custom,
  [aux_sym_uncheck_token1] = aux_sym_uncheck_token1,
  [anon_sym_Assets] = anon_sym_Assets,
  [anon_sym_Liabilities] = anon_sym_Liabilities,
  [anon_sym_Equity] = anon_sym_Equity,
  [anon_sym_Income] = anon_sym_Income,
  [anon_sym_Expenses] = anon_sym_Expenses,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_metadata_key] = sym_metadata_key,
  [sym__account_component] = sym__account_component,
  [anon_sym_STRICT] = anon_sym_STRICT,
  [anon_sym_NONE] = anon_sym_NONE,
  [sym_date] = sym_date,
  [sym_note] = sym_note,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [sym_unsigned_amount] = sym_unsigned_amount,
  [sym_amount] = sym_amount,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_commodity] = sym_commodity,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_option_definition] = sym_option_definition,
  [sym_plugin_definition] = sym_plugin_definition,
  [sym_include_definition] = sym_include_definition,
  [sym_pushtag_definition] = sym_pushtag_definition,
  [sym_poptag_definition] = sym_poptag_definition,
  [sym__entry_definition] = sym__entry_definition,
  [sym_open_definition] = sym_open_definition,
  [sym_close_definition] = sym_close_definition,
  [sym_commodity_definition] = sym_commodity_definition,
  [sym_transaction_definition] = sym_transaction_definition,
  [sym_post_definition] = sym_post_definition,
  [sym_price] = sym_price,
  [sym_cost] = sym_cost,
  [sym_note_definition] = sym_note_definition,
  [sym_document_definition] = sym_document_definition,
  [sym_event_definition] = sym_event_definition,
  [sym_balance_definition] = sym_balance_definition,
  [sym_price_definition] = sym_price_definition,
  [sym_pad_definition] = sym_pad_definition,
  [sym_custom_definition] = sym_custom_definition,
  [sym_uncheck] = sym_uncheck,
  [sym_account] = sym_account,
  [sym_metadata_definition] = sym_metadata_definition,
  [sym_metadata_value] = sym_metadata_value,
  [sym_text] = sym_text,
  [sym_txn] = sym_txn,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__entry_definition_repeat1] = aux_sym__entry_definition_repeat1,
  [aux_sym_open_definition_repeat1] = aux_sym_open_definition_repeat1,
  [aux_sym_transaction_definition_repeat1] = aux_sym_transaction_definition_repeat1,
  [aux_sym_transaction_definition_repeat2] = aux_sym_transaction_definition_repeat2,
  [aux_sym_custom_definition_repeat1] = aux_sym_custom_definition_repeat1,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plugin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poptag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_price_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [sym_filepath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_price] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_uncheck_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Assets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Liabilities] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Equity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Income] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Expenses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_metadata_key] = {
    .visible = true,
    .named = true,
  },
  [sym__account_component] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STRICT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unsigned_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_option_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_include_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_pushtag_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_poptag_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__entry_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_open_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_close_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_post_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_note_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_document_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_event_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_price_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_pad_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_uncheck] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_value] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_txn] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__entry_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_config = 1,
  field_name = 2,
  field_narration = 3,
  field_pad = 4,
  field_payee = 5,
  field_type_name = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_config] = "config",
  [field_name] = "name",
  [field_narration] = "narration",
  [field_pad] = "pad",
  [field_payee] = "payee",
  [field_type_name] = "type_name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_value, 2},
  [3] =
    {field_config, 2},
    {field_name, 1},
  [5] =
    {field_type_name, 1},
  [6] =
    {field_narration, 1},
  [7] =
    {field_pad, 2},
  [8] =
    {field_narration, 2},
    {field_payee, 1},
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
      if (eof) ADVANCE(117);
      if (lookahead == '!') ADVANCE(249);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == '@') ADVANCE(138);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(258);
      if (lookahead == 'N') ADVANCE(254);
      if (lookahead == 'S') ADVANCE(256);
      if (lookahead == '^') ADVANCE(111);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '}') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(230);
      if (lookahead == '1') ADVANCE(233);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '1') ADVANCE(242);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 78:
      if (lookahead == 'q') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 102:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 103:
      if (lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 104:
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 105:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 110:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 111:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 112:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 113:
      if (eof) ADVANCE(117);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == '@') ADVANCE(138);
      if (lookahead == 'A') ADVANCE(261);
      if (lookahead == 'E') ADVANCE(260);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'L') ADVANCE(258);
      if (lookahead == '^') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(113)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 114:
      if (eof) ADVANCE(117);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(59);
      if (lookahead == 'L') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 115:
      if (eof) ADVANCE(117);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == ';') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(115)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 116:
      if (eof) ADVANCE(117);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 'p') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(116)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_plugin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_plugin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_pushtag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_pushtag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_poptag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_poptag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_price_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_price_token1);
      if (lookahead == '@') ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_link);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == '1') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '3') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'g') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'h') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == 'u') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'p') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'u') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ';') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '0') ADVANCE(234);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(232);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(244);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(240);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(188);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 113},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 113},
  [4] = {.lex_state = 113},
  [5] = {.lex_state = 113},
  [6] = {.lex_state = 113},
  [7] = {.lex_state = 113},
  [8] = {.lex_state = 113},
  [9] = {.lex_state = 113},
  [10] = {.lex_state = 113},
  [11] = {.lex_state = 113},
  [12] = {.lex_state = 114},
  [13] = {.lex_state = 114},
  [14] = {.lex_state = 113},
  [15] = {.lex_state = 113},
  [16] = {.lex_state = 113},
  [17] = {.lex_state = 113},
  [18] = {.lex_state = 113},
  [19] = {.lex_state = 113},
  [20] = {.lex_state = 114},
  [21] = {.lex_state = 113},
  [22] = {.lex_state = 113},
  [23] = {.lex_state = 113},
  [24] = {.lex_state = 113},
  [25] = {.lex_state = 114},
  [26] = {.lex_state = 113},
  [27] = {.lex_state = 113},
  [28] = {.lex_state = 113},
  [29] = {.lex_state = 113},
  [30] = {.lex_state = 113},
  [31] = {.lex_state = 113},
  [32] = {.lex_state = 113},
  [33] = {.lex_state = 115},
  [34] = {.lex_state = 116},
  [35] = {.lex_state = 113},
  [36] = {.lex_state = 113},
  [37] = {.lex_state = 115},
  [38] = {.lex_state = 113},
  [39] = {.lex_state = 113},
  [40] = {.lex_state = 116},
  [41] = {.lex_state = 116},
  [42] = {.lex_state = 113},
  [43] = {.lex_state = 115},
  [44] = {.lex_state = 113},
  [45] = {.lex_state = 116},
  [46] = {.lex_state = 113},
  [47] = {.lex_state = 115},
  [48] = {.lex_state = 115},
  [49] = {.lex_state = 113},
  [50] = {.lex_state = 113},
  [51] = {.lex_state = 113},
  [52] = {.lex_state = 113},
  [53] = {.lex_state = 115},
  [54] = {.lex_state = 113},
  [55] = {.lex_state = 115},
  [56] = {.lex_state = 113},
  [57] = {.lex_state = 116},
  [58] = {.lex_state = 113},
  [59] = {.lex_state = 113},
  [60] = {.lex_state = 113},
  [61] = {.lex_state = 113},
  [62] = {.lex_state = 113},
  [63] = {.lex_state = 113},
  [64] = {.lex_state = 113},
  [65] = {.lex_state = 113},
  [66] = {.lex_state = 113},
  [67] = {.lex_state = 113},
  [68] = {.lex_state = 113},
  [69] = {.lex_state = 113},
  [70] = {.lex_state = 113},
  [71] = {.lex_state = 113},
  [72] = {.lex_state = 113},
  [73] = {.lex_state = 113},
  [74] = {.lex_state = 113},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 113},
  [95] = {.lex_state = 116},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 116},
  [100] = {.lex_state = 116},
  [101] = {.lex_state = 116},
  [102] = {.lex_state = 116},
  [103] = {.lex_state = 116},
  [104] = {.lex_state = 114},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 116},
  [108] = {.lex_state = 113},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 114},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 116},
  [115] = {.lex_state = 116},
  [116] = {.lex_state = 266},
  [117] = {.lex_state = 0},
  [118] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_pushtag] = ACTIONS(1),
    [anon_sym_poptag] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [aux_sym_price_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_price] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_Assets] = ACTIONS(1),
    [anon_sym_Liabilities] = ACTIONS(1),
    [anon_sym_Equity] = ACTIONS(1),
    [anon_sym_Income] = ACTIONS(1),
    [anon_sym_Expenses] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STRICT] = ACTIONS(1),
    [anon_sym_NONE] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_unsigned_amount] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_commodity] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(109),
    [sym__definition] = STATE(68),
    [sym_option_definition] = STATE(69),
    [sym_plugin_definition] = STATE(69),
    [sym_include_definition] = STATE(69),
    [sym_pushtag_definition] = STATE(69),
    [sym_poptag_definition] = STATE(69),
    [sym__entry_definition] = STATE(69),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_option] = ACTIONS(7),
    [anon_sym_plugin] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_pushtag] = ACTIONS(13),
    [anon_sym_poptag] = ACTIONS(15),
    [sym_date] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(19), 1,
      anon_sym_open,
    ACTIONS(21), 1,
      anon_sym_close,
    ACTIONS(23), 1,
      anon_sym_commodity,
    ACTIONS(25), 1,
      anon_sym_note,
    ACTIONS(27), 1,
      anon_sym_document,
    ACTIONS(29), 1,
      anon_sym_event,
    ACTIONS(31), 1,
      anon_sym_balance,
    ACTIONS(33), 1,
      anon_sym_price,
    ACTIONS(35), 1,
      anon_sym_pad,
    ACTIONS(37), 1,
      anon_sym_custom,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      sym_txn,
    ACTIONS(39), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    STATE(54), 11,
      sym_open_definition,
      sym_close_definition,
      sym_commodity_definition,
      sym_transaction_definition,
      sym_note_definition,
      sym_document_definition,
      sym_event_definition,
      sym_balance_definition,
      sym_price_definition,
      sym_pad_definition,
      sym_custom_definition,
  [57] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      sym_metadata_key,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_text,
    STATE(10), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(11), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(32), 1,
      sym_account,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(45), 2,
      sym_tag,
      sym_link,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(43), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [108] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_metadata_key,
    STATE(4), 1,
      sym_comment,
    STATE(8), 1,
      sym_text,
    STATE(9), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(32), 1,
      sym_account,
    ACTIONS(45), 2,
      sym_tag,
      sym_link,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(56), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [159] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_tag,
    STATE(5), 1,
      sym_comment,
    STATE(38), 1,
      sym_metadata_value,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(69), 2,
      sym_amount,
      sym_commodity,
    STATE(36), 2,
      sym_account,
      sym_text,
    ACTIONS(67), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(63), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [202] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      sym_metadata_key,
    STATE(6), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(23), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(32), 1,
      sym_account,
    ACTIONS(45), 2,
      sym_tag,
      sym_link,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(73), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [247] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_tag,
    STATE(7), 1,
      sym_comment,
    STATE(38), 1,
      sym_metadata_value,
    ACTIONS(69), 2,
      sym_amount,
      sym_commodity,
    STATE(36), 2,
      sym_account,
      sym_text,
    ACTIONS(63), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [288] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(82), 1,
      sym_metadata_key,
    STATE(6), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(32), 1,
      sym_account,
    ACTIONS(45), 2,
      sym_tag,
      sym_link,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(80), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [333] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      sym_metadata_key,
    STATE(9), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(23), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(32), 1,
      sym_account,
    ACTIONS(45), 2,
      sym_tag,
      sym_link,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(87), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [378] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      sym_metadata_key,
    STATE(10), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(23), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(32), 1,
      sym_account,
    ACTIONS(45), 2,
      sym_tag,
      sym_link,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(94), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [423] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      sym_metadata_key,
    STATE(11), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(32), 1,
      sym_account,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(94), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [461] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      anon_sym_COLON,
    STATE(12), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_account_repeat1,
    ACTIONS(101), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      sym_filepath,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [493] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(103), 1,
      anon_sym_COLON,
    STATE(12), 1,
      aux_sym_account_repeat1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(107), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      sym_filepath,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [525] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      sym_metadata_key,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(32), 1,
      sym_account,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(111), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [563] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      sym_metadata_key,
    STATE(15), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(32), 1,
      sym_account,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(87), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [601] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      sym_metadata_key,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(32), 1,
      sym_account,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(118), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [639] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      sym_metadata_key,
    STATE(32), 1,
      sym_account,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(17), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat2,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(125), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
    ACTIONS(127), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [675] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(137), 1,
      sym_metadata_key,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(18), 1,
      sym_comment,
    STATE(32), 1,
      sym_account,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(135), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [713] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      sym_metadata_key,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(19), 1,
      sym_comment,
    STATE(32), 1,
      sym_account,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(39), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    ACTIONS(73), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [751] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(144), 1,
      anon_sym_COLON,
    STATE(20), 2,
      sym_comment,
      aux_sym_account_repeat1,
    ACTIONS(142), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      sym_filepath,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [781] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(151), 1,
      aux_sym_price_token1,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_comment,
    STATE(27), 1,
      sym_cost,
    STATE(42), 1,
      sym_price,
    ACTIONS(149), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(147), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [817] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_comment,
    ACTIONS(157), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(155), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      anon_sym_DQUOTE,
  [844] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(163), 2,
      sym_tag,
      sym_link,
    STATE(23), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat1,
    ACTIONS(161), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [873] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    ACTIONS(168), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      anon_sym_DQUOTE,
  [900] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(142), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      sym_filepath,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_COLON,
      sym_date,
  [927] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
    ACTIONS(172), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      anon_sym_DQUOTE,
  [954] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(151), 1,
      aux_sym_price_token1,
    STATE(27), 1,
      sym_comment,
    STATE(44), 1,
      sym_price,
    ACTIONS(176), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [984] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      anon_sym_option,
    ACTIONS(183), 1,
      anon_sym_plugin,
    ACTIONS(186), 1,
      anon_sym_include,
    ACTIONS(189), 1,
      anon_sym_pushtag,
    ACTIONS(192), 1,
      anon_sym_poptag,
    ACTIONS(195), 1,
      sym_date,
    STATE(68), 1,
      sym__definition,
    STATE(28), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(69), 6,
      sym_option_definition,
      sym_plugin_definition,
      sym_include_definition,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [1024] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_comment,
    ACTIONS(200), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1050] = 12,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_option,
    ACTIONS(9), 1,
      anon_sym_plugin,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_pushtag,
    ACTIONS(15), 1,
      anon_sym_poptag,
    ACTIONS(17), 1,
      sym_date,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(68), 1,
      sym__definition,
    STATE(69), 6,
      sym_option_definition,
      sym_plugin_definition,
      sym_include_definition,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [1092] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_comment,
    ACTIONS(206), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      aux_sym_price_token1,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1117] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      sym_amount,
    STATE(32), 1,
      sym_comment,
    ACTIONS(210), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1144] = 9,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      aux_sym_uncheck_token1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_comment,
    STATE(37), 1,
      aux_sym_custom_definition_repeat1,
    STATE(47), 1,
      sym_uncheck,
    STATE(48), 1,
      sym_text,
    ACTIONS(216), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_date,
  [1178] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(224), 1,
      anon_sym_COLON,
    STATE(34), 2,
      sym_comment,
      aux_sym_account_repeat1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      sym_date,
      sym_note,
      sym_commodity,
    ACTIONS(142), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
  [1204] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_comment,
    ACTIONS(229), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1228] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_comment,
    ACTIONS(233), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1252] = 8,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      aux_sym_uncheck_token1,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_uncheck,
    STATE(48), 1,
      sym_text,
    STATE(37), 2,
      sym_comment,
      aux_sym_custom_definition_repeat1,
    ACTIONS(237), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_date,
  [1284] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    ACTIONS(247), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1308] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_comment,
    ACTIONS(251), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1332] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(253), 1,
      anon_sym_COLON,
    STATE(40), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_account_repeat1,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_date,
      sym_note,
      sym_commodity,
    ACTIONS(107), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
  [1360] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(253), 1,
      anon_sym_COLON,
    STATE(34), 1,
      aux_sym_account_repeat1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      sym_date,
      sym_note,
      sym_commodity,
    ACTIONS(101), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
  [1388] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    ACTIONS(176), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1412] = 9,
    ACTIONS(218), 1,
      aux_sym_uncheck_token1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      aux_sym_custom_definition_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(47), 1,
      sym_uncheck,
    STATE(48), 1,
      sym_text,
    ACTIONS(257), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_date,
  [1446] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(259), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1470] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_date,
      sym_note,
      sym_commodity,
    ACTIONS(142), 7,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
  [1493] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(267), 1,
      sym_metadata_key,
    STATE(63), 1,
      sym_metadata_definition,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(46), 2,
      sym_comment,
      aux_sym__entry_definition_repeat1,
    ACTIONS(265), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [1518] = 4,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_comment,
    ACTIONS(272), 9,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_metadata_key,
      sym_date,
      anon_sym_DQUOTE,
  [1539] = 4,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      sym_comment,
    ACTIONS(276), 9,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_metadata_key,
      sym_date,
      anon_sym_DQUOTE,
  [1560] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(280), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1585] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_open_definition_repeat1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(286), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1610] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      sym_metadata_key,
    STATE(46), 1,
      aux_sym__entry_definition_repeat1,
    STATE(51), 1,
      sym_comment,
    STATE(63), 1,
      sym_metadata_definition,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(290), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [1637] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(52), 2,
      sym_comment,
      aux_sym_open_definition_repeat1,
    ACTIONS(296), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1660] = 4,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_comment,
    ACTIONS(157), 9,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_metadata_key,
      sym_date,
      anon_sym_DQUOTE,
  [1681] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      sym_metadata_key,
    STATE(51), 1,
      aux_sym__entry_definition_repeat1,
    STATE(54), 1,
      sym_comment,
    STATE(63), 1,
      sym_metadata_definition,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(303), 5,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
  [1708] = 4,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
    ACTIONS(168), 9,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_metadata_key,
      sym_date,
      anon_sym_DQUOTE,
  [1729] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_comment,
    STATE(71), 1,
      sym_text,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1751] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym_commodity,
    STATE(57), 1,
      sym_comment,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(309), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1773] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_comment,
    ACTIONS(294), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_date,
    ACTIONS(296), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1793] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_comment,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(315), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1812] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(319), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1831] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_comment,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(323), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1850] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_comment,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(327), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1869] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_comment,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(331), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1888] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(64), 1,
      sym_comment,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(335), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1907] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_comment,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(339), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1926] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_comment,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(343), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1945] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_comment,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(347), 6,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1964] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_comment,
    ACTIONS(349), 7,
      ts_builtin_sym_end,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1980] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      sym_comment,
    ACTIONS(351), 7,
      ts_builtin_sym_end,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1996] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_comment,
    ACTIONS(353), 7,
      ts_builtin_sym_end,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [2012] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_comment,
    ACTIONS(355), 7,
      ts_builtin_sym_end,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [2028] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_comment,
    ACTIONS(357), 7,
      ts_builtin_sym_end,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [2044] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_comment,
    ACTIONS(359), 7,
      ts_builtin_sym_end,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [2060] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_comment,
    ACTIONS(361), 7,
      ts_builtin_sym_end,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_include,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [2076] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_account,
    STATE(75), 1,
      sym_comment,
    ACTIONS(67), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [2093] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_account,
    STATE(76), 1,
      sym_comment,
    ACTIONS(67), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [2110] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_account,
    STATE(77), 1,
      sym_comment,
    ACTIONS(67), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [2127] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_comment,
    STATE(101), 1,
      sym_account,
    ACTIONS(67), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [2144] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_comment,
    STATE(104), 1,
      sym_account,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [2161] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_comment,
    STATE(94), 1,
      sym_account,
    ACTIONS(67), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [2178] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_account,
    STATE(81), 1,
      sym_comment,
    ACTIONS(47), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [2195] = 4,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      aux_sym_text_token1,
    STATE(82), 2,
      sym_comment,
      aux_sym_text_repeat1,
  [2209] = 5,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(83), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_text_repeat1,
  [2225] = 5,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_text_repeat1,
  [2241] = 5,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_text_repeat1,
    STATE(85), 1,
      sym_comment,
  [2257] = 5,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_text_repeat1,
    STATE(86), 1,
      sym_comment,
  [2273] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_text,
    STATE(87), 1,
      sym_comment,
  [2286] = 3,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2297] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_text,
    STATE(89), 1,
      sym_comment,
  [2310] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      sym_comment,
    STATE(93), 1,
      sym_text,
  [2323] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_comment,
    STATE(92), 1,
      sym_text,
  [2336] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym_text,
    STATE(92), 1,
      sym_comment,
  [2349] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_text,
    STATE(93), 1,
      sym_comment,
  [2362] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(382), 1,
      sym_amount,
    STATE(94), 1,
      sym_comment,
  [2372] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(384), 1,
      sym_commodity,
    STATE(95), 1,
      sym_comment,
  [2382] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      sym__account_component,
    STATE(96), 1,
      sym_comment,
  [2392] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(388), 1,
      sym_unsigned_amount,
    STATE(97), 1,
      sym_comment,
  [2402] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      sym_unsigned_amount,
    STATE(98), 1,
      sym_comment,
  [2412] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      sym_commodity,
    STATE(99), 1,
      sym_comment,
  [2422] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(394), 1,
      sym_commodity,
    STATE(100), 1,
      sym_comment,
  [2432] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(396), 1,
      sym_note,
    STATE(101), 1,
      sym_comment,
  [2442] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      sym_commodity,
    STATE(102), 1,
      sym_comment,
  [2452] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(400), 1,
      sym_commodity,
    STATE(103), 1,
      sym_comment,
  [2462] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(402), 1,
      sym_filepath,
    STATE(104), 1,
      sym_comment,
  [2472] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      sym__account_component,
    STATE(105), 1,
      sym_comment,
  [2482] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_comment,
  [2492] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(408), 1,
      sym_commodity,
    STATE(107), 1,
      sym_comment,
  [2502] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      sym_amount,
    STATE(108), 1,
      sym_comment,
  [2512] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_comment,
  [2522] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      sym_tag,
    STATE(110), 1,
      sym_comment,
  [2532] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(416), 1,
      sym_tag,
    STATE(111), 1,
      sym_comment,
  [2542] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      sym_filepath,
    STATE(112), 1,
      sym_comment,
  [2552] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(420), 1,
      anon_sym_COLON,
    STATE(113), 1,
      sym_comment,
  [2562] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(422), 1,
      sym_commodity,
    STATE(114), 1,
      sym_comment,
  [2572] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(424), 1,
      sym_commodity,
    STATE(115), 1,
      sym_comment,
  [2582] = 3,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(426), 1,
      aux_sym_comment_token1,
    STATE(116), 1,
      sym_comment,
  [2592] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(428), 1,
      anon_sym_COLON,
    STATE(117), 1,
      sym_comment,
  [2602] = 1,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 202,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 378,
  [SMALL_STATE(11)] = 423,
  [SMALL_STATE(12)] = 461,
  [SMALL_STATE(13)] = 493,
  [SMALL_STATE(14)] = 525,
  [SMALL_STATE(15)] = 563,
  [SMALL_STATE(16)] = 601,
  [SMALL_STATE(17)] = 639,
  [SMALL_STATE(18)] = 675,
  [SMALL_STATE(19)] = 713,
  [SMALL_STATE(20)] = 751,
  [SMALL_STATE(21)] = 781,
  [SMALL_STATE(22)] = 817,
  [SMALL_STATE(23)] = 844,
  [SMALL_STATE(24)] = 873,
  [SMALL_STATE(25)] = 900,
  [SMALL_STATE(26)] = 927,
  [SMALL_STATE(27)] = 954,
  [SMALL_STATE(28)] = 984,
  [SMALL_STATE(29)] = 1024,
  [SMALL_STATE(30)] = 1050,
  [SMALL_STATE(31)] = 1092,
  [SMALL_STATE(32)] = 1117,
  [SMALL_STATE(33)] = 1144,
  [SMALL_STATE(34)] = 1178,
  [SMALL_STATE(35)] = 1204,
  [SMALL_STATE(36)] = 1228,
  [SMALL_STATE(37)] = 1252,
  [SMALL_STATE(38)] = 1284,
  [SMALL_STATE(39)] = 1308,
  [SMALL_STATE(40)] = 1332,
  [SMALL_STATE(41)] = 1360,
  [SMALL_STATE(42)] = 1388,
  [SMALL_STATE(43)] = 1412,
  [SMALL_STATE(44)] = 1446,
  [SMALL_STATE(45)] = 1470,
  [SMALL_STATE(46)] = 1493,
  [SMALL_STATE(47)] = 1518,
  [SMALL_STATE(48)] = 1539,
  [SMALL_STATE(49)] = 1560,
  [SMALL_STATE(50)] = 1585,
  [SMALL_STATE(51)] = 1610,
  [SMALL_STATE(52)] = 1637,
  [SMALL_STATE(53)] = 1660,
  [SMALL_STATE(54)] = 1681,
  [SMALL_STATE(55)] = 1708,
  [SMALL_STATE(56)] = 1729,
  [SMALL_STATE(57)] = 1751,
  [SMALL_STATE(58)] = 1773,
  [SMALL_STATE(59)] = 1793,
  [SMALL_STATE(60)] = 1812,
  [SMALL_STATE(61)] = 1831,
  [SMALL_STATE(62)] = 1850,
  [SMALL_STATE(63)] = 1869,
  [SMALL_STATE(64)] = 1888,
  [SMALL_STATE(65)] = 1907,
  [SMALL_STATE(66)] = 1926,
  [SMALL_STATE(67)] = 1945,
  [SMALL_STATE(68)] = 1964,
  [SMALL_STATE(69)] = 1980,
  [SMALL_STATE(70)] = 1996,
  [SMALL_STATE(71)] = 2012,
  [SMALL_STATE(72)] = 2028,
  [SMALL_STATE(73)] = 2044,
  [SMALL_STATE(74)] = 2060,
  [SMALL_STATE(75)] = 2076,
  [SMALL_STATE(76)] = 2093,
  [SMALL_STATE(77)] = 2110,
  [SMALL_STATE(78)] = 2127,
  [SMALL_STATE(79)] = 2144,
  [SMALL_STATE(80)] = 2161,
  [SMALL_STATE(81)] = 2178,
  [SMALL_STATE(82)] = 2195,
  [SMALL_STATE(83)] = 2209,
  [SMALL_STATE(84)] = 2225,
  [SMALL_STATE(85)] = 2241,
  [SMALL_STATE(86)] = 2257,
  [SMALL_STATE(87)] = 2273,
  [SMALL_STATE(88)] = 2286,
  [SMALL_STATE(89)] = 2297,
  [SMALL_STATE(90)] = 2310,
  [SMALL_STATE(91)] = 2323,
  [SMALL_STATE(92)] = 2336,
  [SMALL_STATE(93)] = 2349,
  [SMALL_STATE(94)] = 2362,
  [SMALL_STATE(95)] = 2372,
  [SMALL_STATE(96)] = 2382,
  [SMALL_STATE(97)] = 2392,
  [SMALL_STATE(98)] = 2402,
  [SMALL_STATE(99)] = 2412,
  [SMALL_STATE(100)] = 2422,
  [SMALL_STATE(101)] = 2432,
  [SMALL_STATE(102)] = 2442,
  [SMALL_STATE(103)] = 2452,
  [SMALL_STATE(104)] = 2462,
  [SMALL_STATE(105)] = 2472,
  [SMALL_STATE(106)] = 2482,
  [SMALL_STATE(107)] = 2492,
  [SMALL_STATE(108)] = 2502,
  [SMALL_STATE(109)] = 2512,
  [SMALL_STATE(110)] = 2522,
  [SMALL_STATE(111)] = 2532,
  [SMALL_STATE(112)] = 2542,
  [SMALL_STATE(113)] = 2552,
  [SMALL_STATE(114)] = 2562,
  [SMALL_STATE(115)] = 2572,
  [SMALL_STATE(116)] = 2582,
  [SMALL_STATE(117)] = 2592,
  [SMALL_STATE(118)] = 2602,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 1), SHIFT(117),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2, .production_id = 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 2, .production_id = 5),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 2, .production_id = 5), SHIFT(117),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_definition, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_definition, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4, .production_id = 7),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 4, .production_id = 7),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 4, .production_id = 7), SHIFT(117),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3, .production_id = 7),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 3, .production_id = 7),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 3, .production_id = 7), SHIFT(117),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3, .production_id = 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 3, .production_id = 5),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 3, .production_id = 5), SHIFT(117),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 2), SHIFT(117),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 5, .production_id = 7),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 5, .production_id = 7),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 5, .production_id = 7), SHIFT(117),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 3),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 3), SHIFT(117),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_definition_repeat2, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2), SHIFT_REPEAT(13),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_definition_repeat2, 2), SHIFT_REPEAT(117),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 4, .production_id = 5),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 4, .production_id = 5), SHIFT(117),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(105),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_definition, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(29),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_txn, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_definition, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_definition, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_definition, 3, .production_id = 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_definition, 3, .production_id = 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(96),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_value, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_value, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_definition_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 2), SHIFT_REPEAT(48),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 2), SHIFT_REPEAT(84),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_definition, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_definition, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_definition_repeat2, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_definition, 2, .production_id = 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_definition, 2, .production_id = 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_definition, 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entry_definition_repeat1, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__entry_definition_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__entry_definition_repeat1, 2), SHIFT_REPEAT(113),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_definition_repeat1, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uncheck, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uncheck, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_definition, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_definition, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry_definition, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entry_definition, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(100),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry_definition, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entry_definition, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_definition, 2, .production_id = 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_definition, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance_definition, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_definition, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_definition, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_definition, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_definition, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entry_definition_repeat1, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__entry_definition_repeat1, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_definition, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_definition, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_definition, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 3, .production_id = 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_definition, 3, .production_id = 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad_definition, 3, .production_id = 6),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad_definition, 3, .production_id = 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_definition, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_definition, 3, .production_id = 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_definition, 3, .production_id = 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag_definition, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag_definition, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(88),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [412] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
