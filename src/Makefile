CC = gcc
#CFLAGS = -c -Wall
CFLAGS = -c -Wall -DNDEBUG

DIR_SCANNER = scanner/
DIR_LOGGER = eagle/

FILE_LOGGER = eagle.c

OBJECTS = ocelot2.o eagle.o #scanner.o
BINARY = ocelot2

all: default

default: ocelot2

ocelot2: $(OBJECTS)
	$(CC) $? -o $(BINARY)

ocelot2.o:
	$(CC) $(CFLAGS) ocelot2.c

scanner.o:
	$(CC) $(CFLAGS) $(DIR_SCANNER)$(FILE_SCANNER)

eagle.o:
	$(CC) $(CFLAGS) $(DIR_LOGGER)$(FILE_LOGGER)

clean:
	rm -f $(BINARY)
	rm -f *.o
