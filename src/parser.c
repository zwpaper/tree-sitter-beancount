#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_pushtag = 1,
  anon_sym_poptag = 2,
  anon_sym_open = 3,
  anon_sym_COMMA = 4,
  anon_sym_close = 5,
  anon_sym_commodity = 6,
  aux_sym_price_token1 = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_tag = 10,
  sym_link = 11,
  anon_sym_note = 12,
  anon_sym_document = 13,
  sym_filepath = 14,
  anon_sym_event = 15,
  anon_sym_balance = 16,
  anon_sym_price = 17,
  anon_sym_pad = 18,
  anon_sym_Assets = 19,
  anon_sym_Liabilities = 20,
  anon_sym_Equity = 21,
  anon_sym_Income = 22,
  anon_sym_Expenses = 23,
  anon_sym_COLON = 24,
  sym__account_component = 25,
  anon_sym_STRICT = 26,
  anon_sym_NONE = 27,
  sym_date = 28,
  sym_note = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_text_token1 = 31,
  sym_unsigned_amount = 32,
  sym_amount = 33,
  anon_sym_STAR = 34,
  anon_sym_BANG = 35,
  sym_commodity = 36,
  anon_sym_SEMI = 37,
  aux_sym_comment_token1 = 38,
  sym_source_file = 39,
  sym__definition = 40,
  sym_pushtag_definition = 41,
  sym_poptag_definition = 42,
  sym__entry_definition = 43,
  sym_open_definition = 44,
  sym_close_definition = 45,
  sym_commodity_definition = 46,
  sym_transaction_definition = 47,
  sym_post_definition = 48,
  sym_price = 49,
  sym_cost = 50,
  sym_note_definition = 51,
  sym_document_definition = 52,
  sym_event_definition = 53,
  sym_balance_definition = 54,
  sym_price_definition = 55,
  sym_pad_definition = 56,
  sym_account = 57,
  sym_text = 58,
  sym_txn = 59,
  sym_comment = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_open_definition_repeat1 = 62,
  aux_sym_transaction_definition_repeat1 = 63,
  aux_sym_transaction_definition_repeat2 = 64,
  aux_sym_account_repeat1 = 65,
  aux_sym_text_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_Assets] = "Assets",
  [anon_sym_Liabilities] = "Liabilities",
  [anon_sym_Equity] = "Equity",
  [anon_sym_Income] = "Income",
  [anon_sym_Expenses] = "Expenses",
  [anon_sym_COLON] = ":",
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
  [sym_account] = "account",
  [sym_text] = "text",
  [sym_txn] = "txn",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_open_definition_repeat1] = "open_definition_repeat1",
  [aux_sym_transaction_definition_repeat1] = "transaction_definition_repeat1",
  [aux_sym_transaction_definition_repeat2] = "transaction_definition_repeat2",
  [aux_sym_account_repeat1] = "account_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_Assets] = anon_sym_Assets,
  [anon_sym_Liabilities] = anon_sym_Liabilities,
  [anon_sym_Equity] = anon_sym_Equity,
  [anon_sym_Income] = anon_sym_Income,
  [anon_sym_Expenses] = anon_sym_Expenses,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_account] = sym_account,
  [sym_text] = sym_text,
  [sym_txn] = sym_txn,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_open_definition_repeat1] = aux_sym_open_definition_repeat1,
  [aux_sym_transaction_definition_repeat1] = aux_sym_transaction_definition_repeat1,
  [aux_sym_transaction_definition_repeat2] = aux_sym_transaction_definition_repeat2,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_account] = {
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
  field_name = 1,
  field_narration = 2,
  field_pad = 3,
  field_payee = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_narration] = "narration",
  [field_pad] = "pad",
  [field_payee] = "payee",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_narration, 1},
  [1] =
    {field_name, 1},
    {field_value, 2},
  [3] =
    {field_pad, 2},
  [4] =
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
      if (eof) ADVANCE(108);
      if (lookahead == '!') ADVANCE(161);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A') ADVANCE(173);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == 'I') ADVANCE(171);
      if (lookahead == 'L') ADVANCE(170);
      if (lookahead == 'N') ADVANCE(166);
      if (lookahead == 'S') ADVANCE(168);
      if (lookahead == '^') ADVANCE(103);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == '1') ADVANCE(145);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '1') ADVANCE(154);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '1') ADVANCE(93);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(98);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'q') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 87:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(7);
      END_STATE();
    case 91:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(6);
      END_STATE();
    case 92:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(137);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(90);
      END_STATE();
    case 94:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 105:
      if (eof) ADVANCE(108);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead == '^') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 106:
      if (eof) ADVANCE(108);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == 'A') ADVANCE(173);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == 'I') ADVANCE(171);
      if (lookahead == 'L') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 107:
      if (eof) ADVANCE(108);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_price_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_price_token1);
      if (lookahead == '@') ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_link);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '0') ADVANCE(146);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(144);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(156);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(152);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 105},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 105},
  [4] = {.lex_state = 105},
  [5] = {.lex_state = 105},
  [6] = {.lex_state = 105},
  [7] = {.lex_state = 105},
  [8] = {.lex_state = 105},
  [9] = {.lex_state = 106},
  [10] = {.lex_state = 106},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 105},
  [14] = {.lex_state = 105},
  [15] = {.lex_state = 105},
  [16] = {.lex_state = 105},
  [17] = {.lex_state = 105},
  [18] = {.lex_state = 105},
  [19] = {.lex_state = 105},
  [20] = {.lex_state = 105},
  [21] = {.lex_state = 105},
  [22] = {.lex_state = 105},
  [23] = {.lex_state = 105},
  [24] = {.lex_state = 105},
  [25] = {.lex_state = 105},
  [26] = {.lex_state = 105},
  [27] = {.lex_state = 105},
  [28] = {.lex_state = 105},
  [29] = {.lex_state = 105},
  [30] = {.lex_state = 105},
  [31] = {.lex_state = 105},
  [32] = {.lex_state = 105},
  [33] = {.lex_state = 105},
  [34] = {.lex_state = 105},
  [35] = {.lex_state = 105},
  [36] = {.lex_state = 105},
  [37] = {.lex_state = 105},
  [38] = {.lex_state = 105},
  [39] = {.lex_state = 105},
  [40] = {.lex_state = 105},
  [41] = {.lex_state = 105},
  [42] = {.lex_state = 105},
  [43] = {.lex_state = 105},
  [44] = {.lex_state = 105},
  [45] = {.lex_state = 107},
  [46] = {.lex_state = 105},
  [47] = {.lex_state = 105},
  [48] = {.lex_state = 105},
  [49] = {.lex_state = 105},
  [50] = {.lex_state = 105},
  [51] = {.lex_state = 105},
  [52] = {.lex_state = 105},
  [53] = {.lex_state = 105},
  [54] = {.lex_state = 105},
  [55] = {.lex_state = 105},
  [56] = {.lex_state = 105},
  [57] = {.lex_state = 105},
  [58] = {.lex_state = 105},
  [59] = {.lex_state = 105},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 107},
  [62] = {.lex_state = 107},
  [63] = {.lex_state = 107},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 107},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 105},
  [71] = {.lex_state = 107},
  [72] = {.lex_state = 107},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 107},
  [75] = {.lex_state = 106},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 107},
  [80] = {.lex_state = 105},
  [81] = {.lex_state = 107},
  [82] = {.lex_state = 107},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 177},
  [89] = {.lex_state = 107},
  [90] = {.lex_state = 107},
  [91] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(83),
    [sym__definition] = STATE(57),
    [sym_pushtag_definition] = STATE(58),
    [sym_poptag_definition] = STATE(58),
    [sym__entry_definition] = STATE(58),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_pushtag] = ACTIONS(7),
    [anon_sym_poptag] = ACTIONS(9),
    [sym_date] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_open,
    ACTIONS(15), 1,
      anon_sym_close,
    ACTIONS(17), 1,
      anon_sym_commodity,
    ACTIONS(19), 1,
      anon_sym_note,
    ACTIONS(21), 1,
      anon_sym_document,
    ACTIONS(23), 1,
      anon_sym_event,
    ACTIONS(25), 1,
      anon_sym_balance,
    ACTIONS(27), 1,
      anon_sym_price,
    ACTIONS(29), 1,
      anon_sym_pad,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      sym_txn,
    ACTIONS(31), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    STATE(55), 10,
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
  [53] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_text,
    STATE(8), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(19), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(35), 2,
      sym_tag,
      sym_link,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [95] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_text,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(18), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(35), 2,
      sym_tag,
      sym_link,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [137] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(16), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(35), 2,
      sym_tag,
      sym_link,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [173] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(35), 2,
      sym_tag,
      sym_link,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [209] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(21), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(35), 2,
      sym_tag,
      sym_link,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [245] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(24), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(35), 2,
      sym_tag,
      sym_link,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [281] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      anon_sym_COLON,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_account_repeat1,
    ACTIONS(55), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(51), 10,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [310] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      anon_sym_COLON,
    ACTIONS(62), 2,
      sym_amount,
      sym_commodity,
    STATE(10), 2,
      sym_comment,
      aux_sym_account_repeat1,
    ACTIONS(57), 10,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [337] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      anon_sym_COLON,
    STATE(9), 1,
      aux_sym_account_repeat1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(66), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(64), 10,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [366] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(57), 11,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_COLON,
      sym_date,
      sym_note,
  [390] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      aux_sym_price_token1,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_comment,
    STATE(26), 1,
      sym_cost,
    STATE(29), 1,
      sym_price,
    ACTIONS(68), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [420] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 2,
      sym_tag,
      sym_link,
    STATE(14), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat1,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [443] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    STATE(15), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat2,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(81), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [470] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(16), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [499] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(17), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [528] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(18), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [557] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(19), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [586] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(86), 12,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      anon_sym_DQUOTE,
  [607] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(21), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [636] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_comment,
    ACTIONS(90), 12,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      anon_sym_DQUOTE,
  [657] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(92), 12,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      anon_sym_DQUOTE,
  [678] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(24), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [707] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(96), 11,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [727] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      aux_sym_price_token1,
    STATE(26), 1,
      sym_comment,
    STATE(33), 1,
      sym_price,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [751] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    ACTIONS(100), 10,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_price_token1,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [770] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      sym_amount,
    STATE(28), 1,
      sym_comment,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [791] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_comment,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [809] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_pushtag,
    ACTIONS(9), 1,
      anon_sym_poptag,
    ACTIONS(11), 1,
      sym_date,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
    STATE(57), 1,
      sym__definition,
    STATE(58), 3,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [839] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_comment,
    ACTIONS(108), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [857] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_pushtag,
    ACTIONS(115), 1,
      anon_sym_poptag,
    ACTIONS(118), 1,
      sym_date,
    STATE(57), 1,
      sym__definition,
    STATE(32), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(58), 3,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [885] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_comment,
    ACTIONS(121), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [903] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_comment,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [921] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(35), 2,
      sym_comment,
      aux_sym_open_definition_repeat1,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [938] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_comment,
    STATE(45), 1,
      sym_account,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [955] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
    STATE(40), 1,
      sym_account,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [972] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    STATE(70), 1,
      sym_account,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [989] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_comment,
    STATE(79), 1,
      sym_account,
    ACTIONS(130), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1006] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_comment,
    STATE(54), 1,
      sym_account,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1023] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_open_definition_repeat1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1042] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    STATE(75), 1,
      sym_account,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1059] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_comment,
    STATE(52), 1,
      sym_account,
    ACTIONS(37), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1076] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_open_definition_repeat1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1095] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      sym_commodity,
    STATE(45), 1,
      sym_comment,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1111] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_comment,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_COMMA,
      sym_date,
  [1125] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1138] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1151] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_comment,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1164] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_comment,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1177] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_comment,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1190] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_comment,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1203] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_comment,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1216] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_comment,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1229] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1242] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_comment,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1255] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_comment,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1268] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_comment,
    ACTIONS(164), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1281] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_comment,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1294] = 5,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      aux_sym_text_token1,
    ACTIONS(172), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_text_repeat1,
  [1310] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      sym_filepath,
    ACTIONS(174), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_account_repeat1,
  [1326] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      sym_filepath,
    ACTIONS(174), 1,
      anon_sym_COLON,
    STATE(62), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_account_repeat1,
  [1342] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(57), 1,
      sym_filepath,
    ACTIONS(176), 1,
      anon_sym_COLON,
    STATE(63), 2,
      sym_comment,
      aux_sym_account_repeat1,
  [1356] = 4,
    ACTIONS(172), 1,
      anon_sym_SEMI,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_text_token1,
    STATE(64), 2,
      sym_comment,
      aux_sym_text_repeat1,
  [1370] = 5,
    ACTIONS(170), 1,
      aux_sym_text_token1,
    ACTIONS(172), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym_text_repeat1,
    STATE(65), 1,
      sym_comment,
  [1386] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_text,
    STATE(66), 1,
      sym_comment,
  [1399] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_text,
    STATE(67), 1,
      sym_comment,
  [1412] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_comment,
    ACTIONS(57), 2,
      sym_filepath,
      anon_sym_COLON,
  [1423] = 3,
    ACTIONS(172), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1434] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      sym_amount,
    STATE(70), 1,
      sym_comment,
  [1444] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      sym_commodity,
    STATE(71), 1,
      sym_comment,
  [1454] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      sym_commodity,
    STATE(72), 1,
      sym_comment,
  [1464] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      sym_commodity,
    STATE(73), 1,
      sym_comment,
  [1474] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      sym_commodity,
    STATE(74), 1,
      sym_comment,
  [1484] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(198), 1,
      sym_note,
    STATE(75), 1,
      sym_comment,
  [1494] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      sym_unsigned_amount,
    STATE(76), 1,
      sym_comment,
  [1504] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(202), 1,
      sym_unsigned_amount,
    STATE(77), 1,
      sym_comment,
  [1514] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      sym__account_component,
    STATE(78), 1,
      sym_comment,
  [1524] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(206), 1,
      sym_filepath,
    STATE(79), 1,
      sym_comment,
  [1534] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      sym_amount,
    STATE(80), 1,
      sym_comment,
  [1544] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      sym_commodity,
    STATE(81), 1,
      sym_comment,
  [1554] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      sym_commodity,
    STATE(82), 1,
      sym_comment,
  [1564] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_comment,
  [1574] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(216), 1,
      sym_tag,
    STATE(84), 1,
      sym_comment,
  [1584] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_comment,
  [1594] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(220), 1,
      sym_tag,
    STATE(86), 1,
      sym_comment,
  [1604] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
      sym__account_component,
    STATE(87), 1,
      sym_comment,
  [1614] = 3,
    ACTIONS(172), 1,
      anon_sym_SEMI,
    ACTIONS(224), 1,
      aux_sym_comment_token1,
    STATE(88), 1,
      sym_comment,
  [1624] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      sym_commodity,
    STATE(89), 1,
      sym_comment,
  [1634] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(228), 1,
      sym_commodity,
    STATE(90), 1,
      sym_comment,
  [1644] = 1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 95,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 173,
  [SMALL_STATE(7)] = 209,
  [SMALL_STATE(8)] = 245,
  [SMALL_STATE(9)] = 281,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 420,
  [SMALL_STATE(15)] = 443,
  [SMALL_STATE(16)] = 470,
  [SMALL_STATE(17)] = 499,
  [SMALL_STATE(18)] = 528,
  [SMALL_STATE(19)] = 557,
  [SMALL_STATE(20)] = 586,
  [SMALL_STATE(21)] = 607,
  [SMALL_STATE(22)] = 636,
  [SMALL_STATE(23)] = 657,
  [SMALL_STATE(24)] = 678,
  [SMALL_STATE(25)] = 707,
  [SMALL_STATE(26)] = 727,
  [SMALL_STATE(27)] = 751,
  [SMALL_STATE(28)] = 770,
  [SMALL_STATE(29)] = 791,
  [SMALL_STATE(30)] = 809,
  [SMALL_STATE(31)] = 839,
  [SMALL_STATE(32)] = 857,
  [SMALL_STATE(33)] = 885,
  [SMALL_STATE(34)] = 903,
  [SMALL_STATE(35)] = 921,
  [SMALL_STATE(36)] = 938,
  [SMALL_STATE(37)] = 955,
  [SMALL_STATE(38)] = 972,
  [SMALL_STATE(39)] = 989,
  [SMALL_STATE(40)] = 1006,
  [SMALL_STATE(41)] = 1023,
  [SMALL_STATE(42)] = 1042,
  [SMALL_STATE(43)] = 1059,
  [SMALL_STATE(44)] = 1076,
  [SMALL_STATE(45)] = 1095,
  [SMALL_STATE(46)] = 1111,
  [SMALL_STATE(47)] = 1125,
  [SMALL_STATE(48)] = 1138,
  [SMALL_STATE(49)] = 1151,
  [SMALL_STATE(50)] = 1164,
  [SMALL_STATE(51)] = 1177,
  [SMALL_STATE(52)] = 1190,
  [SMALL_STATE(53)] = 1203,
  [SMALL_STATE(54)] = 1216,
  [SMALL_STATE(55)] = 1229,
  [SMALL_STATE(56)] = 1242,
  [SMALL_STATE(57)] = 1255,
  [SMALL_STATE(58)] = 1268,
  [SMALL_STATE(59)] = 1281,
  [SMALL_STATE(60)] = 1294,
  [SMALL_STATE(61)] = 1310,
  [SMALL_STATE(62)] = 1326,
  [SMALL_STATE(63)] = 1342,
  [SMALL_STATE(64)] = 1356,
  [SMALL_STATE(65)] = 1370,
  [SMALL_STATE(66)] = 1386,
  [SMALL_STATE(67)] = 1399,
  [SMALL_STATE(68)] = 1412,
  [SMALL_STATE(69)] = 1423,
  [SMALL_STATE(70)] = 1434,
  [SMALL_STATE(71)] = 1444,
  [SMALL_STATE(72)] = 1454,
  [SMALL_STATE(73)] = 1464,
  [SMALL_STATE(74)] = 1474,
  [SMALL_STATE(75)] = 1484,
  [SMALL_STATE(76)] = 1494,
  [SMALL_STATE(77)] = 1504,
  [SMALL_STATE(78)] = 1514,
  [SMALL_STATE(79)] = 1524,
  [SMALL_STATE(80)] = 1534,
  [SMALL_STATE(81)] = 1544,
  [SMALL_STATE(82)] = 1554,
  [SMALL_STATE(83)] = 1564,
  [SMALL_STATE(84)] = 1574,
  [SMALL_STATE(85)] = 1584,
  [SMALL_STATE(86)] = 1594,
  [SMALL_STATE(87)] = 1604,
  [SMALL_STATE(88)] = 1614,
  [SMALL_STATE(89)] = 1624,
  [SMALL_STATE(90)] = 1634,
  [SMALL_STATE(91)] = 1644,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3, .production_id = 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(87),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 5, .production_id = 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(74),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag_definition, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_definition, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 3, .production_id = 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad_definition, 3, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry_definition, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag_definition, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_definition, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(78),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(69),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
