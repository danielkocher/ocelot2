#include "scanner/scanner.h"

void main(int argc, char** argv) {
	if(argc <= 2) {
        printf("USAGE: ./ozelot2 input-file output-file\n");
        return -1;
    }

	scanner_init();
	
	while(current_symbol != T_EOF) {
		scanner_get_symbol();
	}
} 
