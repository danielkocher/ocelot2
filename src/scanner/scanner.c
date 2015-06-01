#include "scanner.h"
#include "../logger/logger.h"

void scanner_init() {
	logger_print();
	
	scanner_token_init();
	scanner_keytable_init();

	current_symbol = T_EOF;
	scanner_get_symbol();
}

void scanner_token_init() {
	T_EOF = -1;

	T_PLUS = 10;
	T_MINUS = 11;
	T_STAR = 12;
	T_SLASH = 13;
	T_MODULO = 14;

	T_COLON = 20;
	T_QUESTIONMARK = 21;

	T_AND = 30;
	T_PIPE = 31;
	T_HEAD = 32;
	T_TILDE = 33;
	T_LEFTSHIFT = 34;
	T_RIGHTSHIFT = 35;

	T_LEFTPAR = 40;
	T_RIGHTPAR = 41;
	T_LEFTSQUPAR = 42;
	T_RIGHTSQUPAR = 43;
	T_LEFTCURPAR = 44;
	T_RIGHTCURPAR = 45;

	T_EXCLMARK = 50;
	T_AND2 = 51;
	T_PIPE2 = 52;

	T_EQUALS2 = 60;
	T_NEQUALS = 61;
	T_LESS = 62;
	T_LESSEQUALS = 63;
	T_GREATER = 64;
	T_GREATEREQUALS = 65;

	T_SEMICOLON = 70;
	T_COMMA = 71;
	T_DOT = 72;
	T_EQUALS = 73;
	T_ARROW = 74;

	T_INT = 80;
	T_CHAR = 81;
	T_VOID = 82;
	T_STRUCT = 83;

	T_IF = 90;
	T_ELSE = 91;
	T_WHILE = 92;
	T_RETURN = 93;
	T_BREAK = 94;
	T_CONTINUE = 95;
	T_TYPEDEF = 96;

	T_IDENTIFIER = 100;
	T_NUMBER = 101;
	T_CHARACTER = 102;
	T_STRING = 103;

	T_ASTERISK = 110;
	T_INCLUDE = 111;
	T_DEFINE = 112;
	T_IFDEF = 113;
	T_IFNDEF = 114;
	T_ENDIF = 115;

	// 45 tokens
}

void scanner_keytable_init() {
	SIZE_KEYTABLE = 256;

}

void scanner_get_symbol() {

}