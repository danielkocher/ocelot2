#include "eagle/eagle.h"

#include <stdio.h>

int main (int argc, char** argv) {
  if(argc <= 2) {
    printf("USAGE: ./ocelot2 input-file output-file\n");
    return -1;
  }

  struct eagle_t eagle;

  eagle_init(&eagle, 1);

  return 0;
} 
