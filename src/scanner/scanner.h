#ifndef OCELOT2_SCANNER_H
#define OCELOT2_SCANNER_H

////////////////////////////////////////////////////////////////////////////////
// Supported tokens (characters)
////////////////////////////////////////////////////////////////////////////////

// arithmetics
int PLUS;         // +
int MINUS;        // -
int STAR;         // *
int SLASH;        // /
int MODULO;       // %
// ternary operator parts
int COLON;        // :
int QUESTIONMARK; // ?
// bit operations
int AND;          // &
int PIPE;         // |
int HEAD;         // ^
int TILDE;        // ~
int LEFTSHIFT;    // <<
int RIGHTSHIFT;   // >>
// parentheses
int LEFTPAR;      // (
int RIGHTPAR;     // )
int LEFTSQUPAR;   // [
int RIGHTSQUPAR;  // ]
int LEFTCURPAR;   // {
int RIGHTCURPAR;  // }
// boolean connectors
int EXCLMARK;     // !
int AND2;         // &&
int PIPE2;        // ||
// comparison
int EQUALS2;      // ==
int NEQUALS;      // !=
int LESS;         // <
int LESSEQUALS;   // <=
int GREATER;      // >
int GREATEREQUALS;// >=
// uncategorized
int EOF;          // \0
int SEMICOLON;    // ;
int COMMA;        // ,
int DOT;          // .
int EQUALS;       // =
int ARROW;        // ->
// types
int INT;          // int
int CHAR;         // char
int VOID;         // void
int STRUCT;       // struct
// keywords
int IF;           // if
int ELSE;         // else
int WHILE;        // while
int RETURN;       // return
int BREAK;        // break
int CONTINUE;     // continue
int TYPEDEF;      // typedef
// literals, variables
int IDENTIFIER;   // variable and function names
int NUMBER;       // integer literal, e.g. 42
int CHARACTER;    // character literal, e.g. 'C'
int STRING;       // string literal, e.g. "hello"
// preprocessor
int ASTERISK;     // #
int INCLUDE;      // include
int DEFINE;       // define
int IFDEF;        // ifdef
int IFNDEF;       // ifndef
int ENDIF;        // endif

////////////////////////////////////////////////////////////////////////////////
// Types
////////////////////////////////////////////////////////////////////////////////

struct token_t {
  // token information
  int code;
  int length;
  // positional information (mainly for error messages)
  int file_id;
  int line;
  int column;
  // corresponding string
  char* string;
};

struct scanner_t {
  // constants
  int SIZE_KEYTABLE;
  int MAX_LENGTH_TOKEN;
  // processing
  char current_character;
};

////////////////////////////////////////////////////////////////////////////////
//	Variables
////////////////////////////////////////////////////////////////////////////////

struct token_t **token_table;

////////////////////////////////////////////////////////////////////////////////
// Functions
////////////////////////////////////////////////////////////////////////////////

void scanner_init();
void scanner_token_init();
void scanner_keytable_init();
void scanner_get_symbol();

#endif // OCELOT2_SCANNER_H
