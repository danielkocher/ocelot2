#include "logger.h"

#include <stdio.h>

void logger_init(struct logger_t* logger, int enable) {
  logger->enable = enable;
}

void logger_print(struct logger_t* logger, char* message) {
  if (logger->enable == 1) {
  	printf("[LOG] ");
  	printf("%s\n", message);
  }
}
