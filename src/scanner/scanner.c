#include "scanner.h"

void scanner_init() {
	scanner_token_init();

	current_symbol = T_EOF;
	scanner_get_symbol();
}

void scanner_token_init() {
	T_EOF = -1;
}

void scanner_get_symbol() {
	
}