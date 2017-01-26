#include "eagle.h"

#include <stdio.h>

void eagle_init(struct eagle_t* eagle, int enable) {
  eagle->enable = enable;
}

void eagle_disable(struct eagle_t* eagle) {
  eagle->enable = 0;
}

void eagle_enable(struct eagle_t* eagle) {
  eagle->enable = 1;
}

void eagle_print(struct eagle_t* eagle, char* message) {
  if (eagle->enable == 1) {
  	printf("[LOG] ");
  	printf("%s\n", message);
  }
}
