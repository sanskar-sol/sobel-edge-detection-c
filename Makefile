CC=gcc
INCDIR=-Iinclude.
OPT=-O0
CFLAGS=-Wall -Wextra -g $(INCDIR) $(OPT)

SRC = src/sobel.c src/file_handling.c src/image.c
OBJECTS = bin/sobel.o bin/file_handling.o bin/image.o

BINARY = bin/bin

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

bin/%.o: src/%.c
	$(CC) $(CFLAGS) -c -o $@ $^

.PHONY: clean

clean: 
	del /f /q $(subst /,\,$(BINARY).exe $(OBJECTS))
