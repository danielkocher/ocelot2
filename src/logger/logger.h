#ifndef OCELOT2_LOGGER_H
#define OCELOT2_LOGGER_H

struct logger_t {
  // flag to indicate whether logging is enabled or not
  int enable;
};

void logger_init(struct logger_t* logger, int enable);
void logger_print(struct logger_t* logger, char* message);

#endif // OCELOT2_LOGGER_H