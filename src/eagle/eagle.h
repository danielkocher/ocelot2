// aka logger

#ifndef OCELOT2_EAGLE_H
#define OCELOT2_EAGLE_H

struct eagle_t {
  // flag to indicate whether logging is enabled or not
  int enable;
};

void eagle_init(struct eagle_t* eagle, int enable);
void eagle_disable(struct eagle_t* eagle);
void eagle_enable(struct eagle_t* eagle);
void eagle_print(struct eagle_t* eagle, char* message);

#endif // OCELOT2_EAGLE_H