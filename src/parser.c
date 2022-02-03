#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_open = 1,
  anon_sym_COMMA = 2,
  anon_sym_close = 3,
  anon_sym_commodity = 4,
  aux_sym_price_token1 = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_note = 8,
  anon_sym_balance = 9,
  anon_sym_Assets = 10,
  anon_sym_Liabilities = 11,
  anon_sym_Equity = 12,
  anon_sym_Income = 13,
  anon_sym_Expenses = 14,
  anon_sym_COLON = 15,
  sym__account_component = 16,
  anon_sym_STRICT = 17,
  anon_sym_NONE = 18,
  sym_date = 19,
  sym_note = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_payee_token1 = 22,
  sym_amount = 23,
  anon_sym_STAR = 24,
  anon_sym_BANG = 25,
  sym_commodity = 26,
  anon_sym_SEMI = 27,
  aux_sym_comment_token1 = 28,
  sym_source_file = 29,
  sym__definition = 30,
  sym__entry_definition = 31,
  sym_open_definition = 32,
  sym_close_definition = 33,
  sym_commodity_definition = 34,
  sym_transaction_definition = 35,
  sym_post_definition = 36,
  sym_price = 37,
  sym_cost = 38,
  sym_note_definition = 39,
  sym_balance_definition = 40,
  sym_account = 41,
  sym_payee = 42,
  sym_narration = 43,
  sym_txn = 44,
  sym_comment = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_open_definition_repeat1 = 47,
  aux_sym_transaction_definition_repeat1 = 48,
  aux_sym_account_repeat1 = 49,
  aux_sym_payee_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_open] = "open",
  [anon_sym_COMMA] = ",",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [aux_sym_price_token1] = "price_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_price] = "price",
  [sym_cost] = "cost",
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
  [aux_sym_price_token1] = aux_sym_price_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_price] = sym_price,
  [sym_cost] = sym_cost,
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
      if (lookahead == '!') ADVANCE(110);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == 'N') ADVANCE(115);
      if (lookahead == 'S') ADVANCE(117);
      if (lookahead == 'b') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(100);
      if (lookahead == '1') ADVANCE(103);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(104);
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
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
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
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(85);
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
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(87);
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
      if (lookahead == 'y') ADVANCE(88);
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
          lookahead == '1') ADVANCE(95);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(61);
      END_STATE();
    case 65:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == 'A') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
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
      ACCEPT_TOKEN(aux_sym_price_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_price_token1);
      if (lookahead == '@') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == ';') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(102);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
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
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 72},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 74},
  [51] = {.lex_state = 126},
  [52] = {.lex_state = 73},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 74},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 74},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 74},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [aux_sym_price_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(64),
    [sym__definition] = STATE(41),
    [sym__entry_definition] = STATE(43),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(29),
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
    STATE(33), 1,
      sym_txn,
    ACTIONS(19), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    STATE(45), 6,
      sym_open_definition,
      sym_close_definition,
      sym_commodity_definition,
      sym_transaction_definition,
      sym_note_definition,
      sym_balance_definition,
  [37] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(26), 2,
      sym_amount,
      sym_commodity,
    STATE(3), 2,
      sym_comment,
      aux_sym_account_repeat1,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [62] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(30), 1,
      anon_sym_COLON,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_account_repeat1,
    ACTIONS(32), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(28), 8,
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
    ACTIONS(30), 1,
      anon_sym_COLON,
    STATE(3), 1,
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
    ACTIONS(26), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(21), 9,
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
    ACTIONS(40), 1,
      aux_sym_price_token1,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(13), 1,
      sym_cost,
    STATE(19), 1,
      sym_price,
    ACTIONS(38), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [166] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(14), 1,
      sym_account,
    STATE(23), 1,
      sym_post_definition,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(46), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [193] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(14), 1,
      sym_account,
    STATE(23), 1,
      sym_post_definition,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(46), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [220] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(14), 1,
      sym_account,
    STATE(23), 1,
      sym_post_definition,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(46), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [247] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_account,
    STATE(23), 1,
      sym_post_definition,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(11), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat1,
    ACTIONS(54), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [272] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      sym_account,
    STATE(23), 1,
      sym_post_definition,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(46), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [299] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(40), 1,
      aux_sym_price_token1,
    STATE(13), 1,
      sym_comment,
    STATE(21), 1,
      sym_price,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [321] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(61), 1,
      sym_amount,
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
  [340] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_comment,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [359] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      aux_sym_price_token1,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [376] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_comment,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [395] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [411] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_comment,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [427] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [443] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_comment,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [459] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_comment,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [475] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [491] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    STATE(53), 1,
      sym_account,
    ACTIONS(46), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [508] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    STATE(52), 1,
      sym_account,
    ACTIONS(46), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [525] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
    STATE(48), 1,
      sym_account,
    ACTIONS(46), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [542] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    STATE(36), 1,
      sym_account,
    ACTIONS(46), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [559] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_date,
    STATE(41), 1,
      sym__definition,
    STATE(43), 1,
      sym__entry_definition,
    STATE(28), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [579] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_date,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(41), 1,
      sym__definition,
    STATE(43), 1,
      sym__entry_definition,
  [601] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym_date,
  [618] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(31), 2,
      sym_comment,
      aux_sym_open_definition_repeat1,
  [633] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_open_definition_repeat1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym_date,
  [650] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_narration,
    STATE(33), 1,
      sym_comment,
    STATE(46), 1,
      sym_payee,
  [666] = 5,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      aux_sym_payee_token1,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_payee_repeat1,
  [682] = 5,
    ACTIONS(101), 1,
      aux_sym_payee_token1,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_payee_repeat1,
  [698] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(109), 1,
      sym_commodity,
    STATE(36), 1,
      sym_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_date,
  [712] = 5,
    ACTIONS(101), 1,
      aux_sym_payee_token1,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_payee_repeat1,
    STATE(37), 1,
      sym_comment,
  [728] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_date,
  [740] = 4,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_payee_token1,
    STATE(39), 2,
      sym_comment,
      aux_sym_payee_repeat1,
  [754] = 5,
    ACTIONS(101), 1,
      aux_sym_payee_token1,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_payee_repeat1,
    STATE(40), 1,
      sym_comment,
  [770] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_date,
  [781] = 3,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_DQUOTE,
      aux_sym_payee_token1,
  [792] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_comment,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      sym_date,
  [803] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym_date,
  [814] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      sym_date,
  [825] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_narration,
    STATE(46), 1,
      sym_comment,
  [838] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      sym_date,
  [849] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym_date,
  [860] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      sym_date,
  [871] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      sym_commodity,
    STATE(50), 1,
      sym_comment,
  [881] = 3,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
  [891] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      sym_note,
    STATE(52), 1,
      sym_comment,
  [901] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(144), 1,
      sym_amount,
    STATE(53), 1,
      sym_comment,
  [911] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(146), 1,
      sym_commodity,
    STATE(54), 1,
      sym_comment,
  [921] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_comment,
  [931] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(150), 1,
      sym_amount,
    STATE(56), 1,
      sym_comment,
  [941] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      sym_amount,
    STATE(57), 1,
      sym_comment,
  [951] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(154), 1,
      sym_commodity,
    STATE(58), 1,
      sym_comment,
  [961] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      sym_commodity,
    STATE(59), 1,
      sym_comment,
  [971] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(158), 1,
      sym_commodity,
    STATE(60), 1,
      sym_comment,
  [981] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(160), 1,
      sym__account_component,
    STATE(61), 1,
      sym_comment,
  [991] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(162), 1,
      sym_commodity,
    STATE(62), 1,
      sym_comment,
  [1001] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_comment,
  [1011] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_comment,
  [1021] = 1,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 193,
  [SMALL_STATE(10)] = 220,
  [SMALL_STATE(11)] = 247,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 299,
  [SMALL_STATE(14)] = 321,
  [SMALL_STATE(15)] = 340,
  [SMALL_STATE(16)] = 359,
  [SMALL_STATE(17)] = 376,
  [SMALL_STATE(18)] = 395,
  [SMALL_STATE(19)] = 411,
  [SMALL_STATE(20)] = 427,
  [SMALL_STATE(21)] = 443,
  [SMALL_STATE(22)] = 459,
  [SMALL_STATE(23)] = 475,
  [SMALL_STATE(24)] = 491,
  [SMALL_STATE(25)] = 508,
  [SMALL_STATE(26)] = 525,
  [SMALL_STATE(27)] = 542,
  [SMALL_STATE(28)] = 559,
  [SMALL_STATE(29)] = 579,
  [SMALL_STATE(30)] = 601,
  [SMALL_STATE(31)] = 618,
  [SMALL_STATE(32)] = 633,
  [SMALL_STATE(33)] = 650,
  [SMALL_STATE(34)] = 666,
  [SMALL_STATE(35)] = 682,
  [SMALL_STATE(36)] = 698,
  [SMALL_STATE(37)] = 712,
  [SMALL_STATE(38)] = 728,
  [SMALL_STATE(39)] = 740,
  [SMALL_STATE(40)] = 754,
  [SMALL_STATE(41)] = 770,
  [SMALL_STATE(42)] = 781,
  [SMALL_STATE(43)] = 792,
  [SMALL_STATE(44)] = 803,
  [SMALL_STATE(45)] = 814,
  [SMALL_STATE(46)] = 825,
  [SMALL_STATE(47)] = 838,
  [SMALL_STATE(48)] = 849,
  [SMALL_STATE(49)] = 860,
  [SMALL_STATE(50)] = 871,
  [SMALL_STATE(51)] = 881,
  [SMALL_STATE(52)] = 891,
  [SMALL_STATE(53)] = 901,
  [SMALL_STATE(54)] = 911,
  [SMALL_STATE(55)] = 921,
  [SMALL_STATE(56)] = 931,
  [SMALL_STATE(57)] = 941,
  [SMALL_STATE(58)] = 951,
  [SMALL_STATE(59)] = 961,
  [SMALL_STATE(60)] = 971,
  [SMALL_STATE(61)] = 981,
  [SMALL_STATE(62)] = 991,
  [SMALL_STATE(63)] = 1001,
  [SMALL_STATE(64)] = 1011,
  [SMALL_STATE(65)] = 1021,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(61),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(54),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2), SHIFT_REPEAT(42),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry_definition, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
