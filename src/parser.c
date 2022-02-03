#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_open = 1,
  anon_sym_COMMA = 2,
  anon_sym_close = 3,
  anon_sym_commodity = 4,
  anon_sym_note = 5,
  anon_sym_balance = 6,
  anon_sym_Assets = 7,
  anon_sym_Liabilities = 8,
  anon_sym_Equity = 9,
  anon_sym_Income = 10,
  anon_sym_Expenses = 11,
  anon_sym_COLON = 12,
  sym__account_component = 13,
  anon_sym_STRICT = 14,
  anon_sym_NONE = 15,
  sym_date = 16,
  sym_note = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_payee_token1 = 19,
  sym_amount = 20,
  anon_sym_STAR = 21,
  anon_sym_BANG = 22,
  sym_commodity = 23,
  anon_sym_SEMI = 24,
  aux_sym_comment_token1 = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym__entry_definition = 28,
  sym_open_definition = 29,
  sym_close_definition = 30,
  sym_commodity_definition = 31,
  sym_transaction_definition = 32,
  sym_post_definition = 33,
  sym_note_definition = 34,
  sym_balance_definition = 35,
  sym_account = 36,
  sym_payee = 37,
  sym_narration = 38,
  sym_txn = 39,
  sym_comment = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_open_definition_repeat1 = 42,
  aux_sym_transaction_definition_repeat1 = 43,
  aux_sym_account_repeat1 = 44,
  aux_sym_payee_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_open] = "open",
  [anon_sym_COMMA] = ",",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [anon_sym_note] = "note",
  [anon_sym_balance] = "balance",
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
  [aux_sym_payee_token1] = "payee_token1",
  [sym_amount] = "amount",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [sym_commodity] = "commodity",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__entry_definition] = "_entry_definition",
  [sym_open_definition] = "open_definition",
  [sym_close_definition] = "close_definition",
  [sym_commodity_definition] = "commodity_definition",
  [sym_transaction_definition] = "transaction_definition",
  [sym_post_definition] = "post_definition",
  [sym_note_definition] = "note_definition",
  [sym_balance_definition] = "balance_definition",
  [sym_account] = "account",
  [sym_payee] = "payee",
  [sym_narration] = "narration",
  [sym_txn] = "txn",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_open_definition_repeat1] = "open_definition_repeat1",
  [aux_sym_transaction_definition_repeat1] = "transaction_definition_repeat1",
  [aux_sym_account_repeat1] = "account_repeat1",
  [aux_sym_payee_repeat1] = "payee_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_balance] = anon_sym_balance,
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
  [aux_sym_payee_token1] = aux_sym_payee_token1,
  [sym_amount] = sym_amount,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_commodity] = sym_commodity,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__entry_definition] = sym__entry_definition,
  [sym_open_definition] = sym_open_definition,
  [sym_close_definition] = sym_close_definition,
  [sym_commodity_definition] = sym_commodity_definition,
  [sym_transaction_definition] = sym_transaction_definition,
  [sym_post_definition] = sym_post_definition,
  [sym_note_definition] = sym_note_definition,
  [sym_balance_definition] = sym_balance_definition,
  [sym_account] = sym_account,
  [sym_payee] = sym_payee,
  [sym_narration] = sym_narration,
  [sym_txn] = sym_txn,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_open_definition_repeat1] = aux_sym_open_definition_repeat1,
  [aux_sym_transaction_definition_repeat1] = aux_sym_transaction_definition_repeat1,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
  [aux_sym_payee_repeat1] = aux_sym_payee_repeat1,
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
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
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
  [aux_sym_payee_token1] = {
    .visible = false,
    .named = false,
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
  [sym_note_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [sym_narration] = {
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
  [aux_sym_account_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_payee_repeat1] = {
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
      if (eof) ADVANCE(75);
      if (lookahead == '!') ADVANCE(106);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == 'A') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == '1') ADVANCE(99);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'q') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      END_STATE();
    case 62:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      END_STATE();
    case 63:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(61);
      END_STATE();
    case 65:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == 'A') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(100);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(98);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 73},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 74},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 122},
  [50] = {.lex_state = 74},
  [51] = {.lex_state = 74},
  [52] = {.lex_state = 74},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
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
    [sym_amount] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_commodity] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym__definition] = STATE(44),
    [sym__entry_definition] = STATE(42),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_open,
    ACTIONS(11), 1,
      anon_sym_close,
    ACTIONS(13), 1,
      anon_sym_commodity,
    ACTIONS(15), 1,
      anon_sym_note,
    ACTIONS(17), 1,
      anon_sym_balance,
    STATE(2), 1,
      sym_comment,
    STATE(32), 1,
      sym_txn,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    STATE(40), 6,
      sym_open_definition,
      sym_close_definition,
      sym_commodity_definition,
      sym_transaction_definition,
      sym_note_definition,
      sym_balance_definition,
  [37] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_account_repeat1,
    ACTIONS(25), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [64] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      anon_sym_COLON,
    ACTIONS(32), 2,
      sym_amount,
      sym_commodity,
    STATE(4), 2,
      sym_comment,
      aux_sym_account_repeat1,
    ACTIONS(27), 8,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [89] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(4), 1,
      aux_sym_account_repeat1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(36), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(34), 8,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [116] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      sym_comment,
    ACTIONS(32), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(27), 9,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_COLON,
      sym_date,
      sym_note,
  [138] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      sym_account,
    STATE(18), 1,
      sym_post_definition,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [165] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_account,
    STATE(18), 1,
      sym_post_definition,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(8), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat1,
    ACTIONS(44), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [190] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(13), 1,
      sym_account,
    STATE(18), 1,
      sym_post_definition,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [217] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      sym_account,
    STATE(18), 1,
      sym_post_definition,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [244] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      sym_account,
    STATE(18), 1,
      sym_post_definition,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [271] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_comment,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [290] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(57), 1,
      sym_amount,
    STATE(13), 1,
      sym_comment,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [309] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_comment,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [328] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comment,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [344] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [360] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_comment,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [376] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [392] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [409] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    STATE(38), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [426] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_comment,
    STATE(45), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [443] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_comment,
    STATE(46), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [460] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_date,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      sym__entry_definition,
    STATE(44), 1,
      sym__definition,
  [482] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_date,
    STATE(42), 1,
      sym__entry_definition,
    STATE(44), 1,
      sym__definition,
    STATE(24), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [502] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_date,
  [519] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(26), 2,
      sym_comment,
      aux_sym_open_definition_repeat1,
  [534] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_open_definition_repeat1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_date,
  [551] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      sym_commodity,
    STATE(28), 1,
      sym_comment,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_date,
  [565] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_comment,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_date,
  [577] = 5,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_payee_token1,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_payee_repeat1,
  [593] = 4,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      aux_sym_payee_token1,
    STATE(31), 2,
      sym_comment,
      aux_sym_payee_repeat1,
  [607] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_narration,
    STATE(32), 1,
      sym_comment,
    STATE(39), 1,
      sym_payee,
  [623] = 5,
    ACTIONS(91), 1,
      aux_sym_payee_token1,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_payee_repeat1,
  [639] = 5,
    ACTIONS(91), 1,
      aux_sym_payee_token1,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_payee_repeat1,
    STATE(34), 1,
      sym_comment,
  [655] = 5,
    ACTIONS(91), 1,
      aux_sym_payee_token1,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_payee_repeat1,
    STATE(35), 1,
      sym_comment,
  [671] = 3,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_DQUOTE,
      aux_sym_payee_token1,
  [682] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_date,
  [693] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_date,
  [704] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_narration,
    STATE(39), 1,
      sym_comment,
  [717] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      sym_date,
  [728] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_comment,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_date,
  [739] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_date,
  [750] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_comment,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_date,
  [761] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym_date,
  [772] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(126), 1,
      sym_note,
    STATE(45), 1,
      sym_comment,
  [782] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      sym_amount,
    STATE(46), 1,
      sym_comment,
  [792] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      sym_commodity,
    STATE(47), 1,
      sym_comment,
  [802] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_comment,
  [812] = 3,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(134), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
  [822] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      sym_commodity,
    STATE(50), 1,
      sym_comment,
  [832] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      sym_commodity,
    STATE(51), 1,
      sym_comment,
  [842] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      sym_commodity,
    STATE(52), 1,
      sym_comment,
  [852] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      sym__account_component,
    STATE(53), 1,
      sym_comment,
  [862] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
  [872] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 190,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 244,
  [SMALL_STATE(12)] = 271,
  [SMALL_STATE(13)] = 290,
  [SMALL_STATE(14)] = 309,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 360,
  [SMALL_STATE(18)] = 376,
  [SMALL_STATE(19)] = 392,
  [SMALL_STATE(20)] = 409,
  [SMALL_STATE(21)] = 426,
  [SMALL_STATE(22)] = 443,
  [SMALL_STATE(23)] = 460,
  [SMALL_STATE(24)] = 482,
  [SMALL_STATE(25)] = 502,
  [SMALL_STATE(26)] = 519,
  [SMALL_STATE(27)] = 534,
  [SMALL_STATE(28)] = 551,
  [SMALL_STATE(29)] = 565,
  [SMALL_STATE(30)] = 577,
  [SMALL_STATE(31)] = 593,
  [SMALL_STATE(32)] = 607,
  [SMALL_STATE(33)] = 623,
  [SMALL_STATE(34)] = 639,
  [SMALL_STATE(35)] = 655,
  [SMALL_STATE(36)] = 671,
  [SMALL_STATE(37)] = 682,
  [SMALL_STATE(38)] = 693,
  [SMALL_STATE(39)] = 704,
  [SMALL_STATE(40)] = 717,
  [SMALL_STATE(41)] = 728,
  [SMALL_STATE(42)] = 739,
  [SMALL_STATE(43)] = 750,
  [SMALL_STATE(44)] = 761,
  [SMALL_STATE(45)] = 772,
  [SMALL_STATE(46)] = 782,
  [SMALL_STATE(47)] = 792,
  [SMALL_STATE(48)] = 802,
  [SMALL_STATE(49)] = 812,
  [SMALL_STATE(50)] = 822,
  [SMALL_STATE(51)] = 832,
  [SMALL_STATE(52)] = 842,
  [SMALL_STATE(53)] = 852,
  [SMALL_STATE(54)] = 862,
  [SMALL_STATE(55)] = 872,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(53),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(47),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2), SHIFT_REPEAT(36),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry_definition, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
