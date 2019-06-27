#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 35
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_COLON = 1,
  anon_sym_LF = 2,
  aux_sym_links_token1 = 3,
  anon_sym_COMMA = 4,
  anon_sym_DASH_GT = 5,
  anon_sym_LT_DASH = 6,
  anon_sym_DOT = 7,
  aux_sym_type_token1 = 8,
  sym_source_file = 9,
  sym_decomposition = 10,
  sym_links = 11,
  sym_link = 12,
  sym_localLink = 13,
  sym_forwardLink = 14,
  sym_reverseLink = 15,
  sym_typedFunction = 16,
  sym_type = 17,
  sym_reference = 18,
  sym_untypedFunction = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_links_repeat1 = 21,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [aux_sym_links_token1] = "links_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_DOT] = ".",
  [aux_sym_type_token1] = "type_token1",
  [sym_source_file] = "source_file",
  [sym_decomposition] = "decomposition",
  [sym_links] = "links",
  [sym_link] = "link",
  [sym_localLink] = "localLink",
  [sym_forwardLink] = "forwardLink",
  [sym_reverseLink] = "reverseLink",
  [sym_typedFunction] = "typedFunction",
  [sym_type] = "type",
  [sym_reference] = "reference",
  [sym_untypedFunction] = "untypedFunction",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_links_repeat1] = "links_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_links_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_decomposition] = {
    .visible = true,
    .named = true,
  },
  [sym_links] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_localLink] = {
    .visible = true,
    .named = true,
  },
  [sym_forwardLink] = {
    .visible = true,
    .named = true,
  },
  [sym_reverseLink] = {
    .visible = true,
    .named = true,
  },
  [sym_typedFunction] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_untypedFunction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_links_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        SKIP(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        SKIP(6);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(0);
      if (lookahead != 0)
        SKIP(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 4:
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 6:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        SKIP(2);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      if (lookahead == '-')
        ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 12:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        SKIP(13);
      if (lookahead == '/')
        SKIP(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        SKIP(12);
      if (lookahead != 0)
        SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        SKIP(13);
      END_STATE();
    case 15:
      if (lookahead == '#')
        SKIP(16);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '/')
        SKIP(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == '\n')
        SKIP(15);
      if (lookahead != 0)
        SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == '/')
        SKIP(16);
      END_STATE();
    case 18:
      if (lookahead == '#')
        SKIP(19);
      if (lookahead == '/')
        SKIP(20);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '\n')
        SKIP(18);
      if (lookahead != 0)
        SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == '/')
        SKIP(19);
      END_STATE();
    case 21:
      if (lookahead == '\n')
        ADVANCE(22);
      if (lookahead == '#')
        SKIP(23);
      if (lookahead == '/')
        SKIP(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == '\n')
        SKIP(21);
      if (lookahead != 0)
        SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == '/')
        SKIP(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_links_token1);
      if (lookahead == '\n')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n')
        ADVANCE(27);
      if (lookahead == '#')
        SKIP(28);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '/')
        SKIP(29);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n')
        SKIP(26);
      if (lookahead != 0)
        SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '/')
        SKIP(28);
      END_STATE();
    case 30:
      if (lookahead == '#')
        SKIP(31);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '/')
        SKIP(32);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '\n')
        SKIP(30);
      if (lookahead != 0)
        SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == '/')
        SKIP(31);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_type_token1] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_decomposition] = STATE(3),
    [sym_typedFunction] = STATE(4),
    [sym_type] = STATE(5),
    [sym_source_file] = STATE(6),
    [aux_sym_type_token1] = ACTIONS(3),
  },
  [2] = {
    [anon_sym_DOT] = ACTIONS(5),
  },
  [3] = {
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_decomposition] = STATE(7),
    [sym_typedFunction] = STATE(4),
    [sym_type] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_type_token1] = ACTIONS(3),
  },
  [4] = {
    [anon_sym_COLON] = ACTIONS(9),
  },
  [5] = {
    [anon_sym_DOT] = ACTIONS(11),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(13),
  },
  [7] = {
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_decomposition] = STATE(7),
    [sym_typedFunction] = STATE(4),
    [sym_type] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_type_token1] = ACTIONS(17),
  },
  [8] = {
    [sym_reverseLink] = STATE(13),
    [sym_link] = STATE(14),
    [sym_localLink] = STATE(13),
    [sym_reference] = STATE(15),
    [sym_untypedFunction] = STATE(16),
    [sym_links] = STATE(17),
    [sym_forwardLink] = STATE(13),
    [anon_sym_LF] = ACTIONS(20),
    [aux_sym_links_token1] = ACTIONS(22),
    [aux_sym_type_token1] = ACTIONS(24),
  },
  [9] = {
    [sym_untypedFunction] = STATE(19),
    [aux_sym_type_token1] = ACTIONS(26),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [aux_sym_type_token1] = ACTIONS(28),
  },
  [11] = {
    [sym_reverseLink] = STATE(13),
    [sym_link] = STATE(20),
    [sym_localLink] = STATE(13),
    [sym_reference] = STATE(15),
    [sym_untypedFunction] = STATE(16),
    [sym_forwardLink] = STATE(13),
    [aux_sym_type_token1] = ACTIONS(30),
  },
  [12] = {
    [anon_sym_DASH_GT] = ACTIONS(32),
    [anon_sym_LF] = ACTIONS(34),
    [anon_sym_COMMA] = ACTIONS(36),
    [anon_sym_LT_DASH] = ACTIONS(32),
  },
  [13] = {
    [anon_sym_LF] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(40),
  },
  [14] = {
    [aux_sym_links_repeat1] = STATE(22),
    [anon_sym_LF] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(44),
  },
  [15] = {
    [anon_sym_DASH_GT] = ACTIONS(46),
    [anon_sym_LT_DASH] = ACTIONS(48),
  },
  [16] = {
    [anon_sym_LF] = ACTIONS(50),
    [anon_sym_COMMA] = ACTIONS(52),
  },
  [17] = {
    [anon_sym_LF] = ACTIONS(54),
  },
  [18] = {
    [anon_sym_COLON] = ACTIONS(34),
  },
  [19] = {
    [anon_sym_COLON] = ACTIONS(56),
  },
  [20] = {
    [aux_sym_links_repeat1] = STATE(26),
    [anon_sym_LF] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(44),
  },
  [21] = {
    [sym_reverseLink] = STATE(13),
    [sym_link] = STATE(27),
    [sym_localLink] = STATE(13),
    [sym_reference] = STATE(15),
    [sym_untypedFunction] = STATE(16),
    [sym_forwardLink] = STATE(13),
    [aux_sym_type_token1] = ACTIONS(30),
  },
  [22] = {
    [aux_sym_links_repeat1] = STATE(28),
    [anon_sym_LF] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(44),
  },
  [23] = {
    [sym_typedFunction] = STATE(29),
    [sym_type] = STATE(30),
    [aux_sym_type_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_typedFunction] = STATE(31),
    [sym_type] = STATE(30),
    [aux_sym_type_token1] = ACTIONS(3),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym_type_token1] = ACTIONS(60),
  },
  [26] = {
    [aux_sym_links_repeat1] = STATE(28),
    [anon_sym_LF] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(44),
  },
  [27] = {
    [anon_sym_LF] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(66),
  },
  [28] = {
    [aux_sym_links_repeat1] = STATE(28),
    [anon_sym_LF] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(68),
  },
  [29] = {
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(73),
  },
  [30] = {
    [anon_sym_DOT] = ACTIONS(75),
  },
  [31] = {
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(79),
  },
  [32] = {
    [sym_untypedFunction] = STATE(34),
    [aux_sym_type_token1] = ACTIONS(81),
  },
  [33] = {
    [anon_sym_LF] = ACTIONS(34),
    [anon_sym_COMMA] = ACTIONS(36),
  },
  [34] = {
    [anon_sym_LF] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(83),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.count = 1, .reusable = true}, SHIFT(10),
  [22] = {.count = 1, .reusable = false}, SHIFT(11),
  [24] = {.count = 1, .reusable = false}, SHIFT(12),
  [26] = {.count = 1, .reusable = true}, SHIFT(18),
  [28] = {.count = 1, .reusable = true}, REDUCE(sym_decomposition, 3),
  [30] = {.count = 1, .reusable = true}, SHIFT(12),
  [32] = {.count = 1, .reusable = false}, REDUCE(sym_reference, 1),
  [34] = {.count = 1, .reusable = true}, REDUCE(sym_untypedFunction, 1),
  [36] = {.count = 1, .reusable = false}, REDUCE(sym_untypedFunction, 1),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_link, 1),
  [40] = {.count = 1, .reusable = false}, REDUCE(sym_link, 1),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_links, 1),
  [44] = {.count = 1, .reusable = false}, SHIFT(21),
  [46] = {.count = 1, .reusable = true}, SHIFT(23),
  [48] = {.count = 1, .reusable = true}, SHIFT(24),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_localLink, 1),
  [52] = {.count = 1, .reusable = false}, REDUCE(sym_localLink, 1),
  [54] = {.count = 1, .reusable = true}, SHIFT(25),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_typedFunction, 3),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_links, 2),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_decomposition, 4),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_links, 3),
  [64] = {.count = 1, .reusable = true}, REDUCE(aux_sym_links_repeat1, 2),
  [66] = {.count = 1, .reusable = false}, REDUCE(aux_sym_links_repeat1, 2),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_links_repeat1, 2), SHIFT_REPEAT(21),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_forwardLink, 3),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_forwardLink, 3),
  [75] = {.count = 1, .reusable = true}, SHIFT(32),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_reverseLink, 3),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_reverseLink, 3),
  [81] = {.count = 1, .reusable = true}, SHIFT(33),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_typedFunction, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fudomo() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
