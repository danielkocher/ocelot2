#include "scanner/scanner.h"

void main() {
	scanner_init();
	
	while(current_symbol != T_EOF) {
		scanner_get_symbol();
	}
} 
