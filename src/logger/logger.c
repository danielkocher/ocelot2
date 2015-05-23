#include "logger.h"

void logger_print() {
#ifdef NDEBUG
	printf("LOGGER: \n");
#endif
}