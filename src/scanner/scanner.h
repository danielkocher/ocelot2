#ifndef OCELOT2_SCANNER_H
#define OCELOT2_SCANNER_H

/**
 * Tokens
 */
int T_EOF;

int current_symbol;

void scanner_init();
void scanner_token_init();
void scanner_get_symbol();

#endif // OCELOT2_SCANNER_H
