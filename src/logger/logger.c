#include "logger.h"

void logger_print(char* source, char* message) {
#ifdef NDEBUG
	printf("[LOGGER] ");
	printf("%s: ", source);
	printf("%s\n", message);
#endif // NDEBUG
}