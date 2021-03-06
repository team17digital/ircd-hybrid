/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 25 "conf_parser.y"


#define YY_NO_UNPUT
#include <sys/types.h>
#include <string.h>

#include "config.h"
#include "stdinc.h"
#include "ircd.h"
#include "list.h"
#include "conf.h"
#include "conf_class.h"
#include "event.h"
#include "log.h"
#include "client.h"	/* for UMODE_ALL only */
#include "irc_string.h"
#include "memory.h"
#include "modules.h"
#include "s_serv.h"
#include "hostmask.h"
#include "send.h"
#include "listener.h"
#include "resv.h"
#include "numeric.h"
#include "s_user.h"
#include "motd.h"

#ifdef HAVE_LIBCRYPTO
#include <openssl/rsa.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#include <openssl/dh.h>
#endif

#include "rsa.h"

int yylex(void);

static struct
{
  struct {
    dlink_list list;
  } mask,
    leaf,
    hub;

  struct {
    char buf[IRCD_BUFSIZE];
  } name,
    user,
    host,
    addr,
    bind,
    file,
    ciph,
    rpass,
    spass,
    class;

  struct {
    unsigned int value;
  } flags,
    modes,
    size,
    type,
    port,
    aftype,
    ping_freq,
    max_perip,
    con_freq,
    min_idle,
    max_idle,
    max_total,
    max_global,
    max_local,
    max_ident,
    max_sendq,
    max_recvq,
    cidr_bitlen_ipv4,
    cidr_bitlen_ipv6,
    number_per_cidr;
} block_state;

static void
reset_block_state(void)
{
  dlink_node *ptr = NULL, *ptr_next = NULL;

  DLINK_FOREACH_SAFE(ptr, ptr_next, block_state.mask.list.head)
  {
    MyFree(ptr->data);
    dlinkDelete(ptr, &block_state.mask.list);
    free_dlink_node(ptr);
  }

  DLINK_FOREACH_SAFE(ptr, ptr_next, block_state.leaf.list.head)
  {
    MyFree(ptr->data);
    dlinkDelete(ptr, &block_state.leaf.list);
    free_dlink_node(ptr);
  }

  DLINK_FOREACH_SAFE(ptr, ptr_next, block_state.hub.list.head)
  {
    MyFree(ptr->data);
    dlinkDelete(ptr, &block_state.hub.list);
    free_dlink_node(ptr);
  }

  memset(&block_state, 0, sizeof(block_state));
}


/* Line 371 of yacc.c  */
#line 182 "conf_parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_CONF_PARSER_H_INCLUDED
# define YY_YY_CONF_PARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ACCEPT_PASSWORD = 258,
     ADMIN = 259,
     AFTYPE = 260,
     ANTI_NICK_FLOOD = 261,
     ANTI_SPAM_EXIT_MESSAGE_TIME = 262,
     AUTOCONN = 263,
     BYTES = 264,
     KBYTES = 265,
     MBYTES = 266,
     CALLER_ID_WAIT = 267,
     CAN_FLOOD = 268,
     CHANNEL = 269,
     CIDR_BITLEN_IPV4 = 270,
     CIDR_BITLEN_IPV6 = 271,
     CLASS = 272,
     CONNECT = 273,
     CONNECTFREQ = 274,
     DEFAULT_FLOODCOUNT = 275,
     DEFAULT_SPLIT_SERVER_COUNT = 276,
     DEFAULT_SPLIT_USER_COUNT = 277,
     DENY = 278,
     DESCRIPTION = 279,
     DIE = 280,
     DISABLE_AUTH = 281,
     DISABLE_FAKE_CHANNELS = 282,
     DISABLE_REMOTE_COMMANDS = 283,
     DOTS_IN_IDENT = 284,
     EGDPOOL_PATH = 285,
     EMAIL = 286,
     ENCRYPTED = 287,
     EXCEED_LIMIT = 288,
     EXEMPT = 289,
     FAILED_OPER_NOTICE = 290,
     FLATTEN_LINKS = 291,
     GECOS = 292,
     GENERAL = 293,
     GLINE = 294,
     GLINE_DURATION = 295,
     GLINE_ENABLE = 296,
     GLINE_EXEMPT = 297,
     GLINE_MIN_CIDR = 298,
     GLINE_MIN_CIDR6 = 299,
     GLINE_REQUEST_DURATION = 300,
     GLOBAL_KILL = 301,
     HAVENT_READ_CONF = 302,
     HIDDEN = 303,
     HIDDEN_NAME = 304,
     HIDE_IDLE_FROM_OPERS = 305,
     HIDE_SERVER_IPS = 306,
     HIDE_SERVERS = 307,
     HIDE_SERVICES = 308,
     HIDE_SPOOF_IPS = 309,
     HOST = 310,
     HUB = 311,
     HUB_MASK = 312,
     IGNORE_BOGUS_TS = 313,
     INVISIBLE_ON_CONNECT = 314,
     IP = 315,
     IRCD_AUTH = 316,
     IRCD_FLAGS = 317,
     IRCD_SID = 318,
     JOIN_FLOOD_COUNT = 319,
     JOIN_FLOOD_TIME = 320,
     KILL = 321,
     KILL_CHASE_TIME_LIMIT = 322,
     KLINE = 323,
     KLINE_EXEMPT = 324,
     KNOCK_DELAY = 325,
     KNOCK_DELAY_CHANNEL = 326,
     LEAF_MASK = 327,
     LINKS_DELAY = 328,
     LISTEN = 329,
     MASK = 330,
     MAX_ACCEPT = 331,
     MAX_BANS = 332,
     MAX_CHANS_PER_OPER = 333,
     MAX_CHANS_PER_USER = 334,
     MAX_GLOBAL = 335,
     MAX_IDENT = 336,
     MAX_IDLE = 337,
     MAX_LOCAL = 338,
     MAX_NICK_CHANGES = 339,
     MAX_NICK_LENGTH = 340,
     MAX_NICK_TIME = 341,
     MAX_NUMBER = 342,
     MAX_TARGETS = 343,
     MAX_TOPIC_LENGTH = 344,
     MAX_WATCH = 345,
     MIN_IDLE = 346,
     MIN_NONWILDCARD = 347,
     MIN_NONWILDCARD_SIMPLE = 348,
     MODULE = 349,
     MODULES = 350,
     MOTD = 351,
     NAME = 352,
     NEED_IDENT = 353,
     NEED_PASSWORD = 354,
     NETWORK_DESC = 355,
     NETWORK_NAME = 356,
     NICK = 357,
     NO_CREATE_ON_SPLIT = 358,
     NO_JOIN_ON_SPLIT = 359,
     NO_OPER_FLOOD = 360,
     NO_TILDE = 361,
     NUMBER = 362,
     NUMBER_PER_CIDR = 363,
     NUMBER_PER_IP = 364,
     OPER_ONLY_UMODES = 365,
     OPER_PASS_RESV = 366,
     OPER_UMODES = 367,
     OPERATOR = 368,
     OPERS_BYPASS_CALLERID = 369,
     PACE_WAIT = 370,
     PACE_WAIT_SIMPLE = 371,
     PASSWORD = 372,
     PATH = 373,
     PING_COOKIE = 374,
     PING_TIME = 375,
     PORT = 376,
     QSTRING = 377,
     RANDOM_IDLE = 378,
     REASON = 379,
     REDIRPORT = 380,
     REDIRSERV = 381,
     REHASH = 382,
     REMOTE = 383,
     REMOTEBAN = 384,
     RESV = 385,
     RESV_EXEMPT = 386,
     RSA_PRIVATE_KEY_FILE = 387,
     RSA_PUBLIC_KEY_FILE = 388,
     SECONDS = 389,
     MINUTES = 390,
     HOURS = 391,
     DAYS = 392,
     WEEKS = 393,
     MONTHS = 394,
     YEARS = 395,
     SEND_PASSWORD = 396,
     SENDQ = 397,
     SERVERHIDE = 398,
     SERVERINFO = 399,
     SHORT_MOTD = 400,
     SPOOF = 401,
     SPOOF_NOTICE = 402,
     SQUIT = 403,
     SSL_CERTIFICATE_FILE = 404,
     SSL_DH_PARAM_FILE = 405,
     STATS_E_DISABLED = 406,
     STATS_I_OPER_ONLY = 407,
     STATS_K_OPER_ONLY = 408,
     STATS_O_OPER_ONLY = 409,
     STATS_P_OPER_ONLY = 410,
     T_ALL = 411,
     T_BOTS = 412,
     T_CALLERID = 413,
     T_CCONN = 414,
     T_CLUSTER = 415,
     T_DEAF = 416,
     T_DEBUG = 417,
     T_DLINE = 418,
     T_EXTERNAL = 419,
     T_FARCONNECT = 420,
     T_FILE = 421,
     T_FULL = 422,
     T_GLOBOPS = 423,
     T_INVISIBLE = 424,
     T_IPV4 = 425,
     T_IPV6 = 426,
     T_LOCOPS = 427,
     T_LOG = 428,
     T_MAX_CLIENTS = 429,
     T_NCHANGE = 430,
     T_NONONREG = 431,
     T_OPERWALL = 432,
     T_RECVQ = 433,
     T_REJ = 434,
     T_RESTART = 435,
     T_SERVER = 436,
     T_SERVICE = 437,
     T_SERVICES_NAME = 438,
     T_SERVNOTICE = 439,
     T_SET = 440,
     T_SHARED = 441,
     T_SIZE = 442,
     T_SKILL = 443,
     T_SOFTCALLERID = 444,
     T_SPY = 445,
     T_SSL = 446,
     T_SSL_CIPHER_LIST = 447,
     T_SSL_CLIENT_METHOD = 448,
     T_SSL_SERVER_METHOD = 449,
     T_SSLV3 = 450,
     T_TLSV1 = 451,
     T_UMODES = 452,
     T_UNAUTH = 453,
     T_UNDLINE = 454,
     T_UNLIMITED = 455,
     T_UNRESV = 456,
     T_UNXLINE = 457,
     T_WALLOP = 458,
     T_WALLOPS = 459,
     T_WEBIRC = 460,
     TBOOL = 461,
     THROTTLE_TIME = 462,
     TKLINE_EXPIRE_NOTICES = 463,
     TMASKED = 464,
     TRUE_NO_OPER_FLOOD = 465,
     TS_MAX_DELTA = 466,
     TS_WARN_DELTA = 467,
     TWODOTS = 468,
     TYPE = 469,
     UNKLINE = 470,
     USE_EGD = 471,
     USE_LOGGING = 472,
     USER = 473,
     VHOST = 474,
     VHOST6 = 475,
     WARN_NO_NLINE = 476,
     XLINE = 477
   };
#endif
/* Tokens.  */
#define ACCEPT_PASSWORD 258
#define ADMIN 259
#define AFTYPE 260
#define ANTI_NICK_FLOOD 261
#define ANTI_SPAM_EXIT_MESSAGE_TIME 262
#define AUTOCONN 263
#define BYTES 264
#define KBYTES 265
#define MBYTES 266
#define CALLER_ID_WAIT 267
#define CAN_FLOOD 268
#define CHANNEL 269
#define CIDR_BITLEN_IPV4 270
#define CIDR_BITLEN_IPV6 271
#define CLASS 272
#define CONNECT 273
#define CONNECTFREQ 274
#define DEFAULT_FLOODCOUNT 275
#define DEFAULT_SPLIT_SERVER_COUNT 276
#define DEFAULT_SPLIT_USER_COUNT 277
#define DENY 278
#define DESCRIPTION 279
#define DIE 280
#define DISABLE_AUTH 281
#define DISABLE_FAKE_CHANNELS 282
#define DISABLE_REMOTE_COMMANDS 283
#define DOTS_IN_IDENT 284
#define EGDPOOL_PATH 285
#define EMAIL 286
#define ENCRYPTED 287
#define EXCEED_LIMIT 288
#define EXEMPT 289
#define FAILED_OPER_NOTICE 290
#define FLATTEN_LINKS 291
#define GECOS 292
#define GENERAL 293
#define GLINE 294
#define GLINE_DURATION 295
#define GLINE_ENABLE 296
#define GLINE_EXEMPT 297
#define GLINE_MIN_CIDR 298
#define GLINE_MIN_CIDR6 299
#define GLINE_REQUEST_DURATION 300
#define GLOBAL_KILL 301
#define HAVENT_READ_CONF 302
#define HIDDEN 303
#define HIDDEN_NAME 304
#define HIDE_IDLE_FROM_OPERS 305
#define HIDE_SERVER_IPS 306
#define HIDE_SERVERS 307
#define HIDE_SERVICES 308
#define HIDE_SPOOF_IPS 309
#define HOST 310
#define HUB 311
#define HUB_MASK 312
#define IGNORE_BOGUS_TS 313
#define INVISIBLE_ON_CONNECT 314
#define IP 315
#define IRCD_AUTH 316
#define IRCD_FLAGS 317
#define IRCD_SID 318
#define JOIN_FLOOD_COUNT 319
#define JOIN_FLOOD_TIME 320
#define KILL 321
#define KILL_CHASE_TIME_LIMIT 322
#define KLINE 323
#define KLINE_EXEMPT 324
#define KNOCK_DELAY 325
#define KNOCK_DELAY_CHANNEL 326
#define LEAF_MASK 327
#define LINKS_DELAY 328
#define LISTEN 329
#define MASK 330
#define MAX_ACCEPT 331
#define MAX_BANS 332
#define MAX_CHANS_PER_OPER 333
#define MAX_CHANS_PER_USER 334
#define MAX_GLOBAL 335
#define MAX_IDENT 336
#define MAX_IDLE 337
#define MAX_LOCAL 338
#define MAX_NICK_CHANGES 339
#define MAX_NICK_LENGTH 340
#define MAX_NICK_TIME 341
#define MAX_NUMBER 342
#define MAX_TARGETS 343
#define MAX_TOPIC_LENGTH 344
#define MAX_WATCH 345
#define MIN_IDLE 346
#define MIN_NONWILDCARD 347
#define MIN_NONWILDCARD_SIMPLE 348
#define MODULE 349
#define MODULES 350
#define MOTD 351
#define NAME 352
#define NEED_IDENT 353
#define NEED_PASSWORD 354
#define NETWORK_DESC 355
#define NETWORK_NAME 356
#define NICK 357
#define NO_CREATE_ON_SPLIT 358
#define NO_JOIN_ON_SPLIT 359
#define NO_OPER_FLOOD 360
#define NO_TILDE 361
#define NUMBER 362
#define NUMBER_PER_CIDR 363
#define NUMBER_PER_IP 364
#define OPER_ONLY_UMODES 365
#define OPER_PASS_RESV 366
#define OPER_UMODES 367
#define OPERATOR 368
#define OPERS_BYPASS_CALLERID 369
#define PACE_WAIT 370
#define PACE_WAIT_SIMPLE 371
#define PASSWORD 372
#define PATH 373
#define PING_COOKIE 374
#define PING_TIME 375
#define PORT 376
#define QSTRING 377
#define RANDOM_IDLE 378
#define REASON 379
#define REDIRPORT 380
#define REDIRSERV 381
#define REHASH 382
#define REMOTE 383
#define REMOTEBAN 384
#define RESV 385
#define RESV_EXEMPT 386
#define RSA_PRIVATE_KEY_FILE 387
#define RSA_PUBLIC_KEY_FILE 388
#define SECONDS 389
#define MINUTES 390
#define HOURS 391
#define DAYS 392
#define WEEKS 393
#define MONTHS 394
#define YEARS 395
#define SEND_PASSWORD 396
#define SENDQ 397
#define SERVERHIDE 398
#define SERVERINFO 399
#define SHORT_MOTD 400
#define SPOOF 401
#define SPOOF_NOTICE 402
#define SQUIT 403
#define SSL_CERTIFICATE_FILE 404
#define SSL_DH_PARAM_FILE 405
#define STATS_E_DISABLED 406
#define STATS_I_OPER_ONLY 407
#define STATS_K_OPER_ONLY 408
#define STATS_O_OPER_ONLY 409
#define STATS_P_OPER_ONLY 410
#define T_ALL 411
#define T_BOTS 412
#define T_CALLERID 413
#define T_CCONN 414
#define T_CLUSTER 415
#define T_DEAF 416
#define T_DEBUG 417
#define T_DLINE 418
#define T_EXTERNAL 419
#define T_FARCONNECT 420
#define T_FILE 421
#define T_FULL 422
#define T_GLOBOPS 423
#define T_INVISIBLE 424
#define T_IPV4 425
#define T_IPV6 426
#define T_LOCOPS 427
#define T_LOG 428
#define T_MAX_CLIENTS 429
#define T_NCHANGE 430
#define T_NONONREG 431
#define T_OPERWALL 432
#define T_RECVQ 433
#define T_REJ 434
#define T_RESTART 435
#define T_SERVER 436
#define T_SERVICE 437
#define T_SERVICES_NAME 438
#define T_SERVNOTICE 439
#define T_SET 440
#define T_SHARED 441
#define T_SIZE 442
#define T_SKILL 443
#define T_SOFTCALLERID 444
#define T_SPY 445
#define T_SSL 446
#define T_SSL_CIPHER_LIST 447
#define T_SSL_CLIENT_METHOD 448
#define T_SSL_SERVER_METHOD 449
#define T_SSLV3 450
#define T_TLSV1 451
#define T_UMODES 452
#define T_UNAUTH 453
#define T_UNDLINE 454
#define T_UNLIMITED 455
#define T_UNRESV 456
#define T_UNXLINE 457
#define T_WALLOP 458
#define T_WALLOPS 459
#define T_WEBIRC 460
#define TBOOL 461
#define THROTTLE_TIME 462
#define TKLINE_EXPIRE_NOTICES 463
#define TMASKED 464
#define TRUE_NO_OPER_FLOOD 465
#define TS_MAX_DELTA 466
#define TS_WARN_DELTA 467
#define TWODOTS 468
#define TYPE 469
#define UNKLINE 470
#define USE_EGD 471
#define USE_LOGGING 472
#define USER 473
#define VHOST 474
#define VHOST6 475
#define WARN_NO_NLINE 476
#define XLINE 477



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 139 "conf_parser.y"

  int number;
  char *string;


/* Line 387 of yacc.c  */
#line 675 "conf_parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 703 "conf_parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  229
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  286
/* YYNRULES -- Number of rules.  */
#define YYNRULES  644
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1260

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   477

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   227,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   228,   223,
       2,   226,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   225,     2,   224,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    52,    55,    56,    58,
      61,    65,    69,    73,    77,    81,    85,    89,    90,    92,
      95,    99,   103,   107,   113,   116,   118,   120,   122,   125,
     130,   135,   141,   144,   146,   148,   150,   152,   154,   156,
     158,   160,   162,   164,   166,   168,   170,   172,   174,   176,
     178,   180,   183,   188,   193,   197,   199,   201,   203,   207,
     209,   211,   213,   218,   223,   228,   233,   238,   243,   248,
     253,   258,   263,   268,   273,   278,   283,   288,   294,   297,
     299,   301,   303,   305,   308,   313,   318,   323,   324,   331,
     334,   336,   338,   340,   343,   348,   353,   359,   362,   364,
     366,   368,   371,   376,   377,   384,   387,   389,   391,   393,
     395,   398,   403,   408,   413,   414,   420,   424,   426,   428,
     430,   432,   434,   436,   438,   440,   441,   448,   451,   453,
     455,   457,   459,   461,   463,   465,   467,   469,   472,   477,
     482,   487,   492,   497,   502,   503,   509,   513,   515,   517,
     519,   521,   523,   525,   527,   529,   531,   533,   535,   537,
     539,   541,   543,   545,   547,   549,   551,   553,   555,   557,
     558,   564,   568,   570,   574,   576,   580,   582,   586,   588,
     590,   592,   594,   596,   598,   600,   602,   604,   606,   608,
     610,   612,   614,   616,   618,   620,   622,   623,   630,   633,
     635,   637,   639,   641,   643,   645,   647,   649,   651,   653,
     655,   657,   659,   661,   663,   665,   667,   670,   675,   680,
     685,   690,   695,   700,   705,   710,   715,   720,   725,   730,
     735,   740,   745,   746,   752,   756,   758,   760,   762,   763,
     770,   771,   777,   781,   783,   785,   787,   789,   792,   794,
     796,   798,   800,   802,   805,   806,   812,   816,   818,   820,
     824,   829,   834,   835,   842,   845,   847,   849,   851,   853,
     855,   857,   859,   861,   863,   866,   871,   876,   881,   886,
     887,   893,   897,   899,   901,   903,   905,   907,   909,   911,
     913,   915,   917,   919,   924,   929,   934,   935,   942,   945,
     947,   949,   951,   953,   956,   961,   966,   971,   977,   980,
     982,   984,   986,   991,   992,   999,  1002,  1004,  1006,  1008,
    1010,  1013,  1018,  1023,  1024,  1030,  1034,  1036,  1038,  1040,
    1042,  1044,  1046,  1048,  1050,  1052,  1054,  1056,  1057,  1064,
    1067,  1069,  1071,  1073,  1076,  1081,  1082,  1088,  1092,  1094,
    1096,  1098,  1100,  1102,  1104,  1106,  1108,  1110,  1112,  1114,
    1115,  1122,  1125,  1127,  1129,  1131,  1133,  1135,  1137,  1139,
    1141,  1143,  1145,  1147,  1149,  1151,  1153,  1156,  1161,  1166,
    1171,  1176,  1181,  1186,  1191,  1196,  1197,  1203,  1207,  1209,
    1211,  1213,  1218,  1223,  1228,  1233,  1238,  1239,  1246,  1249,
    1251,  1253,  1255,  1257,  1262,  1267,  1268,  1275,  1278,  1280,
    1282,  1284,  1286,  1291,  1296,  1302,  1305,  1307,  1309,  1311,
    1316,  1317,  1324,  1327,  1329,  1331,  1333,  1335,  1340,  1345,
    1351,  1354,  1356,  1358,  1360,  1362,  1364,  1366,  1368,  1370,
    1372,  1374,  1376,  1378,  1380,  1382,  1384,  1386,  1388,  1390,
    1392,  1394,  1396,  1398,  1400,  1402,  1404,  1406,  1408,  1410,
    1412,  1414,  1416,  1418,  1420,  1422,  1424,  1426,  1428,  1430,
    1432,  1434,  1436,  1438,  1440,  1442,  1444,  1446,  1448,  1450,
    1452,  1457,  1462,  1467,  1472,  1477,  1482,  1487,  1492,  1497,
    1502,  1507,  1512,  1517,  1522,  1527,  1532,  1537,  1542,  1547,
    1552,  1557,  1562,  1567,  1572,  1577,  1582,  1587,  1592,  1597,
    1602,  1607,  1612,  1617,  1622,  1627,  1632,  1637,  1642,  1647,
    1652,  1657,  1662,  1667,  1672,  1673,  1679,  1683,  1685,  1687,
    1689,  1691,  1693,  1695,  1697,  1699,  1701,  1703,  1705,  1707,
    1709,  1711,  1713,  1715,  1717,  1719,  1721,  1723,  1725,  1727,
    1728,  1734,  1738,  1740,  1742,  1744,  1746,  1748,  1750,  1752,
    1754,  1756,  1758,  1760,  1762,  1764,  1766,  1768,  1770,  1772,
    1774,  1776,  1778,  1780,  1782,  1787,  1792,  1797,  1803,  1806,
    1808,  1810,  1812,  1814,  1816,  1818,  1820,  1822,  1824,  1826,
    1828,  1830,  1832,  1834,  1839,  1844,  1849,  1854,  1859,  1864,
    1869,  1874,  1879,  1884,  1889,  1894,  1900,  1903,  1905,  1907,
    1909,  1911,  1913,  1915,  1917,  1919,  1921,  1923,  1928,  1933,
    1938,  1943,  1948,  1953,  1958
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     230,     0,    -1,    -1,   230,   231,    -1,   265,    -1,   277,
      -1,   291,    -1,   489,    -1,   309,    -1,   332,    -1,   346,
      -1,   241,    -1,   504,    -1,   361,    -1,   368,    -1,   372,
      -1,   382,    -1,   391,    -1,   411,    -1,   417,    -1,   423,
      -1,   433,    -1,   427,    -1,   236,    -1,   271,    -1,     1,
     223,    -1,     1,   224,    -1,    -1,   233,    -1,   107,   232,
      -1,   107,   134,   232,    -1,   107,   135,   232,    -1,   107,
     136,   232,    -1,   107,   137,   232,    -1,   107,   138,   232,
      -1,   107,   139,   232,    -1,   107,   140,   232,    -1,    -1,
     235,    -1,   107,   234,    -1,   107,     9,   234,    -1,   107,
      10,   234,    -1,   107,    11,   234,    -1,    95,   225,   237,
     224,   223,    -1,   237,   238,    -1,   238,    -1,   239,    -1,
     240,    -1,     1,   223,    -1,    94,   226,   122,   223,    -1,
     118,   226,   122,   223,    -1,   144,   225,   242,   224,   223,
      -1,   242,   243,    -1,   243,    -1,   254,    -1,   259,    -1,
     264,    -1,   256,    -1,   257,    -1,   258,    -1,   261,    -1,
     262,    -1,   263,    -1,   252,    -1,   251,    -1,   260,    -1,
     255,    -1,   250,    -1,   244,    -1,   245,    -1,   253,    -1,
       1,   223,    -1,   193,   226,   246,   223,    -1,   194,   226,
     248,   223,    -1,   246,   227,   247,    -1,   247,    -1,   195,
      -1,   196,    -1,   248,   227,   249,    -1,   249,    -1,   195,
      -1,   196,    -1,   149,   226,   122,   223,    -1,   132,   226,
     122,   223,    -1,   150,   226,   122,   223,    -1,   192,   226,
     122,   223,    -1,    97,   226,   122,   223,    -1,    63,   226,
     122,   223,    -1,    24,   226,   122,   223,    -1,   101,   226,
     122,   223,    -1,   100,   226,   122,   223,    -1,   219,   226,
     122,   223,    -1,   220,   226,   122,   223,    -1,   174,   226,
     107,   223,    -1,    85,   226,   107,   223,    -1,    89,   226,
     107,   223,    -1,    56,   226,   206,   223,    -1,     4,   225,
     266,   224,   223,    -1,   266,   267,    -1,   267,    -1,   268,
      -1,   270,    -1,   269,    -1,     1,   223,    -1,    97,   226,
     122,   223,    -1,    31,   226,   122,   223,    -1,    24,   226,
     122,   223,    -1,    -1,    96,   272,   225,   273,   224,   223,
      -1,   273,   274,    -1,   274,    -1,   275,    -1,   276,    -1,
       1,   223,    -1,    75,   226,   122,   223,    -1,   166,   226,
     122,   223,    -1,   173,   225,   278,   224,   223,    -1,   278,
     279,    -1,   279,    -1,   280,    -1,   281,    -1,     1,   223,
      -1,   217,   226,   206,   223,    -1,    -1,   282,   166,   225,
     283,   224,   223,    -1,   283,   284,    -1,   284,    -1,   285,
      -1,   287,    -1,   286,    -1,     1,   223,    -1,    97,   226,
     122,   223,    -1,   187,   226,   235,   223,    -1,   187,   226,
     200,   223,    -1,    -1,   214,   288,   226,   289,   223,    -1,
     289,   227,   290,    -1,   290,    -1,   218,    -1,   113,    -1,
      39,    -1,   163,    -1,    68,    -1,    66,    -1,   162,    -1,
      -1,   113,   292,   225,   293,   224,   223,    -1,   293,   294,
      -1,   294,    -1,   295,    -1,   296,    -1,   297,    -1,   301,
      -1,   300,    -1,   298,    -1,   299,    -1,   305,    -1,     1,
     223,    -1,    97,   226,   122,   223,    -1,   218,   226,   122,
     223,    -1,   117,   226,   122,   223,    -1,    32,   226,   206,
     223,    -1,   133,   226,   122,   223,    -1,    17,   226,   122,
     223,    -1,    -1,   197,   302,   226,   303,   223,    -1,   303,
     227,   304,    -1,   304,    -1,   157,    -1,   159,    -1,   161,
      -1,   162,    -1,   167,    -1,    48,    -1,   188,    -1,   175,
      -1,   179,    -1,   198,    -1,   190,    -1,   164,    -1,   177,
      -1,   184,    -1,   169,    -1,   203,    -1,   189,    -1,   158,
      -1,   172,    -1,   176,    -1,   165,    -1,    -1,    62,   306,
     226,   307,   223,    -1,   307,   227,   308,    -1,   308,    -1,
      66,   228,   128,    -1,    66,    -1,    18,   228,   128,    -1,
      18,    -1,   148,   228,   128,    -1,   148,    -1,    68,    -1,
     215,    -1,   163,    -1,   199,    -1,   222,    -1,    39,    -1,
      25,    -1,   180,    -1,   127,    -1,     4,    -1,   177,    -1,
     168,    -1,   204,    -1,   172,    -1,   129,    -1,   185,    -1,
      94,    -1,    -1,    17,   310,   225,   311,   224,   223,    -1,
     311,   312,    -1,   312,    -1,   313,    -1,   323,    -1,   324,
      -1,   314,    -1,   325,    -1,   315,    -1,   316,    -1,   317,
      -1,   318,    -1,   319,    -1,   320,    -1,   321,    -1,   322,
      -1,   326,    -1,   327,    -1,   328,    -1,     1,   223,    -1,
      97,   226,   122,   223,    -1,   120,   226,   233,   223,    -1,
     109,   226,   107,   223,    -1,    19,   226,   233,   223,    -1,
      87,   226,   107,   223,    -1,    80,   226,   107,   223,    -1,
      83,   226,   107,   223,    -1,    81,   226,   107,   223,    -1,
     142,   226,   235,   223,    -1,   178,   226,   235,   223,    -1,
      15,   226,   107,   223,    -1,    16,   226,   107,   223,    -1,
     108,   226,   107,   223,    -1,    91,   226,   233,   223,    -1,
      82,   226,   233,   223,    -1,    -1,    62,   329,   226,   330,
     223,    -1,   330,   227,   331,    -1,   331,    -1,   123,    -1,
      50,    -1,    -1,    74,   333,   225,   338,   224,   223,    -1,
      -1,    62,   335,   226,   336,   223,    -1,   336,   227,   337,
      -1,   337,    -1,   191,    -1,    48,    -1,   181,    -1,   338,
     339,    -1,   339,    -1,   340,    -1,   334,    -1,   344,    -1,
     345,    -1,     1,   223,    -1,    -1,   121,   226,   342,   341,
     223,    -1,   342,   227,   343,    -1,   343,    -1,   107,    -1,
     107,   213,   107,    -1,    60,   226,   122,   223,    -1,    55,
     226,   122,   223,    -1,    -1,    61,   347,   225,   348,   224,
     223,    -1,   348,   349,    -1,   349,    -1,   350,    -1,   351,
      -1,   352,    -1,   354,    -1,   358,    -1,   359,    -1,   360,
      -1,   353,    -1,     1,   223,    -1,   218,   226,   122,   223,
      -1,   117,   226,   122,   223,    -1,    17,   226,   122,   223,
      -1,    32,   226,   206,   223,    -1,    -1,    62,   355,   226,
     356,   223,    -1,   356,   227,   357,    -1,   357,    -1,   147,
      -1,    33,    -1,    69,    -1,    98,    -1,    13,    -1,   106,
      -1,    42,    -1,   131,    -1,   205,    -1,    99,    -1,   146,
     226,   122,   223,    -1,   126,   226,   122,   223,    -1,   125,
     226,   107,   223,    -1,    -1,   130,   362,   225,   363,   224,
     223,    -1,   363,   364,    -1,   364,    -1,   365,    -1,   366,
      -1,   367,    -1,     1,   223,    -1,    75,   226,   122,   223,
      -1,   124,   226,   122,   223,    -1,    34,   226,   122,   223,
      -1,   182,   225,   369,   224,   223,    -1,   369,   370,    -1,
     370,    -1,   371,    -1,     1,    -1,    97,   226,   122,   223,
      -1,    -1,   186,   373,   225,   374,   224,   223,    -1,   374,
     375,    -1,   375,    -1,   376,    -1,   377,    -1,   378,    -1,
       1,   223,    -1,    97,   226,   122,   223,    -1,   218,   226,
     122,   223,    -1,    -1,   214,   379,   226,   380,   223,    -1,
     380,   227,   381,    -1,   381,    -1,    68,    -1,   215,    -1,
     163,    -1,   199,    -1,   222,    -1,   202,    -1,   130,    -1,
     201,    -1,   172,    -1,   156,    -1,    -1,   160,   383,   225,
     384,   224,   223,    -1,   384,   385,    -1,   385,    -1,   386,
      -1,   387,    -1,     1,   223,    -1,    97,   226,   122,   223,
      -1,    -1,   214,   388,   226,   389,   223,    -1,   389,   227,
     390,    -1,   390,    -1,    68,    -1,   215,    -1,   163,    -1,
     199,    -1,   222,    -1,   202,    -1,   130,    -1,   201,    -1,
     172,    -1,   156,    -1,    -1,    18,   392,   225,   393,   224,
     223,    -1,   393,   394,    -1,   394,    -1,   395,    -1,   396,
      -1,   397,    -1,   398,    -1,   399,    -1,   401,    -1,   400,
      -1,   410,    -1,   402,    -1,   407,    -1,   408,    -1,   409,
      -1,   406,    -1,     1,   223,    -1,    97,   226,   122,   223,
      -1,    55,   226,   122,   223,    -1,   219,   226,   122,   223,
      -1,   141,   226,   122,   223,    -1,     3,   226,   122,   223,
      -1,   121,   226,   107,   223,    -1,     5,   226,   170,   223,
      -1,     5,   226,   171,   223,    -1,    -1,    62,   403,   226,
     404,   223,    -1,   404,   227,   405,    -1,   405,    -1,     8,
      -1,   191,    -1,    32,   226,   206,   223,    -1,    57,   226,
     122,   223,    -1,    72,   226,   122,   223,    -1,    17,   226,
     122,   223,    -1,   192,   226,   122,   223,    -1,    -1,    66,
     412,   225,   413,   224,   223,    -1,   413,   414,    -1,   414,
      -1,   415,    -1,   416,    -1,     1,    -1,   218,   226,   122,
     223,    -1,   124,   226,   122,   223,    -1,    -1,    23,   418,
     225,   419,   224,   223,    -1,   419,   420,    -1,   420,    -1,
     421,    -1,   422,    -1,     1,    -1,    60,   226,   122,   223,
      -1,   124,   226,   122,   223,    -1,    34,   225,   424,   224,
     223,    -1,   424,   425,    -1,   425,    -1,   426,    -1,     1,
      -1,    60,   226,   122,   223,    -1,    -1,    37,   428,   225,
     429,   224,   223,    -1,   429,   430,    -1,   430,    -1,   431,
      -1,   432,    -1,     1,    -1,    97,   226,   122,   223,    -1,
     124,   226,   122,   223,    -1,    38,   225,   434,   224,   223,
      -1,   434,   435,    -1,   435,    -1,   444,    -1,   445,    -1,
     446,    -1,   447,    -1,   448,    -1,   449,    -1,   450,    -1,
     451,    -1,   452,    -1,   453,    -1,   443,    -1,   455,    -1,
     456,    -1,   470,    -1,   458,    -1,   460,    -1,   462,    -1,
     461,    -1,   465,    -1,   459,    -1,   466,    -1,   467,    -1,
     468,    -1,   469,    -1,   482,    -1,   471,    -1,   472,    -1,
     473,    -1,   478,    -1,   463,    -1,   464,    -1,   488,    -1,
     486,    -1,   487,    -1,   477,    -1,   454,    -1,   475,    -1,
     476,    -1,   442,    -1,   437,    -1,   438,    -1,   439,    -1,
     440,    -1,   441,    -1,   457,    -1,   436,    -1,   474,    -1,
       1,    -1,    90,   226,   107,   223,    -1,    41,   226,   206,
     223,    -1,    40,   226,   233,   223,    -1,    45,   226,   233,
     223,    -1,    43,   226,   107,   223,    -1,    44,   226,   107,
     223,    -1,   208,   226,   206,   223,    -1,    67,   226,   233,
     223,    -1,    54,   226,   206,   223,    -1,    58,   226,   206,
     223,    -1,    35,   226,   206,   223,    -1,     6,   226,   206,
     223,    -1,    86,   226,   233,   223,    -1,    84,   226,   107,
     223,    -1,    76,   226,   107,   223,    -1,     7,   226,   233,
     223,    -1,   212,   226,   233,   223,    -1,   211,   226,   233,
     223,    -1,    47,   226,   107,   223,    -1,    59,   226,   206,
     223,    -1,   221,   226,   206,   223,    -1,   151,   226,   206,
     223,    -1,   154,   226,   206,   223,    -1,   155,   226,   206,
     223,    -1,   153,   226,   206,   223,    -1,   153,   226,   209,
     223,    -1,   152,   226,   206,   223,    -1,   152,   226,   209,
     223,    -1,   115,   226,   233,   223,    -1,    12,   226,   233,
     223,    -1,   114,   226,   206,   223,    -1,   116,   226,   233,
     223,    -1,   145,   226,   206,   223,    -1,   105,   226,   206,
     223,    -1,   210,   226,   206,   223,    -1,   111,   226,   206,
     223,    -1,    29,   226,   107,   223,    -1,    88,   226,   107,
     223,    -1,   216,   226,   206,   223,    -1,    30,   226,   122,
     223,    -1,   183,   226,   122,   223,    -1,   119,   226,   206,
     223,    -1,    26,   226,   206,   223,    -1,   207,   226,   233,
     223,    -1,    -1,   112,   479,   226,   480,   223,    -1,   480,
     227,   481,    -1,   481,    -1,   157,    -1,   159,    -1,   161,
      -1,   162,    -1,   167,    -1,    48,    -1,   188,    -1,   175,
      -1,   179,    -1,   198,    -1,   190,    -1,   164,    -1,   177,
      -1,   184,    -1,   169,    -1,   203,    -1,   189,    -1,   158,
      -1,   172,    -1,   176,    -1,   165,    -1,    -1,   110,   483,
     226,   484,   223,    -1,   484,   227,   485,    -1,   485,    -1,
     157,    -1,   159,    -1,   161,    -1,   162,    -1,   167,    -1,
     188,    -1,    48,    -1,   175,    -1,   179,    -1,   198,    -1,
     190,    -1,   164,    -1,   177,    -1,   184,    -1,   169,    -1,
     203,    -1,   189,    -1,   158,    -1,   172,    -1,   176,    -1,
     165,    -1,    92,   226,   107,   223,    -1,    93,   226,   107,
     223,    -1,    20,   226,   107,   223,    -1,    14,   225,   490,
     224,   223,    -1,   490,   491,    -1,   491,    -1,   497,    -1,
     493,    -1,   494,    -1,   495,    -1,   496,    -1,   498,    -1,
     499,    -1,   500,    -1,   501,    -1,   502,    -1,   503,    -1,
     492,    -1,     1,    -1,    27,   226,   206,   223,    -1,    70,
     226,   233,   223,    -1,    71,   226,   233,   223,    -1,    79,
     226,   107,   223,    -1,    78,   226,   107,   223,    -1,    77,
     226,   107,   223,    -1,    22,   226,   107,   223,    -1,    21,
     226,   107,   223,    -1,   103,   226,   206,   223,    -1,   104,
     226,   206,   223,    -1,    64,   226,   107,   223,    -1,    65,
     226,   233,   223,    -1,   143,   225,   505,   224,   223,    -1,
     505,   506,    -1,   506,    -1,   507,    -1,   508,    -1,   509,
      -1,   510,    -1,   512,    -1,   513,    -1,   511,    -1,   514,
      -1,     1,    -1,    36,   226,   206,   223,    -1,    28,   226,
     206,   223,    -1,    52,   226,   206,   223,    -1,    53,   226,
     206,   223,    -1,    49,   226,   122,   223,    -1,    73,   226,
     233,   223,    -1,    48,   226,   206,   223,    -1,    51,   226,
     206,   223,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   365,   365,   366,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   395,   395,   396,
     400,   404,   408,   412,   416,   420,   424,   430,   430,   431,
     432,   433,   434,   441,   444,   444,   445,   445,   445,   447,
     453,   460,   462,   462,   463,   463,   464,   464,   465,   465,
     466,   466,   467,   467,   468,   468,   469,   469,   470,   470,
     471,   472,   475,   476,   478,   478,   479,   485,   493,   493,
     494,   500,   508,   550,   609,   637,   645,   660,   675,   684,
     698,   707,   735,   765,   790,   812,   834,   843,   845,   845,
     846,   846,   847,   847,   849,   858,   867,   880,   879,   897,
     897,   898,   898,   898,   900,   906,   915,   916,   916,   918,
     918,   919,   921,   928,   928,   941,   942,   944,   944,   945,
     945,   947,   955,   958,   964,   963,   969,   969,   970,   974,
     978,   982,   986,   990,   994,  1005,  1004,  1081,  1081,  1082,
    1082,  1082,  1083,  1083,  1083,  1084,  1084,  1084,  1086,  1092,
    1098,  1104,  1115,  1121,  1128,  1127,  1133,  1133,  1134,  1138,
    1142,  1146,  1150,  1154,  1158,  1162,  1166,  1170,  1174,  1178,
    1182,  1186,  1190,  1194,  1198,  1202,  1206,  1210,  1214,  1221,
    1220,  1226,  1226,  1227,  1231,  1235,  1239,  1243,  1247,  1251,
    1255,  1259,  1263,  1267,  1271,  1275,  1279,  1283,  1287,  1291,
    1295,  1299,  1303,  1307,  1311,  1315,  1326,  1325,  1386,  1386,
    1387,  1388,  1388,  1389,  1390,  1391,  1392,  1393,  1394,  1395,
    1396,  1397,  1397,  1398,  1399,  1400,  1401,  1403,  1409,  1415,
    1421,  1427,  1433,  1439,  1445,  1451,  1457,  1464,  1470,  1476,
    1482,  1491,  1501,  1500,  1506,  1506,  1507,  1511,  1522,  1521,
    1528,  1527,  1532,  1532,  1533,  1537,  1541,  1547,  1547,  1548,
    1548,  1548,  1548,  1548,  1550,  1550,  1552,  1552,  1554,  1568,
    1588,  1594,  1604,  1603,  1645,  1645,  1646,  1646,  1646,  1646,
    1647,  1647,  1647,  1648,  1648,  1650,  1656,  1662,  1668,  1680,
    1679,  1685,  1685,  1686,  1690,  1694,  1698,  1702,  1706,  1710,
    1714,  1718,  1722,  1728,  1742,  1751,  1765,  1764,  1779,  1779,
    1780,  1780,  1780,  1780,  1782,  1788,  1794,  1804,  1806,  1806,
    1807,  1807,  1809,  1825,  1824,  1849,  1849,  1850,  1850,  1850,
    1850,  1852,  1858,  1878,  1877,  1883,  1883,  1884,  1888,  1892,
    1896,  1900,  1904,  1908,  1912,  1916,  1920,  1930,  1929,  1950,
    1950,  1951,  1951,  1951,  1953,  1960,  1959,  1965,  1965,  1966,
    1970,  1974,  1978,  1982,  1986,  1990,  1994,  1998,  2002,  2012,
    2011,  2077,  2077,  2078,  2078,  2078,  2079,  2079,  2080,  2080,
    2080,  2081,  2081,  2081,  2082,  2082,  2083,  2085,  2091,  2097,
    2103,  2116,  2129,  2135,  2139,  2148,  2147,  2152,  2152,  2153,
    2157,  2163,  2174,  2180,  2186,  2192,  2208,  2207,  2233,  2233,
    2234,  2234,  2234,  2236,  2256,  2266,  2265,  2292,  2292,  2293,
    2293,  2293,  2295,  2301,  2310,  2312,  2312,  2313,  2313,  2315,
    2333,  2332,  2355,  2355,  2356,  2356,  2356,  2358,  2364,  2373,
    2376,  2376,  2377,  2377,  2378,  2378,  2379,  2379,  2380,  2380,
    2381,  2381,  2382,  2383,  2384,  2384,  2385,  2385,  2386,  2386,
    2387,  2387,  2388,  2388,  2389,  2389,  2390,  2390,  2391,  2391,
    2392,  2392,  2393,  2393,  2394,  2394,  2395,  2395,  2396,  2397,
    2398,  2398,  2399,  2399,  2400,  2401,  2402,  2403,  2403,  2404,
    2407,  2412,  2418,  2424,  2430,  2435,  2440,  2445,  2450,  2455,
    2460,  2465,  2470,  2475,  2480,  2485,  2490,  2495,  2501,  2512,
    2517,  2522,  2527,  2532,  2537,  2540,  2545,  2548,  2553,  2558,
    2563,  2568,  2573,  2578,  2583,  2588,  2593,  2598,  2603,  2608,
    2617,  2626,  2631,  2636,  2642,  2641,  2646,  2646,  2647,  2650,
    2653,  2656,  2659,  2662,  2665,  2668,  2671,  2674,  2677,  2680,
    2683,  2686,  2689,  2692,  2695,  2698,  2701,  2704,  2707,  2713,
    2712,  2717,  2717,  2718,  2721,  2724,  2727,  2730,  2733,  2736,
    2739,  2742,  2745,  2748,  2751,  2754,  2757,  2760,  2763,  2766,
    2769,  2772,  2775,  2778,  2783,  2788,  2793,  2802,  2805,  2805,
    2806,  2807,  2807,  2808,  2808,  2809,  2810,  2811,  2812,  2813,
    2813,  2814,  2814,  2816,  2821,  2826,  2831,  2836,  2841,  2846,
    2851,  2856,  2861,  2866,  2871,  2879,  2882,  2882,  2883,  2883,
    2884,  2885,  2886,  2887,  2887,  2888,  2889,  2891,  2897,  2903,
    2909,  2915,  2924,  2938,  2944
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ADMIN", "AFTYPE",
  "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME", "AUTOCONN", "BYTES",
  "KBYTES", "MBYTES", "CALLER_ID_WAIT", "CAN_FLOOD", "CHANNEL",
  "CIDR_BITLEN_IPV4", "CIDR_BITLEN_IPV6", "CLASS", "CONNECT",
  "CONNECTFREQ", "DEFAULT_FLOODCOUNT", "DEFAULT_SPLIT_SERVER_COUNT",
  "DEFAULT_SPLIT_USER_COUNT", "DENY", "DESCRIPTION", "DIE", "DISABLE_AUTH",
  "DISABLE_FAKE_CHANNELS", "DISABLE_REMOTE_COMMANDS", "DOTS_IN_IDENT",
  "EGDPOOL_PATH", "EMAIL", "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT",
  "FAILED_OPER_NOTICE", "FLATTEN_LINKS", "GECOS", "GENERAL", "GLINE",
  "GLINE_DURATION", "GLINE_ENABLE", "GLINE_EXEMPT", "GLINE_MIN_CIDR",
  "GLINE_MIN_CIDR6", "GLINE_REQUEST_DURATION", "GLOBAL_KILL",
  "HAVENT_READ_CONF", "HIDDEN", "HIDDEN_NAME", "HIDE_IDLE_FROM_OPERS",
  "HIDE_SERVER_IPS", "HIDE_SERVERS", "HIDE_SERVICES", "HIDE_SPOOF_IPS",
  "HOST", "HUB", "HUB_MASK", "IGNORE_BOGUS_TS", "INVISIBLE_ON_CONNECT",
  "IP", "IRCD_AUTH", "IRCD_FLAGS", "IRCD_SID", "JOIN_FLOOD_COUNT",
  "JOIN_FLOOD_TIME", "KILL", "KILL_CHASE_TIME_LIMIT", "KLINE",
  "KLINE_EXEMPT", "KNOCK_DELAY", "KNOCK_DELAY_CHANNEL", "LEAF_MASK",
  "LINKS_DELAY", "LISTEN", "MASK", "MAX_ACCEPT", "MAX_BANS",
  "MAX_CHANS_PER_OPER", "MAX_CHANS_PER_USER", "MAX_GLOBAL", "MAX_IDENT",
  "MAX_IDLE", "MAX_LOCAL", "MAX_NICK_CHANGES", "MAX_NICK_LENGTH",
  "MAX_NICK_TIME", "MAX_NUMBER", "MAX_TARGETS", "MAX_TOPIC_LENGTH",
  "MAX_WATCH", "MIN_IDLE", "MIN_NONWILDCARD", "MIN_NONWILDCARD_SIMPLE",
  "MODULE", "MODULES", "MOTD", "NAME", "NEED_IDENT", "NEED_PASSWORD",
  "NETWORK_DESC", "NETWORK_NAME", "NICK", "NO_CREATE_ON_SPLIT",
  "NO_JOIN_ON_SPLIT", "NO_OPER_FLOOD", "NO_TILDE", "NUMBER",
  "NUMBER_PER_CIDR", "NUMBER_PER_IP", "OPER_ONLY_UMODES", "OPER_PASS_RESV",
  "OPER_UMODES", "OPERATOR", "OPERS_BYPASS_CALLERID", "PACE_WAIT",
  "PACE_WAIT_SIMPLE", "PASSWORD", "PATH", "PING_COOKIE", "PING_TIME",
  "PORT", "QSTRING", "RANDOM_IDLE", "REASON", "REDIRPORT", "REDIRSERV",
  "REHASH", "REMOTE", "REMOTEBAN", "RESV", "RESV_EXEMPT",
  "RSA_PRIVATE_KEY_FILE", "RSA_PUBLIC_KEY_FILE", "SECONDS", "MINUTES",
  "HOURS", "DAYS", "WEEKS", "MONTHS", "YEARS", "SEND_PASSWORD", "SENDQ",
  "SERVERHIDE", "SERVERINFO", "SHORT_MOTD", "SPOOF", "SPOOF_NOTICE",
  "SQUIT", "SSL_CERTIFICATE_FILE", "SSL_DH_PARAM_FILE", "STATS_E_DISABLED",
  "STATS_I_OPER_ONLY", "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY",
  "STATS_P_OPER_ONLY", "T_ALL", "T_BOTS", "T_CALLERID", "T_CCONN",
  "T_CLUSTER", "T_DEAF", "T_DEBUG", "T_DLINE", "T_EXTERNAL",
  "T_FARCONNECT", "T_FILE", "T_FULL", "T_GLOBOPS", "T_INVISIBLE", "T_IPV4",
  "T_IPV6", "T_LOCOPS", "T_LOG", "T_MAX_CLIENTS", "T_NCHANGE",
  "T_NONONREG", "T_OPERWALL", "T_RECVQ", "T_REJ", "T_RESTART", "T_SERVER",
  "T_SERVICE", "T_SERVICES_NAME", "T_SERVNOTICE", "T_SET", "T_SHARED",
  "T_SIZE", "T_SKILL", "T_SOFTCALLERID", "T_SPY", "T_SSL",
  "T_SSL_CIPHER_LIST", "T_SSL_CLIENT_METHOD", "T_SSL_SERVER_METHOD",
  "T_SSLV3", "T_TLSV1", "T_UMODES", "T_UNAUTH", "T_UNDLINE", "T_UNLIMITED",
  "T_UNRESV", "T_UNXLINE", "T_WALLOP", "T_WALLOPS", "T_WEBIRC", "TBOOL",
  "THROTTLE_TIME", "TKLINE_EXPIRE_NOTICES", "TMASKED",
  "TRUE_NO_OPER_FLOOD", "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS", "TYPE",
  "UNKLINE", "USE_EGD", "USE_LOGGING", "USER", "VHOST", "VHOST6",
  "WARN_NO_NLINE", "XLINE", "';'", "'}'", "'{'", "'='", "','", "':'",
  "$accept", "conf", "conf_item", "timespec_", "timespec", "sizespec_",
  "sizespec", "modules_entry", "modules_items", "modules_item",
  "modules_module", "modules_path", "serverinfo_entry", "serverinfo_items",
  "serverinfo_item", "serverinfo_ssl_client_method",
  "serverinfo_ssl_server_method", "client_method_types",
  "client_method_type_item", "server_method_types",
  "server_method_type_item", "serverinfo_ssl_certificate_file",
  "serverinfo_rsa_private_key_file", "serverinfo_ssl_dh_param_file",
  "serverinfo_ssl_cipher_list", "serverinfo_name", "serverinfo_sid",
  "serverinfo_description", "serverinfo_network_name",
  "serverinfo_network_desc", "serverinfo_vhost", "serverinfo_vhost6",
  "serverinfo_max_clients", "serverinfo_max_nick_length",
  "serverinfo_max_topic_length", "serverinfo_hub", "admin_entry",
  "admin_items", "admin_item", "admin_name", "admin_email",
  "admin_description", "motd_entry", "$@1", "motd_items", "motd_item",
  "motd_mask", "motd_file", "logging_entry", "logging_items",
  "logging_item", "logging_use_logging", "logging_file_entry", "$@2",
  "logging_file_items", "logging_file_item", "logging_file_name",
  "logging_file_size", "logging_file_type", "$@3",
  "logging_file_type_items", "logging_file_type_item", "oper_entry", "$@4",
  "oper_items", "oper_item", "oper_name", "oper_user", "oper_password",
  "oper_encrypted", "oper_rsa_public_key_file", "oper_class",
  "oper_umodes", "$@5", "oper_umodes_items", "oper_umodes_item",
  "oper_flags", "$@6", "oper_flags_items", "oper_flags_item",
  "class_entry", "$@7", "class_items", "class_item", "class_name",
  "class_ping_time", "class_number_per_ip", "class_connectfreq",
  "class_max_number", "class_max_global", "class_max_local",
  "class_max_ident", "class_sendq", "class_recvq",
  "class_cidr_bitlen_ipv4", "class_cidr_bitlen_ipv6",
  "class_number_per_cidr", "class_min_idle", "class_max_idle",
  "class_flags", "$@8", "class_flags_items", "class_flags_item",
  "listen_entry", "$@9", "listen_flags", "$@10", "listen_flags_items",
  "listen_flags_item", "listen_items", "listen_item", "listen_port",
  "$@11", "port_items", "port_item", "listen_address", "listen_host",
  "auth_entry", "$@12", "auth_items", "auth_item", "auth_user",
  "auth_passwd", "auth_class", "auth_encrypted", "auth_flags", "$@13",
  "auth_flags_items", "auth_flags_item", "auth_spoof", "auth_redir_serv",
  "auth_redir_port", "resv_entry", "$@14", "resv_items", "resv_item",
  "resv_mask", "resv_reason", "resv_exempt", "service_entry",
  "service_items", "service_item", "service_name", "shared_entry", "$@15",
  "shared_items", "shared_item", "shared_name", "shared_user",
  "shared_type", "$@16", "shared_types", "shared_type_item",
  "cluster_entry", "$@17", "cluster_items", "cluster_item", "cluster_name",
  "cluster_type", "$@18", "cluster_types", "cluster_type_item",
  "connect_entry", "$@19", "connect_items", "connect_item", "connect_name",
  "connect_host", "connect_vhost", "connect_send_password",
  "connect_accept_password", "connect_port", "connect_aftype",
  "connect_flags", "$@20", "connect_flags_items", "connect_flags_item",
  "connect_encrypted", "connect_hub_mask", "connect_leaf_mask",
  "connect_class", "connect_ssl_cipher_list", "kill_entry", "$@21",
  "kill_items", "kill_item", "kill_user", "kill_reason", "deny_entry",
  "$@22", "deny_items", "deny_item", "deny_ip", "deny_reason",
  "exempt_entry", "exempt_items", "exempt_item", "exempt_ip",
  "gecos_entry", "$@23", "gecos_items", "gecos_item", "gecos_name",
  "gecos_reason", "general_entry", "general_items", "general_item",
  "general_max_watch", "general_gline_enable", "general_gline_duration",
  "general_gline_request_duration", "general_gline_min_cidr",
  "general_gline_min_cidr6", "general_tkline_expire_notices",
  "general_kill_chase_time_limit", "general_hide_spoof_ips",
  "general_ignore_bogus_ts", "general_failed_oper_notice",
  "general_anti_nick_flood", "general_max_nick_time",
  "general_max_nick_changes", "general_max_accept",
  "general_anti_spam_exit_message_time", "general_ts_warn_delta",
  "general_ts_max_delta", "general_havent_read_conf",
  "general_invisible_on_connect", "general_warn_no_nline",
  "general_stats_e_disabled", "general_stats_o_oper_only",
  "general_stats_P_oper_only", "general_stats_k_oper_only",
  "general_stats_i_oper_only", "general_pace_wait",
  "general_caller_id_wait", "general_opers_bypass_callerid",
  "general_pace_wait_simple", "general_short_motd",
  "general_no_oper_flood", "general_true_no_oper_flood",
  "general_oper_pass_resv", "general_dots_in_ident", "general_max_targets",
  "general_use_egd", "general_egdpool_path", "general_services_name",
  "general_ping_cookie", "general_disable_auth", "general_throttle_time",
  "general_oper_umodes", "$@24", "umode_oitems", "umode_oitem",
  "general_oper_only_umodes", "$@25", "umode_items", "umode_item",
  "general_min_nonwildcard", "general_min_nonwildcard_simple",
  "general_default_floodcount", "channel_entry", "channel_items",
  "channel_item", "channel_disable_fake_channels", "channel_knock_delay",
  "channel_knock_delay_channel", "channel_max_chans_per_user",
  "channel_max_chans_per_oper", "channel_max_bans",
  "channel_default_split_user_count", "channel_default_split_server_count",
  "channel_no_create_on_split", "channel_no_join_on_split",
  "channel_jflood_count", "channel_jflood_time", "serverhide_entry",
  "serverhide_items", "serverhide_item", "serverhide_flatten_links",
  "serverhide_disable_remote_commands", "serverhide_hide_servers",
  "serverhide_hide_services", "serverhide_hidden_name",
  "serverhide_links_delay", "serverhide_hidden",
  "serverhide_hide_server_ips", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,    59,   125,   123,    61,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   229,   230,   230,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   232,   232,   233,
     233,   233,   233,   233,   233,   233,   233,   234,   234,   235,
     235,   235,   235,   236,   237,   237,   238,   238,   238,   239,
     240,   241,   242,   242,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   244,   245,   246,   246,   247,   247,   248,   248,
     249,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   266,
     267,   267,   267,   267,   268,   269,   270,   272,   271,   273,
     273,   274,   274,   274,   275,   276,   277,   278,   278,   279,
     279,   279,   280,   282,   281,   283,   283,   284,   284,   284,
     284,   285,   286,   286,   288,   287,   289,   289,   290,   290,
     290,   290,   290,   290,   290,   292,   291,   293,   293,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   295,   296,
     297,   298,   299,   300,   302,   301,   303,   303,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   306,
     305,   307,   307,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   310,   309,   311,   311,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   329,   328,   330,   330,   331,   331,   333,   332,
     335,   334,   336,   336,   337,   337,   337,   338,   338,   339,
     339,   339,   339,   339,   341,   340,   342,   342,   343,   343,
     344,   345,   347,   346,   348,   348,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   350,   351,   352,   353,   355,
     354,   356,   356,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   358,   359,   360,   362,   361,   363,   363,
     364,   364,   364,   364,   365,   366,   367,   368,   369,   369,
     370,   370,   371,   373,   372,   374,   374,   375,   375,   375,
     375,   376,   377,   379,   378,   380,   380,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   383,   382,   384,
     384,   385,   385,   385,   386,   388,   387,   389,   389,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   392,
     391,   393,   393,   394,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   394,   395,   396,   397,
     398,   399,   400,   401,   401,   403,   402,   404,   404,   405,
     405,   406,   407,   408,   409,   410,   412,   411,   413,   413,
     414,   414,   414,   415,   416,   418,   417,   419,   419,   420,
     420,   420,   421,   422,   423,   424,   424,   425,   425,   426,
     428,   427,   429,   429,   430,   430,   430,   431,   432,   433,
     434,   434,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   460,   461,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   479,   478,   480,   480,   481,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   481,   483,
     482,   484,   484,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   486,   487,   488,   489,   490,   490,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   505,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   507,   508,   509,
     510,   511,   512,   513,   514
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     1,     2,
       3,     3,     3,     3,     3,     3,     3,     0,     1,     2,
       3,     3,     3,     5,     2,     1,     1,     1,     2,     4,
       4,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     4,     3,     1,     1,     1,     3,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     5,     2,     1,
       1,     1,     1,     2,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     2,     4,     4,     5,     2,     1,     1,
       1,     2,     4,     0,     6,     2,     1,     1,     1,     1,
       2,     4,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       4,     4,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     5,     3,     1,     1,     1,     0,     6,
       0,     5,     3,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     2,     0,     5,     3,     1,     1,     3,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     4,     4,     4,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     2,     4,     4,     4,     5,     2,     1,
       1,     1,     4,     0,     6,     2,     1,     1,     1,     1,
       2,     4,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     6,     2,
       1,     1,     1,     2,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     1,
       1,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     5,     2,     1,     1,     1,     4,
       0,     6,     2,     1,     1,     1,     1,     4,     4,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   216,   379,   425,     0,
     440,     0,   282,   416,   258,     0,   107,   145,   316,     0,
       0,   357,     0,     0,   333,     3,    23,    11,     4,    24,
       5,     6,     8,     9,    10,    13,    14,    15,    16,    17,
      18,    19,    20,    22,    21,     7,    12,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,   100,   102,   101,   612,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   599,   611,   601,   602,   603,   604,   600,
     605,   606,   607,   608,   609,   610,     0,     0,     0,   438,
       0,     0,   436,   437,     0,   499,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   569,     0,   544,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   451,   497,   491,   492,   493,   494,
     495,   490,   462,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   487,   463,   464,   496,   466,   471,   467,
     469,   468,   481,   482,   470,   472,   473,   474,   475,   465,
     477,   478,   479,   498,   488,   489,   486,   480,   476,   484,
     485,   483,     0,     0,     0,     0,     0,     0,     0,    45,
      46,    47,     0,     0,     0,   636,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   627,   628,   629,   630,   631,
     634,   632,   633,   635,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    68,    69,    67,    64,    63,    70,
      54,    66,    57,    58,    59,    55,    65,    60,    61,    62,
      56,     0,     0,     0,     0,   118,   119,   120,     0,   331,
       0,     0,   329,   330,     0,   103,     0,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   598,     0,     0,     0,     0,   252,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   220,   223,   225,   226,   227,   228,
     229,   230,   231,   232,   221,   222,   224,   233,   234,   235,
       0,     0,     0,     0,     0,     0,     0,   405,     0,     0,
       0,     0,     0,     0,     0,   382,   383,   384,   385,   386,
     387,   389,   388,   391,   395,   392,   393,   394,   390,   431,
       0,     0,     0,   428,   429,   430,     0,     0,   435,   446,
       0,     0,     0,   443,   444,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   450,     0,     0,     0,   299,     0,
       0,     0,     0,     0,     0,   285,   286,   287,   288,   293,
     289,   290,   291,   292,   422,     0,     0,     0,   419,   420,
     421,     0,     0,     0,   260,     0,   270,     0,   268,   269,
     271,   272,    48,     0,     0,     0,    44,     0,     0,     0,
       0,   110,   111,   112,     0,     0,     0,   189,     0,     0,
       0,   164,     0,     0,   148,   149,   150,   151,   154,   155,
     153,   152,   156,     0,     0,     0,     0,     0,   319,   320,
     321,   322,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   626,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,   365,     0,   360,   361,   362,   121,
       0,     0,   117,     0,     0,     0,   328,     0,     0,   343,
       0,     0,   336,   337,   338,   339,     0,     0,     0,    97,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,   597,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   396,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   381,     0,
       0,     0,   427,     0,   434,     0,     0,     0,   442,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   449,   294,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   284,
       0,     0,     0,   418,   273,     0,     0,     0,     0,     0,
     267,     0,     0,    43,   113,     0,     0,     0,   109,   157,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
     323,     0,     0,     0,     0,   318,     0,     0,     0,     0,
       0,     0,     0,     0,   625,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,    77,
       0,    75,    80,    81,     0,    79,     0,     0,    51,   363,
       0,     0,     0,   359,     0,   116,     0,     0,   327,   340,
       0,     0,     0,     0,   335,   106,   105,   104,   620,   619,
     613,   623,    27,    27,    27,    27,    27,    27,    27,    29,
      28,   624,   614,   615,   618,   617,   616,   621,   622,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   380,     0,     0,   426,   439,     0,     0,   441,   511,
     515,   529,   596,   542,   536,   539,   510,   502,   501,   504,
     505,   503,   518,   508,   509,   519,   507,   514,   513,   512,
     537,   500,   594,   595,   533,   579,   573,   590,   574,   575,
     576,   584,   593,   577,   587,   591,   580,   592,   585,   581,
     586,   578,   589,   583,   582,   588,     0,   572,   535,   553,
     548,   565,   549,   550,   551,   559,   568,   552,   562,   566,
     555,   567,   560,   556,   561,   554,   564,   558,   557,   563,
       0,   547,   530,   528,   531,   541,   532,   521,   526,   527,
     524,   525,   522,   523,   540,   543,   506,   534,   517,   516,
     538,   520,     0,     0,     0,     0,     0,     0,     0,     0,
     283,     0,     0,   417,     0,     0,     0,   278,   274,   277,
     259,    49,    50,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,   146,     0,     0,     0,   317,   638,
     637,   643,   641,   644,   639,   640,   642,    88,    96,    87,
      94,    95,    86,    90,    89,    83,    82,    84,    93,    85,
      72,     0,    73,     0,    91,    92,     0,     0,   358,   122,
       0,     0,     0,   134,     0,   126,   127,   129,   128,   332,
       0,     0,     0,   334,    30,    31,    32,    33,    34,    35,
      36,   247,   248,   240,   257,   256,     0,   255,   242,   244,
     251,   243,   241,   250,   237,   249,   239,   238,    37,    37,
      37,    39,    38,   245,   246,   401,   403,   404,   414,   411,
     398,   412,   409,   410,     0,   408,   413,   397,   402,   400,
     415,   399,   432,   433,   447,   448,   570,     0,   545,     0,
     297,   298,   307,   304,   309,   305,   306,   312,   308,   310,
     303,   311,     0,   302,   296,   315,   314,   313,   295,   424,
     423,   281,   280,   265,   266,   264,     0,   263,     0,     0,
       0,   114,   115,   163,   161,   208,   196,   205,   204,   194,
     199,   215,   207,   213,   198,   201,   210,   212,   209,   206,
     214,   202,   211,   200,   203,     0,   192,   158,   160,   162,
     173,   168,   185,   169,   170,   171,   179,   188,   172,   182,
     186,   175,   187,   180,   176,   181,   174,   184,   178,   177,
     183,     0,   167,   159,   326,   324,   325,    74,    78,   364,
     369,   375,   378,   371,   377,   372,   376,   374,   370,   373,
       0,   368,   130,     0,     0,     0,     0,   125,   341,   347,
     353,   356,   349,   355,   350,   354,   352,   348,   351,     0,
     346,   342,   253,     0,    40,    41,    42,   406,     0,   571,
     546,   300,     0,   261,     0,   279,   276,   275,     0,     0,
       0,   190,     0,   165,     0,   366,     0,     0,     0,     0,
       0,   124,   344,     0,   254,   407,   301,   262,   195,   193,
     197,   191,   166,   367,   131,   133,   132,   140,   143,   142,
     139,   144,   141,   138,     0,   137,   345,   135,     0,   136
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    25,   799,   800,  1051,  1052,    26,   218,   219,
     220,   221,    27,   262,   263,   264,   265,   760,   761,   764,
     765,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    28,    74,    75,    76,
      77,    78,    29,    61,   490,   491,   492,   493,    30,   284,
     285,   286,   287,   288,  1014,  1015,  1016,  1017,  1018,  1185,
    1254,  1255,    31,    62,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   726,  1161,  1162,   512,   722,  1135,  1136,
      32,    51,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     598,  1036,  1037,    33,    59,   476,   707,  1106,  1107,   477,
     478,   479,  1110,   958,   959,   480,   481,    34,    57,   454,
     455,   456,   457,   458,   459,   460,   692,  1092,  1093,   461,
     462,   463,    35,    63,   517,   518,   519,   520,   521,    36,
     291,   292,   293,    37,    69,   571,   572,   573,   574,   575,
     781,  1199,  1200,    38,    66,   555,   556,   557,   558,   771,
    1180,  1181,    39,    52,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   620,  1064,  1065,   374,   375,   376,
     377,   378,    40,    58,   467,   468,   469,   470,    41,    53,
     382,   383,   384,   385,    42,   111,   112,   113,    43,    55,
     392,   393,   394,   395,    44,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     424,   920,   921,   208,   422,   896,   897,   209,   210,   211,
      45,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    46,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -984
static const yytype_int16 yypact[] =
{
    -984,   637,  -984,  -186,  -182,  -165,  -984,  -984,  -984,  -148,
    -984,  -135,  -984,  -984,  -984,  -127,  -984,  -984,  -984,  -118,
     -64,  -984,   -56,   -50,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,   331,
     826,   -48,   -45,   -11,    28,    36,   366,    39,    40,    41,
      60,    46,    58,    62,   721,   334,    65,    35,    24,    72,
    -195,   -66,   -21,    66,    17,  -984,  -984,  -984,  -984,  -984,
      92,    96,    97,    99,   108,   110,   111,   118,   119,   124,
     125,   133,     5,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,   657,   440,    14,  -984,
     134,    12,  -984,  -984,    29,  -984,   135,   137,   138,   143,
     145,   149,   150,   153,   155,   157,   158,   162,   163,   174,
     176,   177,   178,   182,   186,   189,   190,   192,   195,   196,
     200,   201,  -984,   203,  -984,   204,   206,   210,   211,   214,
     221,   222,   225,   235,   236,   237,   238,   239,   242,   243,
     244,   249,   253,   105,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,   268,    19,   212,    16,   261,   262,    38,  -984,
    -984,  -984,   165,   472,   274,  -984,   264,   266,   270,   272,
     273,   279,   280,   281,     6,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,    32,   284,   287,   288,   290,   296,
     297,   298,   299,   304,   305,   306,   307,   316,   317,   319,
     320,   321,   146,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,    70,    87,   322,    10,  -984,  -984,  -984,   180,  -984,
     324,    95,  -984,  -984,   173,  -984,   232,   260,   277,   215,
    -984,   387,   444,   349,   449,   450,   450,   450,   451,   453,
     456,   359,   360,   344,  -984,   347,   346,   353,   354,  -984,
     358,   362,   364,   365,   367,   369,   371,   373,   376,   380,
     383,   384,   103,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
     363,   385,   388,   390,   391,   392,   393,  -984,   402,   403,
     404,   405,   409,   410,    30,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
     414,   426,     4,  -984,  -984,  -984,   463,   381,  -984,  -984,
     427,   430,    44,  -984,  -984,  -984,   386,   450,   450,   506,
     455,   555,   541,   458,   450,   459,   559,   561,   450,   563,
     474,   477,   480,   450,   581,   584,   450,   586,   587,   593,
     594,   496,   479,   500,   486,   507,   450,   450,   508,   510,
     511,  -197,  -192,   514,   515,   602,   450,   519,   521,   450,
     450,   522,   524,   503,  -984,   512,   505,   516,  -984,   517,
     525,   526,   527,   530,   231,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,   533,   534,    20,  -984,  -984,
    -984,   513,   535,   537,  -984,   538,  -984,    18,  -984,  -984,
    -984,  -984,  -984,   612,   619,   523,  -984,   545,   549,   550,
      67,  -984,  -984,  -984,   556,   552,   557,  -984,   558,   560,
     562,  -984,   564,   156,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,   566,   565,   567,   569,    55,  -984,  -984,
    -984,  -984,   539,   576,   579,   625,   590,   596,   597,   450,
     582,  -984,  -984,   665,   598,   670,   699,   700,   686,   687,
     689,   690,   691,   693,   709,   695,  -144,   -96,   696,   698,
     607,  -984,   610,   611,  -984,   128,  -984,  -984,  -984,  -984,
     616,   615,  -984,   620,   718,   618,  -984,   626,   624,  -984,
     628,    85,  -984,  -984,  -984,  -984,   629,   635,   636,  -984,
     638,   639,   640,   641,   487,   643,   650,   653,   655,   658,
     660,   661,   669,  -984,  -984,   753,   773,   450,   662,   786,
     788,   450,   794,   795,   450,   784,   800,   802,   450,   803,
     803,   688,  -984,  -984,   790,   -55,   792,   711,   793,   796,
     694,   797,   799,   809,   801,   804,   805,   701,  -984,   806,
     810,   702,  -984,   708,  -984,   811,   812,   712,  -984,   713,
     714,   715,   716,   717,   719,   720,   722,   723,   724,   725,
     726,   727,   728,   729,   730,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,   520,   741,   667,   742,   743,
     744,   745,   746,   747,   748,   749,   750,   751,   752,   754,
     755,   756,   757,   758,   759,   760,   761,   762,  -984,  -984,
     819,   770,   763,   822,   815,   864,   865,   866,   767,  -984,
     869,   870,   771,  -984,  -984,   871,   873,   772,   889,   774,
    -984,   776,   777,  -984,  -984,   879,   880,   780,  -984,  -984,
     882,   807,   779,   884,   885,   886,   783,   888,   789,  -984,
    -984,   892,   893,   894,   798,  -984,   808,   813,   814,   816,
     817,   818,   820,   821,  -984,   823,   824,   825,   827,   828,
     829,   830,   831,   832,   833,   834,   835,   836,  -984,  -984,
    -183,  -984,  -984,  -984,  -177,  -984,   837,   838,  -984,  -984,
     895,   785,   839,  -984,   840,  -984,   154,   841,  -984,  -984,
     896,   842,   897,   843,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,   450,   450,   450,   450,   450,   450,   450,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,   844,
     846,   847,   -42,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,    13,   858,   859,  -984,   860,   861,   862,
     863,   867,   868,   872,     8,   874,   875,   876,   877,   878,
     881,  -984,   883,   887,  -984,  -984,   890,   891,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -174,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -130,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,   898,   899,   502,   900,   901,   902,   903,   904,
    -984,   905,   906,  -984,   907,   908,    15,   919,   909,  -984,
    -984,  -984,  -984,   910,   911,  -984,   912,   914,   435,   915,
     916,   917,   710,   918,  -984,   920,   921,   922,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -144,  -984,   -96,  -984,  -984,   923,   337,  -984,  -984,
     924,   925,   926,  -984,    90,  -984,  -984,  -984,  -984,  -984,
     927,   599,   930,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,   -65,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,   803,   803,
     803,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,   -20,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,   520,  -984,   667,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,   -19,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,    53,  -984,   913,   889,
     931,  -984,  -984,  -984,  -984,  -984,   928,  -984,  -984,   929,
    -984,  -984,  -984,  -984,   932,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,    59,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,    79,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
      84,  -984,  -984,   943,   -97,   933,   935,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,   101,
    -984,  -984,  -984,   -42,  -984,  -984,  -984,  -984,     8,  -984,
    -984,  -984,   502,  -984,    15,  -984,  -984,  -984,   959,   960,
     961,  -984,   435,  -984,   710,  -984,   337,   938,   939,   940,
     378,  -984,  -984,   599,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,   120,  -984,  -984,  -984,   378,  -984
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -984,  -984,  -984,  -150,  -303,  -983,  -609,  -984,  -984,   937,
    -984,  -984,  -984,  -984,   764,  -984,  -984,  -984,    21,  -984,
      22,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,   949,  -984,
    -984,  -984,  -984,  -984,  -984,   540,  -984,  -984,  -984,  -984,
     765,  -984,  -984,  -984,  -984,    31,  -984,  -984,  -984,  -984,
    -984,  -234,  -984,  -984,  -984,   529,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -196,  -984,  -984,  -984,  -193,
    -984,  -984,  -984,   703,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -176,  -984,  -984,  -984,  -984,  -984,  -181,  -984,
     617,  -984,  -984,  -984,   -75,  -984,  -984,  -984,  -984,  -984,
     588,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -120,  -984,
    -984,  -984,  -984,  -984,  -984,   585,  -984,  -984,  -984,  -984,
    -984,   934,  -984,  -984,  -984,  -984,   467,  -984,  -984,  -984,
    -984,  -984,  -140,  -984,  -984,  -984,   548,  -984,  -984,  -984,
    -984,  -121,  -984,  -984,  -984,   778,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -112,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,   642,  -984,  -984,  -984,  -984,
    -984,   766,  -984,  -984,  -984,  -984,   996,  -984,  -984,  -984,
    -984,   775,  -984,  -984,  -984,  -984,   945,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,    33,  -984,  -984,  -984,    34,  -984,  -984,  -984,
    -984,  -984,  1023,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,   936,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -124
static const yytype_int16 yytable[] =
{
     824,   825,   585,   586,   587,   379,    79,   225,  1034,   674,
     823,   282,   675,   109,   676,   379,  1062,   677,    70,   471,
     464,   464,  1048,  1049,  1050,   289,    80,    81,   295,   109,
     389,   350,    82,   351,   226,   352,   282,    47,    48,   215,
    1000,    71,   227,    49,  1001,   389,  1002,   353,    72,  1076,
    1003,   758,   759,  1077,   228,   229,   513,   230,   231,   232,
      50,   215,   354,  1103,   380,  1204,  1205,  1206,   487,    83,
      84,   552,   110,   472,   380,    85,    86,    54,   473,   233,
     474,  1035,    87,    88,    89,   355,   567,   356,   110,   514,
      56,  1010,   357,  1078,   640,   641,   289,  1079,    60,   762,
     763,   647,   358,  1228,   315,   651,   115,    64,    90,    91,
     656,   116,   117,   659,    73,   828,   829,   118,   316,   317,
     823,   290,   318,   669,   670,   119,   390,   359,   381,   552,
     515,   120,   216,   681,   121,   122,   684,   685,   381,   475,
     123,   390,   488,   465,   465,   124,   125,   244,   126,   127,
     128,   360,   129,   391,   216,  1010,   217,   494,  1202,   130,
     296,    65,  1203,   131,   132,   319,   487,   553,   391,    67,
     245,   361,   133,   495,   567,    68,  -123,   106,   217,   516,
     107,   134,   568,   320,   321,   322,   323,  1011,   496,   135,
     324,   136,   290,   137,   325,   138,  1104,   139,   140,  1063,
     326,  -123,   246,  1207,  1211,   297,  1105,  1208,  1212,   247,
     141,   327,   328,   471,   108,   142,   143,   144,   497,   145,
     146,   147,   362,   329,   148,   553,   743,   283,   631,   313,
     530,   248,   445,   489,   561,   249,   387,   466,   466,   482,
     488,   299,   709,   250,   702,   330,   251,   252,   446,   363,
     149,  1011,   283,   498,   627,   532,   150,   151,   152,   153,
     154,   114,   485,   447,   212,   213,   214,   472,   637,   445,
     568,   222,   473,   499,   474,   513,  1213,  1012,   253,   734,
    1214,   331,  1221,   223,   554,   446,  1222,   224,   155,   500,
     281,   717,   298,   448,   811,   254,   255,   294,   815,   569,
     447,   818,  1223,   570,  1013,   822,  1224,  1225,   514,   783,
     559,  1226,   156,   157,  1186,   158,   159,   160,   301,   565,
     256,   161,   302,   303,  1232,   304,   162,   611,  1233,   443,
     448,   489,    70,   475,   305,   244,   306,   307,   257,   258,
     259,  1012,   554,  1257,   308,   309,   563,  1258,   449,   515,
     310,   311,   772,   501,   576,    71,   450,   451,   245,   312,
     386,   396,    72,   397,   398,   260,   261,   115,  1013,   399,
     550,   400,   116,   117,   502,   401,   402,   452,   118,   403,
     728,   404,   577,   405,   406,   449,   119,   569,   407,   408,
     246,   570,   120,   450,   451,   121,   122,   247,   516,   578,
     409,   123,   410,   411,   412,  1170,   124,   125,   413,   126,
     127,   128,   414,   129,   452,   415,   416,  1247,   417,   248,
     130,   418,   419,   249,   131,   132,   420,   421,    73,   423,
     425,   250,   426,   133,   251,   252,   427,   428,   579,  1115,
     429,   350,   134,   351,  1248,   352,  1249,   430,   431,   453,
     135,   432,   136,  1116,   137,   698,   138,   353,   139,   140,
    1117,   433,   434,   435,   436,   437,   253,  1171,   438,   439,
     440,   141,   354,   494,  1118,   441,   142,   143,   144,   442,
     145,   146,   147,   254,   255,   148,   453,   483,   484,   495,
     522,  1250,   523,  1172,   580,   355,   524,   356,   525,   526,
    1173,  1119,   357,  1120,   496,   527,   528,   529,   256,  1174,
     533,   149,   358,   534,   535,  1082,   536,   150,   151,   152,
     153,   154,   537,   538,   539,   540,   257,   258,   259,  1121,
     541,   542,   543,   544,   497,  1083,  1175,   359,  1176,  1177,
    1251,  1252,   545,   546,  1084,   547,   548,   549,   560,   155,
     564,   581,  1178,   260,   261,   582,   583,   584,   588,  1179,
     589,   360,  1122,   590,  1123,   591,   592,   593,   875,   498,
     594,  1085,   595,   156,   157,  1229,   158,   159,   160,   596,
     597,   361,   161,  1124,   599,   633,   613,   162,   600,   499,
     601,   602,   639,   603,   584,   604,  1253,   605,  1125,   606,
    1086,  1087,   607,  1126,   634,   500,   608,  1127,  1088,   609,
     610,   614,  1128,   642,   615,  1129,   616,   617,   618,   619,
    1130,   792,   793,   794,   795,   796,   797,   798,   621,   622,
     623,   624,   362,  1089,  1131,   625,   626,     2,     3,  1132,
     629,     4,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1090,
    1133,     5,   630,   635,     6,     7,   636,  1134,   315,   363,
       8,   643,   644,   645,   646,   648,   649,  1189,   650,   501,
     652,     9,   316,   317,    10,    11,   318,   876,   877,   878,
     653,   879,   880,   654,   881,   882,   655,   883,   657,   884,
     502,   658,   885,   660,   661,   886,   887,   888,    12,   889,
     662,   663,   664,    13,   890,   665,   666,  1091,   891,   892,
     893,    14,   667,   668,   671,   899,   672,   673,   894,   319,
     678,   679,   225,   895,   680,   682,   688,   683,   686,  1190,
     687,   690,    15,    16,   711,   689,   704,   320,   321,   322,
     323,   712,   691,   693,   324,   736,   713,   739,   325,   226,
      17,   694,   695,   696,   326,  1191,   697,   227,  1140,   700,
     701,   705,  1192,   706,   708,   327,   328,    18,   714,   228,
     229,  1193,   230,   231,   232,   715,   716,   329,   720,   719,
      19,    20,   737,   721,   723,   738,   724,   745,   725,   730,
     727,   731,   747,   732,   233,   733,   740,    21,  1194,   330,
    1195,  1196,   741,   742,   746,   744,   748,   749,   750,   751,
      22,   752,   753,   754,  1197,   755,   756,   757,   766,    23,
     767,  1198,   774,    24,   900,   901,   902,    79,   903,   904,
     768,   905,   906,   769,   907,   331,   908,   770,   775,   909,
     777,   778,   910,   911,   912,   776,   913,    80,    81,   779,
     780,   914,   785,    82,   782,   915,   916,   917,   786,   787,
     809,   788,   789,   790,   791,   918,   801,  1141,  1142,  1143,
     919,  1144,  1145,   802,  1146,  1147,   803,  1148,   804,  1149,
     810,   805,  1150,   806,   807,  1151,  1152,  1153,   812,  1154,
      83,    84,   808,   813,  1155,   814,    85,    86,  1156,  1157,
    1158,   816,   817,    87,    88,    89,   819,   820,  1159,   821,
     823,   826,   827,  1160,   830,   832,   837,   831,   833,   835,
     834,   836,   946,   838,   841,   844,   839,   840,   842,    90,
      91,   845,   843,   846,   847,   848,   849,   850,   851,   852,
     853,   942,   854,   855,   945,   856,   857,   858,   859,   860,
     861,   862,   863,   864,   865,   866,   867,   868,   869,   870,
     871,   872,   873,   874,   898,   922,   923,   924,   925,   926,
     927,   928,   929,   930,   931,   932,   943,   933,   934,   935,
     936,   937,   938,   939,   940,   941,   947,   948,   949,   944,
     950,   951,   952,   954,   953,   955,   957,   960,   956,   961,
     962,   963,   964,   965,   966,   968,   969,   970,   971,   972,
     973,  1007,   974,   967,   975,   976,   977,  1006,  1020,  1022,
    1215,   978,  1167,   300,  1259,  1168,   551,  1234,  1242,  1241,
     718,   979,   729,  1237,  1216,   612,   980,   981,   784,   982,
     983,   984,   699,   985,   986,  1187,   987,   988,   989,   562,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1004,  1005,  1008,  1009,  1019,  1227,  1023,  1031,  1021,  1032,
    1033,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,
    1047,  1053,  1054,  1055,  1056,  1057,  1058,  1238,  1239,  1240,
    1059,  1060,  1236,  1256,   710,  1061,  1235,  1066,  1067,  1068,
    1069,  1070,   735,   773,  1071,  1243,  1072,   388,   444,   703,
    1073,  1209,  1210,  1074,  1075,   314,     0,     0,     0,     0,
       0,  1080,  1081,  1094,  1095,  1096,  1097,  1098,  1099,  1100,
    1101,  1102,  1108,  1111,  1112,  1113,  1109,  1114,  1137,  1138,
    1139,  1163,   628,  1164,  1165,  1166,  1169,  1182,   632,     0,
    1188,  1183,  1184,  1201,  1217,   486,  1218,  1219,  1231,  1230,
    1220,  1244,  1245,  1246,     0,     0,     0,   638,     0,     0,
     531,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   566
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-984)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     609,   610,   305,   306,   307,     1,     1,     1,    50,   206,
     107,     1,   209,     1,   206,     1,     8,   209,     1,     1,
       1,     1,     9,    10,    11,     1,    21,    22,   223,     1,
       1,     1,    27,     3,    28,     5,     1,   223,   224,     1,
     223,    24,    36,   225,   227,     1,   223,    17,    31,   223,
     227,   195,   196,   227,    48,    49,     1,    51,    52,    53,
     225,     1,    32,    48,    60,  1048,  1049,  1050,     1,    64,
      65,     1,    60,    55,    60,    70,    71,   225,    60,    73,
      62,   123,    77,    78,    79,    55,     1,    57,    60,    34,
     225,     1,    62,   223,   397,   398,     1,   227,   225,   195,
     196,   404,    72,   200,     1,   408,     1,   225,   103,   104,
     413,     6,     7,   416,    97,   170,   171,    12,    15,    16,
     107,    97,    19,   426,   427,    20,    97,    97,   124,     1,
      75,    26,    94,   436,    29,    30,   439,   440,   124,   121,
      35,    97,    75,   124,   124,    40,    41,     1,    43,    44,
      45,   121,    47,   124,    94,     1,   118,     1,   223,    54,
     226,   225,   227,    58,    59,    62,     1,    97,   124,   225,
      24,   141,    67,    17,     1,   225,   166,   225,   118,   124,
     225,    76,    97,    80,    81,    82,    83,    97,    32,    84,
      87,    86,    97,    88,    91,    90,   181,    92,    93,   191,
      97,   166,    56,   223,   223,   226,   191,   227,   227,    63,
     105,   108,   109,     1,   225,   110,   111,   112,    62,   114,
     115,   116,   192,   120,   119,    97,   529,   217,   224,   224,
     224,    85,     1,   166,   224,    89,   224,   218,   218,   223,
      75,   224,   224,    97,   224,   142,   100,   101,    17,   219,
     145,    97,   217,    97,   224,   223,   151,   152,   153,   154,
     155,   225,   224,    32,   225,   225,   225,    55,   224,     1,
      97,   225,    60,   117,    62,     1,   223,   187,   132,   224,
     227,   178,   223,   225,   214,    17,   227,   225,   183,   133,
     225,   224,   226,    62,   597,   149,   150,   225,   601,   214,
      32,   604,   223,   218,   214,   608,   227,   223,    34,   224,
     223,   227,   207,   208,   224,   210,   211,   212,   226,   224,
     174,   216,   226,   226,   223,   226,   221,   224,   227,   224,
      62,   166,     1,   121,   226,     1,   226,   226,   192,   193,
     194,   187,   214,   223,   226,   226,   166,   227,   117,    75,
     226,   226,   224,   197,   122,    24,   125,   126,    24,   226,
     226,   226,    31,   226,   226,   219,   220,     1,   214,   226,
     224,   226,     6,     7,   218,   226,   226,   146,    12,   226,
     224,   226,   122,   226,   226,   117,    20,   214,   226,   226,
      56,   218,    26,   125,   126,    29,    30,    63,   124,   122,
     226,    35,   226,   226,   226,    68,    40,    41,   226,    43,
      44,    45,   226,    47,   146,   226,   226,    39,   226,    85,
      54,   226,   226,    89,    58,    59,   226,   226,    97,   226,
     226,    97,   226,    67,   100,   101,   226,   226,   223,     4,
     226,     1,    76,     3,    66,     5,    68,   226,   226,   218,
      84,   226,    86,    18,    88,   224,    90,    17,    92,    93,
      25,   226,   226,   226,   226,   226,   132,   130,   226,   226,
     226,   105,    32,     1,    39,   226,   110,   111,   112,   226,
     114,   115,   116,   149,   150,   119,   218,   226,   226,    17,
     226,   113,   226,   156,   107,    55,   226,    57,   226,   226,
     163,    66,    62,    68,    32,   226,   226,   226,   174,   172,
     226,   145,    72,   226,   226,    13,   226,   151,   152,   153,
     154,   155,   226,   226,   226,   226,   192,   193,   194,    94,
     226,   226,   226,   226,    62,    33,   199,    97,   201,   202,
     162,   163,   226,   226,    42,   226,   226,   226,   226,   183,
     226,   107,   215,   219,   220,   206,   107,   107,   107,   222,
     107,   121,   127,   107,   129,   206,   206,   223,    48,    97,
     223,    69,   226,   207,   208,  1184,   210,   211,   212,   226,
     226,   141,   216,   148,   226,   122,   223,   221,   226,   117,
     226,   226,   206,   226,   107,   226,   218,   226,   163,   226,
      98,    99,   226,   168,   223,   133,   226,   172,   106,   226,
     226,   226,   177,   107,   226,   180,   226,   226,   226,   226,
     185,   134,   135,   136,   137,   138,   139,   140,   226,   226,
     226,   226,   192,   131,   199,   226,   226,     0,     1,   204,
     226,     4,   792,   793,   794,   795,   796,   797,   798,   147,
     215,    14,   226,   226,    17,    18,   226,   222,     1,   219,
      23,   206,   107,   122,   206,   206,   107,    68,   107,   197,
     107,    34,    15,    16,    37,    38,    19,   157,   158,   159,
     206,   161,   162,   206,   164,   165,   206,   167,   107,   169,
     218,   107,   172,   107,   107,   175,   176,   177,    61,   179,
     107,   107,   206,    66,   184,   226,   206,   205,   188,   189,
     190,    74,   226,   206,   206,    48,   206,   206,   198,    62,
     206,   206,     1,   203,   122,   206,   223,   206,   206,   130,
     206,   226,    95,    96,   122,   223,   223,    80,    81,    82,
      83,   122,   226,   226,    87,   206,   223,   122,    91,    28,
     113,   226,   226,   226,    97,   156,   226,    36,    48,   226,
     226,   226,   163,   226,   226,   108,   109,   130,   223,    48,
      49,   172,    51,    52,    53,   226,   226,   120,   226,   223,
     143,   144,   206,   226,   226,   206,   226,   122,   226,   223,
     226,   226,   122,   226,    73,   226,   206,   160,   199,   142,
     201,   202,   206,   206,   206,   223,   107,   107,   122,   122,
     173,   122,   122,   122,   215,   122,   107,   122,   122,   182,
     122,   222,   206,   186,   157,   158,   159,     1,   161,   162,
     223,   164,   165,   223,   167,   178,   169,   226,   223,   172,
     122,   223,   175,   176,   177,   225,   179,    21,    22,   223,
     226,   184,   223,    27,   226,   188,   189,   190,   223,   223,
     107,   223,   223,   223,   223,   198,   223,   157,   158,   159,
     203,   161,   162,   223,   164,   165,   223,   167,   223,   169,
     107,   223,   172,   223,   223,   175,   176,   177,   226,   179,
      64,    65,   223,   107,   184,   107,    70,    71,   188,   189,
     190,   107,   107,    77,    78,    79,   122,   107,   198,   107,
     107,   223,   122,   203,   122,   122,   107,   206,   122,   122,
     226,   122,   107,   122,   223,   223,   122,   122,   122,   103,
     104,   223,   122,   122,   122,   223,   223,   223,   223,   223,
     223,   122,   223,   223,   122,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   206,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   122,   122,   122,   226,
     223,   122,   122,   122,   223,   122,   107,   223,   226,   223,
     223,   122,   122,   223,   122,   226,   122,   122,   122,   226,
     122,   226,   223,   206,   122,   122,   122,   122,   122,   122,
     107,   223,  1001,    74,  1258,  1003,   262,  1203,  1224,  1222,
     490,   223,   503,  1214,  1109,   332,   223,   223,   571,   223,
     223,   223,   454,   223,   223,  1014,   223,   223,   223,   284,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   122,   223,   223,   226,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   128,   128,   128,
     223,   223,  1212,  1233,   477,   223,  1208,   223,   223,   223,
     223,   223,   517,   555,   223,  1226,   223,   111,   163,   467,
     223,  1077,  1079,   223,   223,    92,    -1,    -1,    -1,    -1,
      -1,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   213,   223,   223,   223,   227,   223,   223,   223,
     223,   223,   364,   223,   223,   223,   223,   223,   382,    -1,
     223,   226,   226,   223,   223,   218,   228,   228,   223,   226,
     228,   223,   223,   223,    -1,    -1,    -1,   392,    -1,    -1,
     234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   291
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   230,     0,     1,     4,    14,    17,    18,    23,    34,
      37,    38,    61,    66,    74,    95,    96,   113,   130,   143,
     144,   160,   173,   182,   186,   231,   236,   241,   265,   271,
     277,   291,   309,   332,   346,   361,   368,   372,   382,   391,
     411,   417,   423,   427,   433,   489,   504,   223,   224,   225,
     225,   310,   392,   418,   225,   428,   225,   347,   412,   333,
     225,   272,   292,   362,   225,   225,   383,   225,   225,   373,
       1,    24,    31,    97,   266,   267,   268,   269,   270,     1,
      21,    22,    27,    64,    65,    70,    71,    77,    78,    79,
     103,   104,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   225,   225,   225,     1,
      60,   424,   425,   426,   225,     1,     6,     7,    12,    20,
      26,    29,    30,    35,    40,    41,    43,    44,    45,    47,
      54,    58,    59,    67,    76,    84,    86,    88,    90,    92,
      93,   105,   110,   111,   112,   114,   115,   116,   119,   145,
     151,   152,   153,   154,   155,   183,   207,   208,   210,   211,
     212,   216,   221,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   482,   486,
     487,   488,   225,   225,   225,     1,    94,   118,   237,   238,
     239,   240,   225,   225,   225,     1,    28,    36,    48,    49,
      51,    52,    53,    73,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,     1,    24,    56,    63,    85,    89,
      97,   100,   101,   132,   149,   150,   174,   192,   193,   194,
     219,   220,   242,   243,   244,   245,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   225,     1,   217,   278,   279,   280,   281,   282,     1,
      97,   369,   370,   371,   225,   223,   226,   226,   226,   224,
     267,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   224,   491,     1,    15,    16,    19,    62,
      80,    81,    82,    83,    87,    91,    97,   108,   109,   120,
     142,   178,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
       1,     3,     5,    17,    32,    55,    57,    62,    72,    97,
     121,   141,   192,   219,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   406,   407,   408,   409,   410,     1,
      60,   124,   419,   420,   421,   422,   226,   224,   425,     1,
      97,   124,   429,   430,   431,   432,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   483,   226,   479,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   224,   435,     1,    17,    32,    62,   117,
     125,   126,   146,   218,   348,   349,   350,   351,   352,   353,
     354,   358,   359,   360,     1,   124,   218,   413,   414,   415,
     416,     1,    55,    60,    62,   121,   334,   338,   339,   340,
     344,   345,   223,   226,   226,   224,   238,     1,    75,   166,
     273,   274,   275,   276,     1,    17,    32,    62,    97,   117,
     133,   197,   218,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   305,     1,    34,    75,   124,   363,   364,   365,
     366,   367,   226,   226,   226,   226,   226,   226,   226,   226,
     224,   506,   223,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     224,   243,     1,    97,   214,   384,   385,   386,   387,   223,
     226,   224,   279,   166,   226,   224,   370,     1,    97,   214,
     218,   374,   375,   376,   377,   378,   122,   122,   122,   223,
     107,   107,   206,   107,   107,   233,   233,   233,   107,   107,
     107,   206,   206,   223,   223,   226,   226,   226,   329,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   224,   312,   223,   226,   226,   226,   226,   226,   226,
     403,   226,   226,   226,   226,   226,   226,   224,   394,   226,
     226,   224,   420,   122,   223,   226,   226,   224,   430,   206,
     233,   233,   107,   206,   107,   122,   206,   233,   206,   107,
     107,   233,   107,   206,   206,   206,   233,   107,   107,   233,
     107,   107,   107,   107,   206,   226,   206,   226,   206,   233,
     233,   206,   206,   206,   206,   209,   206,   209,   206,   206,
     122,   233,   206,   206,   233,   233,   206,   206,   223,   223,
     226,   226,   355,   226,   226,   226,   226,   226,   224,   349,
     226,   226,   224,   414,   223,   226,   226,   335,   226,   224,
     339,   122,   122,   223,   223,   226,   226,   224,   274,   223,
     226,   226,   306,   226,   226,   226,   302,   226,   224,   294,
     223,   226,   226,   226,   224,   364,   206,   206,   206,   122,
     206,   206,   206,   233,   223,   122,   206,   122,   107,   107,
     122,   122,   122,   122,   122,   122,   107,   122,   195,   196,
     246,   247,   195,   196,   248,   249,   122,   122,   223,   223,
     226,   388,   224,   385,   206,   223,   225,   122,   223,   223,
     226,   379,   226,   224,   375,   223,   223,   223,   223,   223,
     223,   223,   134,   135,   136,   137,   138,   139,   140,   232,
     233,   223,   223,   223,   223,   223,   223,   223,   223,   107,
     107,   233,   226,   107,   107,   233,   107,   107,   233,   122,
     107,   107,   233,   107,   235,   235,   223,   122,   170,   171,
     122,   206,   122,   122,   226,   122,   122,   107,   122,   122,
     122,   223,   122,   122,   223,   223,   122,   122,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,    48,   157,   158,   159,   161,
     162,   164,   165,   167,   169,   172,   175,   176,   177,   179,
     184,   188,   189,   190,   198,   203,   484,   485,   223,    48,
     157,   158,   159,   161,   162,   164,   165,   167,   169,   172,
     175,   176,   177,   179,   184,   188,   189,   190,   198,   203,
     480,   481,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   122,   206,   226,   122,   107,   122,   122,   122,
     223,   122,   122,   223,   122,   122,   226,   107,   342,   343,
     223,   223,   223,   122,   122,   223,   122,   206,   226,   122,
     122,   122,   226,   122,   223,   122,   122,   122,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   227,   223,   227,   223,   223,   122,   226,   223,   223,
       1,    97,   187,   214,   283,   284,   285,   286,   287,   223,
     122,   226,   122,   223,   232,   232,   232,   232,   232,   232,
     232,   223,   223,   223,    50,   123,   330,   331,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,     9,    10,
      11,   234,   235,   223,   223,   223,   223,   223,   223,   223,
     223,   223,     8,   191,   404,   405,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   227,   223,   227,
     223,   223,    13,    33,    42,    69,    98,    99,   106,   131,
     147,   205,   356,   357,   223,   223,   223,   223,   223,   223,
     223,   223,   223,    48,   181,   191,   336,   337,   213,   227,
     341,   223,   223,   223,   223,     4,    18,    25,    39,    66,
      68,    94,   127,   129,   148,   163,   168,   172,   177,   180,
     185,   199,   204,   215,   222,   307,   308,   223,   223,   223,
      48,   157,   158,   159,   161,   162,   164,   165,   167,   169,
     172,   175,   176,   177,   179,   184,   188,   189,   190,   198,
     203,   303,   304,   223,   223,   223,   223,   247,   249,   223,
      68,   130,   156,   163,   172,   199,   201,   202,   215,   222,
     389,   390,   223,   226,   226,   288,   224,   284,   223,    68,
     130,   156,   163,   172,   199,   201,   202,   215,   222,   380,
     381,   223,   223,   227,   234,   234,   234,   223,   227,   485,
     481,   223,   227,   223,   227,   107,   343,   223,   228,   228,
     228,   223,   227,   223,   227,   223,   227,   122,   200,   235,
     226,   223,   223,   227,   331,   405,   357,   337,   128,   128,
     128,   308,   304,   390,   223,   223,   223,    39,    66,    68,
     113,   162,   163,   218,   289,   290,   381,   223,   227,   290
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 27:
/* Line 1787 of yacc.c  */
#line 395 "conf_parser.y"
    { (yyval.number) = 0; }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 397 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number);
		}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 401 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);
		}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 405 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 409 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 413 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 417 "conf_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 7 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 421 "conf_parser.y"
    {
                        (yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[(3) - (3)].number);
                }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 425 "conf_parser.y"
    {
                        (yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 365 + (yyvsp[(3) - (3)].number);
                }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 430 "conf_parser.y"
    { (yyval.number) = 0; }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 431 "conf_parser.y"
    { (yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 432 "conf_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 433 "conf_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 + (yyvsp[(3) - (3)].number); }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 434 "conf_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 * 1024 + (yyvsp[(3) - (3)].number); }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 448 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 454 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 480 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.client_ctx)
    SSL_CTX_clear_options(ServerInfo.client_ctx, SSL_OP_NO_SSLv3);
#endif
}
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 486 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.client_ctx)
    SSL_CTX_clear_options(ServerInfo.client_ctx, SSL_OP_NO_TLSv1);
#endif
}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 495 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.server_ctx)
    SSL_CTX_clear_options(ServerInfo.server_ctx, SSL_OP_NO_SSLv3);
#endif
}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 501 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.server_ctx)
    SSL_CTX_clear_options(ServerInfo.server_ctx, SSL_OP_NO_TLSv1);
#endif
}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 509 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.server_ctx) 
  {
    if (!ServerInfo.rsa_private_key_file)
    {
      conf_error_report("No rsa_private_key_file specified, SSL disabled");
      break;
    }

    if (SSL_CTX_use_certificate_file(ServerInfo.server_ctx, yylval.string,
                                     SSL_FILETYPE_PEM) <= 0 ||
        SSL_CTX_use_certificate_file(ServerInfo.client_ctx, yylval.string,
                                     SSL_FILETYPE_PEM) <= 0)
    {
      report_crypto_errors();
      conf_error_report("Could not open/read certificate file");
      break;
    }

    if (SSL_CTX_use_PrivateKey_file(ServerInfo.server_ctx, ServerInfo.rsa_private_key_file,
                                    SSL_FILETYPE_PEM) <= 0 ||
        SSL_CTX_use_PrivateKey_file(ServerInfo.client_ctx, ServerInfo.rsa_private_key_file,
                                    SSL_FILETYPE_PEM) <= 0)
    {
      report_crypto_errors();
      conf_error_report("Could not read RSA private key");
      break;
    }

    if (!SSL_CTX_check_private_key(ServerInfo.server_ctx) ||
        !SSL_CTX_check_private_key(ServerInfo.client_ctx))
    {
      report_crypto_errors();
      conf_error_report("Could not read RSA private key");
      break;
    }
  }
#endif
}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 551 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  BIO *file = NULL;

  if (conf_parser_ctx.pass != 1)
    break;

  if (ServerInfo.rsa_private_key)
  {
    RSA_free(ServerInfo.rsa_private_key);
    ServerInfo.rsa_private_key = NULL;
  }

  if (ServerInfo.rsa_private_key_file)
  {
    MyFree(ServerInfo.rsa_private_key_file);
    ServerInfo.rsa_private_key_file = NULL;
  }

  ServerInfo.rsa_private_key_file = xstrdup(yylval.string);

  if ((file = BIO_new_file(yylval.string, "r")) == NULL)
  {
    conf_error_report("File open failed, ignoring");
    break;
  }

  ServerInfo.rsa_private_key = PEM_read_bio_RSAPrivateKey(file, NULL, 0, NULL);

  BIO_set_close(file, BIO_CLOSE);
  BIO_free(file);

  if (ServerInfo.rsa_private_key == NULL)
  {
    conf_error_report("Couldn't extract key, ignoring");
    break;
  }

  if (!RSA_check_key(ServerInfo.rsa_private_key))
  {
    RSA_free(ServerInfo.rsa_private_key);
    ServerInfo.rsa_private_key = NULL;

    conf_error_report("Invalid key, ignoring");
    break;
  }

  /* require 2048 bit (256 byte) key */
  if (RSA_size(ServerInfo.rsa_private_key) != 256)
  {
    RSA_free(ServerInfo.rsa_private_key);
    ServerInfo.rsa_private_key = NULL;

    conf_error_report("Not a 2048 bit key, ignoring");
  }
#endif
}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 610 "conf_parser.y"
    {
/* TBD - XXX: error reporting */
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.server_ctx)
  {
    BIO *file = BIO_new_file(yylval.string, "r");

    if (file)
    {
      DH *dh = PEM_read_bio_DHparams(file, NULL, NULL, NULL);

      BIO_free(file);

      if (dh)
      {
        if (DH_size(dh) < 128)
          conf_error_report("Ignoring serverinfo::ssl_dh_param_file -- need at least a 1024 bit DH prime size");
        else
          SSL_CTX_set_tmp_dh(ServerInfo.server_ctx, dh);

        DH_free(dh);
      }
    }
  }
#endif
}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 638 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2 && ServerInfo.server_ctx)
    SSL_CTX_set_cipher_list(ServerInfo.server_ctx, yylval.string);
#endif
}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 646 "conf_parser.y"
    {
  /* this isn't rehashable */
  if (conf_parser_ctx.pass == 2 && !ServerInfo.name)
  {
    if (valid_servname(yylval.string))
      ServerInfo.name = xstrdup(yylval.string);
    else
    {
      conf_error_report("Ignoring serverinfo::name -- invalid name. Aborting.");
      exit(0);
    }
  }
}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 661 "conf_parser.y"
    {
  /* this isn't rehashable */
  if (conf_parser_ctx.pass == 2 && !ServerInfo.sid)
  {
    if (valid_sid(yylval.string))
      ServerInfo.sid = xstrdup(yylval.string);
    else
    {
      conf_error_report("Ignoring serverinfo::sid -- invalid SID. Aborting.");
      exit(0);
    }
  }
}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 676 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ServerInfo.description);
    ServerInfo.description = xstrdup(yylval.string);
  }
}
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 685 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    char *p;

    if ((p = strchr(yylval.string, ' ')) != NULL)
      p = '\0';

    MyFree(ServerInfo.network_name);
    ServerInfo.network_name = xstrdup(yylval.string);
  }
}
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 699 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ServerInfo.network_desc);
  ServerInfo.network_desc = xstrdup(yylval.string);
}
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 708 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2 && *yylval.string != '*')
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(LOG_TYPE_IRCD, "Invalid netmask for server vhost(%s)", yylval.string);
    else
    {
      assert(res != NULL);

      memcpy(&ServerInfo.ip, res->ai_addr, res->ai_addrlen);
      ServerInfo.ip.ss.ss_family = res->ai_family;
      ServerInfo.ip.ss_len = res->ai_addrlen;
      freeaddrinfo(res);

      ServerInfo.specific_ipv4_vhost = 1;
    }
  }
}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 736 "conf_parser.y"
    {
#ifdef IPV6
  if (conf_parser_ctx.pass == 2 && *yylval.string != '*')
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(LOG_TYPE_IRCD, "Invalid netmask for server vhost6(%s)", yylval.string);
    else
    {
      assert(res != NULL);

      memcpy(&ServerInfo.ip6, res->ai_addr, res->ai_addrlen);
      ServerInfo.ip6.ss.ss_family = res->ai_family;
      ServerInfo.ip6.ss_len = res->ai_addrlen;
      freeaddrinfo(res);

      ServerInfo.specific_ipv6_vhost = 1;
    }
  }
#endif
}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 766 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[(3) - (4)].number) < MAXCLIENTS_MIN)
  {
    char buf[IRCD_BUFSIZE];

    snprintf(buf, sizeof(buf), "MAXCLIENTS too low, setting to %d", MAXCLIENTS_MIN);
    conf_error_report(buf);
    ServerInfo.max_clients = MAXCLIENTS_MIN;
  }
  else if ((yyvsp[(3) - (4)].number) > MAXCLIENTS_MAX)
  {
    char buf[IRCD_BUFSIZE];

    snprintf(buf, sizeof(buf), "MAXCLIENTS too high, setting to %d", MAXCLIENTS_MAX);
    conf_error_report(buf);
    ServerInfo.max_clients = MAXCLIENTS_MAX;
  }
  else
    ServerInfo.max_clients = (yyvsp[(3) - (4)].number);
}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 791 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[(3) - (4)].number) < 9)
  {
    conf_error_report("max_nick_length too low, setting to 9");
    ServerInfo.max_nick_length = 9;
  }
  else if ((yyvsp[(3) - (4)].number) > NICKLEN)
  {
    char buf[IRCD_BUFSIZE];

    snprintf(buf, sizeof(buf), "max_nick_length too high, setting to %d", NICKLEN);
    conf_error_report(buf);
    ServerInfo.max_nick_length = NICKLEN;
  }
  else
    ServerInfo.max_nick_length = (yyvsp[(3) - (4)].number);
}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 813 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[(3) - (4)].number) < 80)
  {
    conf_error_report("max_topic_length too low, setting to 80");
    ServerInfo.max_topic_length = 80;
  }
  else if ((yyvsp[(3) - (4)].number) > TOPICLEN)
  {
    char buf[IRCD_BUFSIZE];

    snprintf(buf, sizeof(buf), "max_topic_length too high, setting to %d", TOPICLEN);
    conf_error_report(buf);
    ServerInfo.max_topic_length = TOPICLEN;
  }
  else
    ServerInfo.max_topic_length = (yyvsp[(3) - (4)].number);
}
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 835 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ServerInfo.hub = yylval.number;
}
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 850 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(AdminInfo.name);
  AdminInfo.name = xstrdup(yylval.string);
}
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 859 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(AdminInfo.email);
  AdminInfo.email = xstrdup(yylval.string);
}
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 868 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(AdminInfo.description);
  AdminInfo.description = xstrdup(yylval.string);
}
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 880 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 884 "conf_parser.y"
    {
  dlink_node *ptr = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(ptr, block_state.mask.list.head)
    motd_add(ptr->data, block_state.file.buf);
}
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 901 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 907 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 922 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 928 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 932 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 948 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 956 "conf_parser.y"
    {
  block_state.size.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 959 "conf_parser.y"
    {
  block_state.size.value = 0;
}
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 964 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 971 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 975 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 979 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_GLINE;
}
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 983 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 987 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 991 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 995 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 1005 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 1012 "conf_parser.y"
    {
  dlink_node *ptr = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.name.buf[0])
    break;
#ifdef HAVE_LIBCRYPTO
  if (!block_state.file.buf[0] &&
      !block_state.rpass.buf[0])
    break;
#else
  if (!block_state.rpass.buf[0])
    break;
#endif

  DLINK_FOREACH(ptr, block_state.mask.list.head)
  {
    struct MaskItem *conf = NULL;
    struct split_nuh_item nuh;

    nuh.nuhmask  = ptr->data;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;
    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);
    split_nuh(&nuh);

    conf        = conf_make(CONF_OPER);
    conf->name  = xstrdup(block_state.name.buf);
    conf->user  = xstrdup(block_state.user.buf);
    conf->host  = xstrdup(block_state.host.buf);

    if (block_state.rpass.buf[0])
      conf->passwd = xstrdup(block_state.rpass.buf);

    conf->flags = block_state.flags.value;
    conf->modes = block_state.modes.value;
    conf->port  = block_state.port.value;
    conf->htype = parse_netmask(conf->host, &conf->addr, &conf->bits);

    conf_add_class_to_conf(conf, block_state.class.buf);

#ifdef HAVE_LIBCRYPTO
    if (block_state.file.buf[0])
    {
      BIO *file = NULL;
      RSA *pkey = NULL;

      if ((file = BIO_new_file(block_state.file.buf, "r")) == NULL)
      {
        conf_error_report("Ignoring rsa_public_key_file -- file doesn't exist");
        break;
      }

      if ((pkey = PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL)) == NULL)
        conf_error_report("Ignoring rsa_public_key_file -- Key invalid; check key syntax.");

      conf->rsa_public_key = pkey;
      BIO_set_close(file, BIO_CLOSE);
      BIO_free(file);
    }
#endif /* HAVE_LIBCRYPTO */
  }
}
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 1087 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 1093 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 1099 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 1105 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
}
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 1116 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
    break;

  case 163:
/* Line 1787 of yacc.c  */
#line 1122 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
    break;

  case 164:
/* Line 1787 of yacc.c  */
#line 1128 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 1135 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BOTS;
}
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 1139 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CCONN;
}
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 1143 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 1147 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEBUG;
}
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 1151 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FULL;
}
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 1155 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 1159 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SKILL;
}
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 1163 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_NCHANGE;
}
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 1167 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REJ;
}
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 1171 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_UNAUTH;
}
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 1175 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 1179 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_EXTERNAL;
}
    break;

  case 180:
/* Line 1787 of yacc.c  */
#line 1183 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 1187 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
    break;

  case 182:
/* Line 1787 of yacc.c  */
#line 1191 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 1195 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 1199 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 1203 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 1207 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 1211 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 1215 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 1221 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 1228 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 1232 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 1236 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 1240 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 1244 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 1248 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 1252 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_K;
}
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 1256 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 1260 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 1264 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 1268 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_X;
}
    break;

  case 204:
/* Line 1787 of yacc.c  */
#line 1272 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLINE;
}
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 1276 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
    break;

  case 206:
/* Line 1787 of yacc.c  */
#line 1280 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 1284 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 1288 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 1292 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALL;
}
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 1296 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
    break;

  case 211:
/* Line 1787 of yacc.c  */
#line 1300 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 1304 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 1308 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
    break;

  case 214:
/* Line 1787 of yacc.c  */
#line 1312 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
    break;

  case 215:
/* Line 1787 of yacc.c  */
#line 1316 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
    break;

  case 216:
/* Line 1787 of yacc.c  */
#line 1326 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 1)
    break;

  reset_block_state();

  block_state.ping_freq.value = DEFAULT_PINGFREQUENCY;
  block_state.con_freq.value  = DEFAULT_CONNECTFREQUENCY;
  block_state.max_total.value = MAXIMUM_LINKS_DEFAULT;
  block_state.max_sendq.value = DEFAULT_SENDQ;
  block_state.max_recvq.value = DEFAULT_RECVQ;
}
    break;

  case 217:
/* Line 1787 of yacc.c  */
#line 1338 "conf_parser.y"
    {
  struct ClassItem *class = NULL;

  if (conf_parser_ctx.pass != 1)
    break;

  if (!block_state.class.buf[0])
    break;

  if (!(class = class_find(block_state.class.buf, 0)))
    class = class_make();

  class->active = 1;
  MyFree(class->name);
  class->name = xstrdup(block_state.class.buf);
  class->ping_freq = block_state.ping_freq.value;
  class->max_perip = block_state.max_perip.value;
  class->con_freq = block_state.con_freq.value;
  class->max_total = block_state.max_total.value;
  class->max_global = block_state.max_global.value;
  class->max_local = block_state.max_local.value;
  class->max_ident = block_state.max_ident.value;
  class->max_sendq = block_state.max_sendq.value;
  class->max_recvq = block_state.max_recvq.value;

  if (block_state.min_idle.value > block_state.max_idle.value)
  {
    block_state.min_idle.value = 0;
    block_state.max_idle.value = 0;
    block_state.flags.value &= ~CLASS_FLAGS_FAKE_IDLE;
  }

  class->flags = block_state.flags.value;
  class->min_idle = block_state.min_idle.value;
  class->max_idle = block_state.max_idle.value;

  if (class->number_per_cidr && block_state.number_per_cidr.value)
    if ((class->cidr_bitlen_ipv4 && block_state.cidr_bitlen_ipv4.value) ||
        (class->cidr_bitlen_ipv6 && block_state.cidr_bitlen_ipv6.value))
      if ((class->cidr_bitlen_ipv4 != block_state.cidr_bitlen_ipv4.value) ||
          (class->cidr_bitlen_ipv6 != block_state.cidr_bitlen_ipv6.value))
        rebuild_cidr_list(class);

  class->cidr_bitlen_ipv4 = block_state.cidr_bitlen_ipv4.value;
  class->cidr_bitlen_ipv6 = block_state.cidr_bitlen_ipv6.value;
  class->number_per_cidr = block_state.number_per_cidr.value;
}
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 1404 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 1410 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 1416 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 1422 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 1428 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 1434 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 1440 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 1446 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 1452 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 1458 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[(3) - (4)].number) >= CLIENT_FLOOD_MIN && (yyvsp[(3) - (4)].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 1465 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[(3) - (4)].number) > 32 ? 32 : (yyvsp[(3) - (4)].number);
}
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 1471 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[(3) - (4)].number) > 128 ? 128 : (yyvsp[(3) - (4)].number);
}
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 1477 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 1483 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[(3) - (4)].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 1492 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[(3) - (4)].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 1501 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
    break;

  case 256:
/* Line 1787 of yacc.c  */
#line 1508 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 1512 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
    break;

  case 258:
/* Line 1787 of yacc.c  */
#line 1522 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 1528 "conf_parser.y"
    {
  block_state.flags.value = 0;
}
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 1534 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 1538 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 1542 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 1550 "conf_parser.y"
    { block_state.flags.value = 0; }
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 1555 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (block_state.flags.value & LISTENER_SSL)
#ifdef HAVE_LIBCRYPTO
      if (!ServerInfo.server_ctx)
#endif
      {
        conf_error_report("SSL not available - port closed");
	break;
      }
    add_listener((yyvsp[(1) - (1)].number), block_state.addr.buf, block_state.flags.value);
  }
}
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 1569 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    int i;

    if (block_state.flags.value & LISTENER_SSL)
#ifdef HAVE_LIBCRYPTO
      if (!ServerInfo.server_ctx)
#endif
      {
        conf_error_report("SSL not available - port closed");
	break;
      }

    for (i = (yyvsp[(1) - (3)].number); i <= (yyvsp[(3) - (3)].number); ++i)
      add_listener(i, block_state.addr.buf, block_state.flags.value);
  }
}
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 1589 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 1595 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 1604 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 1608 "conf_parser.y"
    {
  dlink_node *ptr = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  DLINK_FOREACH(ptr, block_state.mask.list.head)
  {
    struct MaskItem *conf = NULL;
    struct split_nuh_item nuh;

    nuh.nuhmask  = ptr->data;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;
    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);
    split_nuh(&nuh);

    conf        = conf_make(CONF_CLIENT);
    conf->user  = xstrdup(block_state.user.buf);
    conf->host  = xstrdup(block_state.host.buf);

    if (block_state.rpass.buf[0])
      conf->passwd = xstrdup(block_state.rpass.buf);
    if (block_state.name.buf[0])
      conf->name = xstrdup(block_state.name.buf);

    conf->flags = block_state.flags.value;
    conf->port  = block_state.port.value;

    conf_add_class_to_conf(conf, block_state.class.buf);
    add_conf_by_address(CONF_CLIENT, conf);
  }
}
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 1651 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 1657 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 1663 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 1669 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 1680 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
    break;

  case 303:
/* Line 1787 of yacc.c  */
#line 1687 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 1691 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 1695 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 1699 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 1703 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 1707 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 1711 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTGLINE;
}
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 1715 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 1719 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 1723 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 1729 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (strlen(yylval.string) <= HOSTLEN && valid_hostname(yylval.string))
  {
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
    block_state.flags.value |= CONF_FLAGS_SPOOF_IP;
  }
  else
    ilog(LOG_TYPE_IRCD, "Spoof either is too long or contains invalid characters. Ignoring it.");
}
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 1743 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 1752 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 1765 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 1772 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 1783 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 1789 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 326:
/* Line 1787 of yacc.c  */
#line 1795 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
    break;

  case 332:
/* Line 1787 of yacc.c  */
#line 1810 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
    break;

  case 333:
/* Line 1787 of yacc.c  */
#line 1825 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
    break;

  case 334:
/* Line 1787 of yacc.c  */
#line 1836 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_ULINE);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
  conf->user = xstrdup(block_state.user.buf);
  conf->host = xstrdup(block_state.host.buf);
}
    break;

  case 341:
/* Line 1787 of yacc.c  */
#line 1853 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 342:
/* Line 1787 of yacc.c  */
#line 1859 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;

    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);

    split_nuh(&nuh);
  }
}
    break;

  case 343:
/* Line 1787 of yacc.c  */
#line 1878 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
    break;

  case 347:
/* Line 1787 of yacc.c  */
#line 1885 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
    break;

  case 348:
/* Line 1787 of yacc.c  */
#line 1889 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
    break;

  case 349:
/* Line 1787 of yacc.c  */
#line 1893 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
    break;

  case 350:
/* Line 1787 of yacc.c  */
#line 1897 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
    break;

  case 351:
/* Line 1787 of yacc.c  */
#line 1901 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
    break;

  case 352:
/* Line 1787 of yacc.c  */
#line 1905 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
    break;

  case 353:
/* Line 1787 of yacc.c  */
#line 1909 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
    break;

  case 354:
/* Line 1787 of yacc.c  */
#line 1913 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
    break;

  case 355:
/* Line 1787 of yacc.c  */
#line 1917 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
    break;

  case 356:
/* Line 1787 of yacc.c  */
#line 1921 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
    break;

  case 357:
/* Line 1787 of yacc.c  */
#line 1930 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
    break;

  case 358:
/* Line 1787 of yacc.c  */
#line 1939 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
    break;

  case 364:
/* Line 1787 of yacc.c  */
#line 1954 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 365:
/* Line 1787 of yacc.c  */
#line 1960 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
    break;

  case 369:
/* Line 1787 of yacc.c  */
#line 1967 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
    break;

  case 370:
/* Line 1787 of yacc.c  */
#line 1971 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
    break;

  case 371:
/* Line 1787 of yacc.c  */
#line 1975 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
    break;

  case 372:
/* Line 1787 of yacc.c  */
#line 1979 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
    break;

  case 373:
/* Line 1787 of yacc.c  */
#line 1983 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
    break;

  case 374:
/* Line 1787 of yacc.c  */
#line 1987 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
    break;

  case 375:
/* Line 1787 of yacc.c  */
#line 1991 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
    break;

  case 376:
/* Line 1787 of yacc.c  */
#line 1995 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
    break;

  case 377:
/* Line 1787 of yacc.c  */
#line 1999 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
    break;

  case 378:
/* Line 1787 of yacc.c  */
#line 2003 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
    break;

  case 379:
/* Line 1787 of yacc.c  */
#line 2012 "conf_parser.y"
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.port.value = PORTNUM;
}
    break;

  case 380:
/* Line 1787 of yacc.c  */
#line 2020 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;
  struct addrinfo hints, *res;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.name.buf[0] ||
      !block_state.host.buf[0])
    break;

  if (!block_state.rpass.buf[0] ||
      !block_state.spass.buf[0])
    break;

  if (has_wildcards(block_state.name.buf) ||
      has_wildcards(block_state.host.buf))
    break;

  conf = conf_make(CONF_SERVER);
  conf->port = block_state.port.value;
  conf->flags = block_state.flags.value;
  conf->aftype = block_state.aftype.value;
  conf->host = xstrdup(block_state.host.buf);
  conf->name = xstrdup(block_state.name.buf);
  conf->passwd = xstrdup(block_state.rpass.buf);
  conf->spasswd = xstrdup(block_state.spass.buf);
  conf->cipher_list = xstrdup(block_state.ciph.buf);

  dlinkMoveList(&block_state.leaf.list, &conf->leaf_list);
  dlinkMoveList(&block_state.hub.list, &conf->hub_list);

  if (block_state.bind.buf[0])
  {
    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (getaddrinfo(block_state.bind.buf, NULL, &hints, &res))
      ilog(LOG_TYPE_IRCD, "Invalid netmask for server vhost(%s)", block_state.bind.buf);
    else
    {
      assert(res != NULL);

      memcpy(&conf->bind, res->ai_addr, res->ai_addrlen);
      conf->bind.ss.ss_family = res->ai_family;
      conf->bind.ss_len = res->ai_addrlen;
      freeaddrinfo(res);
    }
  }

  conf_add_class_to_conf(conf, block_state.class.buf);
  lookup_confhost(conf);
}
    break;

  case 397:
/* Line 1787 of yacc.c  */
#line 2086 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 398:
/* Line 1787 of yacc.c  */
#line 2092 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
    break;

  case 399:
/* Line 1787 of yacc.c  */
#line 2098 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
    break;

  case 400:
/* Line 1787 of yacc.c  */
#line 2104 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[(3) - (4)].string)[0] == ':')
    conf_error_report("Server passwords cannot begin with a colon");
  else if (strchr((yyvsp[(3) - (4)].string), ' ') != NULL)
    conf_error_report("Server passwords cannot contain spaces");
  else
    strlcpy(block_state.spass.buf, yylval.string, sizeof(block_state.spass.buf));
}
    break;

  case 401:
/* Line 1787 of yacc.c  */
#line 2117 "conf_parser.y"
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[(3) - (4)].string)[0] == ':')
    conf_error_report("Server passwords cannot begin with a colon");
  else if (strchr((yyvsp[(3) - (4)].string), ' ') != NULL)
    conf_error_report("Server passwords cannot contain spaces");
  else
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 402:
/* Line 1787 of yacc.c  */
#line 2130 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[(3) - (4)].number);
}
    break;

  case 403:
/* Line 1787 of yacc.c  */
#line 2136 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
    break;

  case 404:
/* Line 1787 of yacc.c  */
#line 2140 "conf_parser.y"
    {
#ifdef IPV6
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
#endif
}
    break;

  case 405:
/* Line 1787 of yacc.c  */
#line 2148 "conf_parser.y"
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
    break;

  case 409:
/* Line 1787 of yacc.c  */
#line 2154 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
    break;

  case 410:
/* Line 1787 of yacc.c  */
#line 2158 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
    break;

  case 411:
/* Line 1787 of yacc.c  */
#line 2164 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
    break;

  case 412:
/* Line 1787 of yacc.c  */
#line 2175 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
    break;

  case 413:
/* Line 1787 of yacc.c  */
#line 2181 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
    break;

  case 414:
/* Line 1787 of yacc.c  */
#line 2187 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
    break;

  case 415:
/* Line 1787 of yacc.c  */
#line 2193 "conf_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
    break;

  case 416:
/* Line 1787 of yacc.c  */
#line 2208 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 417:
/* Line 1787 of yacc.c  */
#line 2212 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.user.buf[0] ||
      !block_state.host.buf[0])
    break;

  conf = conf_make(CONF_KLINE);
  conf->user = xstrdup(block_state.user.buf);
  conf->host = xstrdup(block_state.host.buf);

  if (block_state.rpass.buf[0])
    conf->reason = xstrdup(block_state.rpass.buf);
  else
    conf->reason = xstrdup(CONF_NOREASON);
  add_conf_by_address(CONF_KLINE, conf);
}
    break;

  case 423:
/* Line 1787 of yacc.c  */
#line 2237 "conf_parser.y"
    {

  if (conf_parser_ctx.pass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;

    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);

    split_nuh(&nuh);
  }
}
    break;

  case 424:
/* Line 1787 of yacc.c  */
#line 2257 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 425:
/* Line 1787 of yacc.c  */
#line 2266 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 426:
/* Line 1787 of yacc.c  */
#line 2270 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.addr.buf[0])
    break;

  if (parse_netmask(block_state.addr.buf, NULL, NULL) != HM_HOST)
  {
    conf = conf_make(CONF_DLINE);
    conf->host = xstrdup(block_state.addr.buf);

    if (block_state.rpass.buf[0])
      conf->reason = xstrdup(block_state.rpass.buf);
    else
      conf->reason = xstrdup(CONF_NOREASON);
    add_conf_by_address(CONF_DLINE, conf);
  }
}
    break;

  case 432:
/* Line 1787 of yacc.c  */
#line 2296 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
    break;

  case 433:
/* Line 1787 of yacc.c  */
#line 2302 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 439:
/* Line 1787 of yacc.c  */
#line 2316 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.string[0] && parse_netmask(yylval.string, NULL, NULL) != HM_HOST)
    {
      struct MaskItem *conf = conf_make(CONF_EXEMPT);
      conf->host = xstrdup(yylval.string);

      add_conf_by_address(CONF_EXEMPT, conf);
    }
  }
}
    break;

  case 440:
/* Line 1787 of yacc.c  */
#line 2333 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
    break;

  case 441:
/* Line 1787 of yacc.c  */
#line 2337 "conf_parser.y"
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.name.buf[0])
    break;

  conf = conf_make(CONF_XLINE);
  conf->name = xstrdup(block_state.name.buf);

  if (block_state.rpass.buf[0])
    conf->reason = xstrdup(block_state.rpass.buf);
  else
    conf->reason = xstrdup(CONF_NOREASON);
}
    break;

  case 447:
/* Line 1787 of yacc.c  */
#line 2359 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
    break;

  case 448:
/* Line 1787 of yacc.c  */
#line 2365 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
    break;

  case 500:
/* Line 1787 of yacc.c  */
#line 2408 "conf_parser.y"
    {
  ConfigFileEntry.max_watch = (yyvsp[(3) - (4)].number);
}
    break;

  case 501:
/* Line 1787 of yacc.c  */
#line 2413 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 502:
/* Line 1787 of yacc.c  */
#line 2419 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigFileEntry.gline_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 503:
/* Line 1787 of yacc.c  */
#line 2425 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigFileEntry.gline_request_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 504:
/* Line 1787 of yacc.c  */
#line 2431 "conf_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = (yyvsp[(3) - (4)].number);
}
    break;

  case 505:
/* Line 1787 of yacc.c  */
#line 2436 "conf_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = (yyvsp[(3) - (4)].number);
}
    break;

  case 506:
/* Line 1787 of yacc.c  */
#line 2441 "conf_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 507:
/* Line 1787 of yacc.c  */
#line 2446 "conf_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = (yyvsp[(3) - (4)].number);
}
    break;

  case 508:
/* Line 1787 of yacc.c  */
#line 2451 "conf_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 509:
/* Line 1787 of yacc.c  */
#line 2456 "conf_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 510:
/* Line 1787 of yacc.c  */
#line 2461 "conf_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 511:
/* Line 1787 of yacc.c  */
#line 2466 "conf_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 512:
/* Line 1787 of yacc.c  */
#line 2471 "conf_parser.y"
    {
  ConfigFileEntry.max_nick_time = (yyvsp[(3) - (4)].number); 
}
    break;

  case 513:
/* Line 1787 of yacc.c  */
#line 2476 "conf_parser.y"
    {
  ConfigFileEntry.max_nick_changes = (yyvsp[(3) - (4)].number);
}
    break;

  case 514:
/* Line 1787 of yacc.c  */
#line 2481 "conf_parser.y"
    {
  ConfigFileEntry.max_accept = (yyvsp[(3) - (4)].number);
}
    break;

  case 515:
/* Line 1787 of yacc.c  */
#line 2486 "conf_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 516:
/* Line 1787 of yacc.c  */
#line 2491 "conf_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = (yyvsp[(3) - (4)].number);
}
    break;

  case 517:
/* Line 1787 of yacc.c  */
#line 2496 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[(3) - (4)].number);
}
    break;

  case 518:
/* Line 1787 of yacc.c  */
#line 2502 "conf_parser.y"
    {
  if (((yyvsp[(3) - (4)].number) > 0) && conf_parser_ctx.pass == 1)
  {
    ilog(LOG_TYPE_IRCD, "You haven't read your config file properly.");
    ilog(LOG_TYPE_IRCD, "There is a line in the example conf that will kill your server if not removed.");
    ilog(LOG_TYPE_IRCD, "Consider actually reading/editing the conf file, and removing this line.");
    exit(0);
  }
}
    break;

  case 519:
/* Line 1787 of yacc.c  */
#line 2513 "conf_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 520:
/* Line 1787 of yacc.c  */
#line 2518 "conf_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 521:
/* Line 1787 of yacc.c  */
#line 2523 "conf_parser.y"
    {
  ConfigFileEntry.stats_e_disabled = yylval.number;
}
    break;

  case 522:
/* Line 1787 of yacc.c  */
#line 2528 "conf_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 523:
/* Line 1787 of yacc.c  */
#line 2533 "conf_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 524:
/* Line 1787 of yacc.c  */
#line 2538 "conf_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 525:
/* Line 1787 of yacc.c  */
#line 2541 "conf_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 526:
/* Line 1787 of yacc.c  */
#line 2546 "conf_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 527:
/* Line 1787 of yacc.c  */
#line 2549 "conf_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 528:
/* Line 1787 of yacc.c  */
#line 2554 "conf_parser.y"
    {
  ConfigFileEntry.pace_wait = (yyvsp[(3) - (4)].number);
}
    break;

  case 529:
/* Line 1787 of yacc.c  */
#line 2559 "conf_parser.y"
    {
  ConfigFileEntry.caller_id_wait = (yyvsp[(3) - (4)].number);
}
    break;

  case 530:
/* Line 1787 of yacc.c  */
#line 2564 "conf_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 531:
/* Line 1787 of yacc.c  */
#line 2569 "conf_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = (yyvsp[(3) - (4)].number);
}
    break;

  case 532:
/* Line 1787 of yacc.c  */
#line 2574 "conf_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 533:
/* Line 1787 of yacc.c  */
#line 2579 "conf_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 534:
/* Line 1787 of yacc.c  */
#line 2584 "conf_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 535:
/* Line 1787 of yacc.c  */
#line 2589 "conf_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 536:
/* Line 1787 of yacc.c  */
#line 2594 "conf_parser.y"
    {
  ConfigFileEntry.dots_in_ident = (yyvsp[(3) - (4)].number);
}
    break;

  case 537:
/* Line 1787 of yacc.c  */
#line 2599 "conf_parser.y"
    {
  ConfigFileEntry.max_targets = (yyvsp[(3) - (4)].number);
}
    break;

  case 538:
/* Line 1787 of yacc.c  */
#line 2604 "conf_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 539:
/* Line 1787 of yacc.c  */
#line 2609 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    ConfigFileEntry.egdpool_path = xstrdup(yylval.string);
  }
}
    break;

  case 540:
/* Line 1787 of yacc.c  */
#line 2618 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2 && valid_servname(yylval.string))
  {
    MyFree(ConfigFileEntry.service_name);
    ConfigFileEntry.service_name = xstrdup(yylval.string);
  }
}
    break;

  case 541:
/* Line 1787 of yacc.c  */
#line 2627 "conf_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 542:
/* Line 1787 of yacc.c  */
#line 2632 "conf_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 543:
/* Line 1787 of yacc.c  */
#line 2637 "conf_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 544:
/* Line 1787 of yacc.c  */
#line 2642 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 548:
/* Line 1787 of yacc.c  */
#line 2648 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 549:
/* Line 1787 of yacc.c  */
#line 2651 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 550:
/* Line 1787 of yacc.c  */
#line 2654 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 551:
/* Line 1787 of yacc.c  */
#line 2657 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 552:
/* Line 1787 of yacc.c  */
#line 2660 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 553:
/* Line 1787 of yacc.c  */
#line 2663 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_HIDDEN;
}
    break;

  case 554:
/* Line 1787 of yacc.c  */
#line 2666 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 555:
/* Line 1787 of yacc.c  */
#line 2669 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 556:
/* Line 1787 of yacc.c  */
#line 2672 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 557:
/* Line 1787 of yacc.c  */
#line 2675 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 558:
/* Line 1787 of yacc.c  */
#line 2678 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 559:
/* Line 1787 of yacc.c  */
#line 2681 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 560:
/* Line 1787 of yacc.c  */
#line 2684 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 561:
/* Line 1787 of yacc.c  */
#line 2687 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 562:
/* Line 1787 of yacc.c  */
#line 2690 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 563:
/* Line 1787 of yacc.c  */
#line 2693 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 564:
/* Line 1787 of yacc.c  */
#line 2696 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 565:
/* Line 1787 of yacc.c  */
#line 2699 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 566:
/* Line 1787 of yacc.c  */
#line 2702 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 567:
/* Line 1787 of yacc.c  */
#line 2705 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REGONLY;
}
    break;

  case 568:
/* Line 1787 of yacc.c  */
#line 2708 "conf_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FARCONNECT;
}
    break;

  case 569:
/* Line 1787 of yacc.c  */
#line 2713 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 573:
/* Line 1787 of yacc.c  */
#line 2719 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 574:
/* Line 1787 of yacc.c  */
#line 2722 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 575:
/* Line 1787 of yacc.c  */
#line 2725 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 576:
/* Line 1787 of yacc.c  */
#line 2728 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 577:
/* Line 1787 of yacc.c  */
#line 2731 "conf_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 578:
/* Line 1787 of yacc.c  */
#line 2734 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 579:
/* Line 1787 of yacc.c  */
#line 2737 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_HIDDEN;
}
    break;

  case 580:
/* Line 1787 of yacc.c  */
#line 2740 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 581:
/* Line 1787 of yacc.c  */
#line 2743 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 582:
/* Line 1787 of yacc.c  */
#line 2746 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 583:
/* Line 1787 of yacc.c  */
#line 2749 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 584:
/* Line 1787 of yacc.c  */
#line 2752 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 585:
/* Line 1787 of yacc.c  */
#line 2755 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 586:
/* Line 1787 of yacc.c  */
#line 2758 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 587:
/* Line 1787 of yacc.c  */
#line 2761 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 588:
/* Line 1787 of yacc.c  */
#line 2764 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 589:
/* Line 1787 of yacc.c  */
#line 2767 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 590:
/* Line 1787 of yacc.c  */
#line 2770 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 591:
/* Line 1787 of yacc.c  */
#line 2773 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 592:
/* Line 1787 of yacc.c  */
#line 2776 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REGONLY;
}
    break;

  case 593:
/* Line 1787 of yacc.c  */
#line 2779 "conf_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_FARCONNECT;
}
    break;

  case 594:
/* Line 1787 of yacc.c  */
#line 2784 "conf_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = (yyvsp[(3) - (4)].number);
}
    break;

  case 595:
/* Line 1787 of yacc.c  */
#line 2789 "conf_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = (yyvsp[(3) - (4)].number);
}
    break;

  case 596:
/* Line 1787 of yacc.c  */
#line 2794 "conf_parser.y"
    {
  ConfigFileEntry.default_floodcount = (yyvsp[(3) - (4)].number);
}
    break;

  case 613:
/* Line 1787 of yacc.c  */
#line 2817 "conf_parser.y"
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
    break;

  case 614:
/* Line 1787 of yacc.c  */
#line 2822 "conf_parser.y"
    {
  ConfigChannel.knock_delay = (yyvsp[(3) - (4)].number);
}
    break;

  case 615:
/* Line 1787 of yacc.c  */
#line 2827 "conf_parser.y"
    {
  ConfigChannel.knock_delay_channel = (yyvsp[(3) - (4)].number);
}
    break;

  case 616:
/* Line 1787 of yacc.c  */
#line 2832 "conf_parser.y"
    {
  ConfigChannel.max_chans_per_user = (yyvsp[(3) - (4)].number);
}
    break;

  case 617:
/* Line 1787 of yacc.c  */
#line 2837 "conf_parser.y"
    {
  ConfigChannel.max_chans_per_oper = (yyvsp[(3) - (4)].number);
}
    break;

  case 618:
/* Line 1787 of yacc.c  */
#line 2842 "conf_parser.y"
    {
  ConfigChannel.max_bans = (yyvsp[(3) - (4)].number);
}
    break;

  case 619:
/* Line 1787 of yacc.c  */
#line 2847 "conf_parser.y"
    {
  ConfigChannel.default_split_user_count = (yyvsp[(3) - (4)].number);
}
    break;

  case 620:
/* Line 1787 of yacc.c  */
#line 2852 "conf_parser.y"
    {
  ConfigChannel.default_split_server_count = (yyvsp[(3) - (4)].number);
}
    break;

  case 621:
/* Line 1787 of yacc.c  */
#line 2857 "conf_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 622:
/* Line 1787 of yacc.c  */
#line 2862 "conf_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 623:
/* Line 1787 of yacc.c  */
#line 2867 "conf_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 624:
/* Line 1787 of yacc.c  */
#line 2872 "conf_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 637:
/* Line 1787 of yacc.c  */
#line 2892 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 638:
/* Line 1787 of yacc.c  */
#line 2898 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
    break;

  case 639:
/* Line 1787 of yacc.c  */
#line 2904 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 640:
/* Line 1787 of yacc.c  */
#line 2910 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
    break;

  case 641:
/* Line 1787 of yacc.c  */
#line 2916 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
    break;

  case 642:
/* Line 1787 of yacc.c  */
#line 2925 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (((yyvsp[(3) - (4)].number) > 0) && ConfigServerHide.links_disabled == 1)
    {
      eventAddIsh("write_links_file", write_links_file, NULL, (yyvsp[(3) - (4)].number));
      ConfigServerHide.links_disabled = 0;
    }

    ConfigServerHide.links_delay = (yyvsp[(3) - (4)].number);
  }
}
    break;

  case 643:
/* Line 1787 of yacc.c  */
#line 2939 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 644:
/* Line 1787 of yacc.c  */
#line 2945 "conf_parser.y"
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;


/* Line 1787 of yacc.c  */
#line 6789 "conf_parser.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


