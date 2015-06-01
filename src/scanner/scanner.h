#ifndef OCELOT2_SCANNER_H
#define OCELOT2_SCANNER_H

/**
 * Tokens
 */
// arithmetics
int T_PLUS;			// +
int T_MINUS;		// -
int T_STAR;			// *
int T_SLASH;		// /
int T_MODULO;		// %

// ternary operator parts
int T_COLON;		// :
int T_QUESTIONMARK;	// ?

// bit operations
int T_AND;			// &
int T_PIPE;			// |
int T_HEAD;			// ^
int T_TILDE;		// ~
int T_LEFTSHIFT;	// <<
int T_RIGHTSHIFT;	// >>

// parentheses
int T_LEFTPAR;		// (
int T_RIGHTPAR;		// )
int T_LEFTSQUPAR;	// [
int T_RIGHTSQUPAR;	// ]
int T_LEFTCURPAR;	// {
int T_RIGHTCURPAR;	// }

// boolean connectors
int T_EXCLMARK;		// !
int T_AND2;			// &&
int T_PIPE2;		// ||

// comparison
int T_EQUALS2;		// ==
int T_NEQUALS;		// !=
int T_LESS;			// <
int T_LESSEQUALS;	// <=
int T_GREATER;		// >
int T_GREATEREQUALS;// >=

// uncategorized
int T_EOF;			// \0
int T_SEMICOLON;	// ;
int T_COMMA;		// ,
int T_DOT;			// .
int T_EQUALS;		// =
int T_ARROW;		// ->

// types
int T_INT;			// int
int T_CHAR;			// char
int T_VOID;			// void
int T_STRUCT;		// struct

// keywords
int T_IF;			// if
int T_ELSE;			// else
int T_WHILE;		// while
int T_RETURN;		// return
int T_BREAK;		// break
int T_CONTINUE;		// continue
int T_TYPEDEF;		// typedef

// literals, variables
int T_IDENTIFIER;	// variable and function names
int T_NUMBER;		// integer literal, e.g. 42
int T_CHARACTER;	// character literal, e.g. 'C'
int T_STRING;		// string literal, e.g. "hello"

// preprocessor
int T_ASTERISK;		// #
int T_INCLUDE;		// include
int T_DEFINE;		// define
int T_IFDEF;		// ifdef
int T_IFNDEF;		// ifndef
int T_ENDIF;		// endif

/**
 *	Types
 */
struct key_info {
	int token;
	char *string;
	int length;
};

struct error_info {
	int line;
	int column;
};

/**
 *	Constants
 */
int SIZE_KEYTABLE;
int MAX_LENGTH_TOKEN;

/**
 *	Variables
 */
struct key_info **keytable;

int current_symbol;

void scanner_init();
void scanner_token_init();
void scanner_keytable_init();
void scanner_get_symbol();

#endif // OCELOT2_SCANNER_H
