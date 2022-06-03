CC=gcc
LDFLAGS=
CFLAGS=-Wall -O
EXEC=prog


all: $(EXEC)

prog: main.o Node.o LinkedList.o
	$(CC) -o $@ $^ $(LDFLAGS)

main.o: main.c Node.h
	$(CC) -o $@ -c $< $(CFLAGS)

Node.o: Node.c
	$(CC) -o $@ -c $< $(CFLAGS)

LinkedList.o: LinkedList.c Node.h
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o core

mr_proper: clean
	rm -f $(EXEC)