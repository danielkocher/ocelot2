#include "logger.h"

#include <stdio.h>

void logger_init(struct logger_t* logger, int enable) {
  logger->enable = enable;
}

void logger_disable(struct logger_t* logger) {
  logger->enable = 0;
}

void logger_enable(struct logger_t* logger) {
  logger->enable = 1;
}

void logger_print(struct logger_t* logger, char* message) {
  if (logger->enable == 1) {
  	printf("[LOG] ");
  	printf("%s\n", message);
  }
}
