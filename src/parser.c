#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
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
  anon_sym_SEMI = 7,
  aux_sym_comment_definition_token1 = 8,
  anon_sym_Assets = 9,
  anon_sym_Liabilities = 10,
  anon_sym_Equity = 11,
  anon_sym_Income = 12,
  anon_sym_Expenses = 13,
  anon_sym_COLON = 14,
  sym__account_component = 15,
  anon_sym_STRICT = 16,
  anon_sym_NONE = 17,
  sym_date = 18,
  sym_note = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_payee_token1 = 21,
  sym_amount = 22,
  anon_sym_STAR = 23,
  anon_sym_BANG = 24,
  sym_commodity = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_entry_definition = 28,
  sym_open_definition = 29,
  sym_close_definition = 30,
  sym_commodity_definition = 31,
  sym_transaction_definition = 32,
  sym_note_definition = 33,
  sym_balance_definition = 34,
  sym_comment_definition = 35,
  sym_account = 36,
  sym_payee = 37,
  sym_narration = 38,
  sym_txn = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_open_definition_repeat1 = 41,
  aux_sym_transaction_definition_repeat1 = 42,
  aux_sym_account_repeat1 = 43,
  aux_sym_payee_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_open] = "open",
  [anon_sym_COMMA] = ",",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [anon_sym_note] = "note",
  [anon_sym_balance] = "balance",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_definition_token1] = "comment_definition_token1",
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
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_entry_definition] = "entry_definition",
  [sym_open_definition] = "open_definition",
  [sym_close_definition] = "close_definition",
  [sym_commodity_definition] = "commodity_definition",
  [sym_transaction_definition] = "transaction_definition",
  [sym_note_definition] = "note_definition",
  [sym_balance_definition] = "balance_definition",
  [sym_comment_definition] = "comment_definition",
  [sym_account] = "account",
  [sym_payee] = "payee",
  [sym_narration] = "narration",
  [sym_txn] = "txn",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_definition_token1] = aux_sym_comment_definition_token1,
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
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_entry_definition] = sym_entry_definition,
  [sym_open_definition] = sym_open_definition,
  [sym_close_definition] = sym_close_definition,
  [sym_commodity_definition] = sym_commodity_definition,
  [sym_transaction_definition] = sym_transaction_definition,
  [sym_note_definition] = sym_note_definition,
  [sym_balance_definition] = sym_balance_definition,
  [sym_comment_definition] = sym_comment_definition,
  [sym_account] = sym_account,
  [sym_payee] = sym_payee,
  [sym_narration] = sym_narration,
  [sym_txn] = sym_txn,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_definition_token1] = {
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
      if (lookahead == '!') ADVANCE(109);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == 'A') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == '1') ADVANCE(102);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'q') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(94);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(91);
      END_STATE();
    case 65:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'L') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == 'A') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
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
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(101);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
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
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 73},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 74},
  [45] = {.lex_state = 64},
  [46] = {.lex_state = 74},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 74},
  [50] = {.lex_state = 74},
  [51] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(51),
    [sym__definition] = STATE(19),
    [sym_entry_definition] = STATE(19),
    [sym_comment_definition] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
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
    STATE(29), 1,
      sym_txn,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    STATE(34), 6,
      sym_open_definition,
      sym_close_definition,
      sym_commodity_definition,
      sym_transaction_definition,
      sym_note_definition,
      sym_balance_definition,
  [31] = 4,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(3), 1,
      aux_sym_account_repeat1,
    ACTIONS(26), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [53] = 4,
    ACTIONS(30), 1,
      anon_sym_COLON,
    STATE(5), 1,
      aux_sym_account_repeat1,
    ACTIONS(32), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(28), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [75] = 4,
    ACTIONS(30), 1,
      anon_sym_COLON,
    STATE(3), 1,
      aux_sym_account_repeat1,
    ACTIONS(36), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(34), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [97] = 2,
    ACTIONS(26), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(21), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_COLON,
      sym_date,
      sym_note,
  [114] = 4,
    STATE(8), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      sym_account,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [133] = 4,
    STATE(8), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      sym_account,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(44), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [152] = 4,
    STATE(7), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      sym_account,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [171] = 4,
    STATE(11), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      sym_account,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [190] = 4,
    STATE(8), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      sym_account,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [209] = 2,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [223] = 2,
    ACTIONS(57), 1,
      sym_amount,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [237] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [251] = 1,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [262] = 1,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [273] = 1,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [284] = 4,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(70), 1,
      sym_date,
    STATE(18), 4,
      sym__definition,
      sym_entry_definition,
      sym_comment_definition,
      aux_sym_source_file_repeat1,
  [300] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_date,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(18), 4,
      sym__definition,
      sym_entry_definition,
      sym_comment_definition,
      aux_sym_source_file_repeat1,
  [316] = 2,
    STATE(28), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [327] = 2,
    STATE(43), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [338] = 2,
    STATE(30), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [349] = 2,
    STATE(42), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [360] = 3,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [372] = 3,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [384] = 3,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [396] = 1,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_date,
  [403] = 2,
    ACTIONS(88), 1,
      sym_commodity,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [412] = 3,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_narration,
    STATE(41), 1,
      sym_payee,
  [422] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [428] = 3,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      aux_sym_payee_token1,
    STATE(39), 1,
      aux_sym_payee_repeat1,
  [438] = 3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      aux_sym_payee_token1,
    STATE(36), 1,
      aux_sym_payee_repeat1,
  [448] = 1,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [454] = 1,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [460] = 1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [466] = 3,
    ACTIONS(96), 1,
      aux_sym_payee_token1,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_payee_repeat1,
  [476] = 3,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_payee_token1,
    STATE(31), 1,
      aux_sym_payee_repeat1,
  [486] = 1,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [492] = 3,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      aux_sym_payee_token1,
    STATE(39), 1,
      aux_sym_payee_repeat1,
  [502] = 1,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [508] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_narration,
  [515] = 1,
    ACTIONS(125), 1,
      sym_note,
  [519] = 1,
    ACTIONS(127), 1,
      sym_amount,
  [523] = 1,
    ACTIONS(129), 1,
      sym_commodity,
  [527] = 1,
    ACTIONS(131), 1,
      sym__account_component,
  [531] = 1,
    ACTIONS(133), 1,
      sym_commodity,
  [535] = 1,
    ACTIONS(135), 1,
      aux_sym_comment_definition_token1,
  [539] = 1,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
  [543] = 1,
    ACTIONS(139), 1,
      sym_commodity,
  [547] = 1,
    ACTIONS(141), 1,
      sym_commodity,
  [551] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 190,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 251,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 273,
  [SMALL_STATE(18)] = 284,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 327,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 349,
  [SMALL_STATE(24)] = 360,
  [SMALL_STATE(25)] = 372,
  [SMALL_STATE(26)] = 384,
  [SMALL_STATE(27)] = 396,
  [SMALL_STATE(28)] = 403,
  [SMALL_STATE(29)] = 412,
  [SMALL_STATE(30)] = 422,
  [SMALL_STATE(31)] = 428,
  [SMALL_STATE(32)] = 438,
  [SMALL_STATE(33)] = 448,
  [SMALL_STATE(34)] = 454,
  [SMALL_STATE(35)] = 460,
  [SMALL_STATE(36)] = 466,
  [SMALL_STATE(37)] = 476,
  [SMALL_STATE(38)] = 486,
  [SMALL_STATE(39)] = 492,
  [SMALL_STATE(40)] = 502,
  [SMALL_STATE(41)] = 508,
  [SMALL_STATE(42)] = 515,
  [SMALL_STATE(43)] = 519,
  [SMALL_STATE(44)] = 523,
  [SMALL_STATE(45)] = 527,
  [SMALL_STATE(46)] = 531,
  [SMALL_STATE(47)] = 535,
  [SMALL_STATE(48)] = 539,
  [SMALL_STATE(49)] = 543,
  [SMALL_STATE(50)] = 547,
  [SMALL_STATE(51)] = 551,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(45),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(44),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_definition, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_definition, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2), SHIFT_REPEAT(39),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
