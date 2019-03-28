CC=gcc
CFLAGS= -W -Wall -Wextra -Werror -std=c99 -01
LDFLAGS=
EXEC=xor

all: $(EXEC)

xor: test-neural.c main.c
	$(CC) -o xor test-neural.c main.c $(CLAGS) -lm

clean:
	rm -rf $(EXEC)

