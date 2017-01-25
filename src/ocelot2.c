#include "logger/logger.h"

#include <stdio.h>

int main (int argc, char** argv) {
  if(argc <= 2) {
    printf("USAGE: ./ocelot2 input-file output-file\n");
    return -1;
  }

  struct logger_t logger;

  logger_init(&logger, 1);

  return 0;
} 
