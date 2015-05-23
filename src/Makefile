CC = gcc
#CFLAGS = -c -Wall
CFLAGS = -c -Wall -DNDEBUG

DIR_SCANNER = scanner/
DIR_LOGGER = logger/

OBJECTS = ocelot2.o scanner.o logger.o
BINARY = ocelot2

all: default

default: ocelot2

ocelot2: $(OBJECTS)
	$(CC) $? -o $(BINARY)

ocelot2.o:
	$(CC) $(CFLAGS) ocelot2.c

scanner.o:
	$(CC) $(CFLAGS) $(DIR_SCANNER)scanner.c

logger.o:
	$(CC) $(CFLAGS) $(DIR_LOGGER)logger.c

clean:
	rm -f $(BINARY)
	rm -f *.o
