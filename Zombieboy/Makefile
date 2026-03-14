# Test makefile

CC = gcc


all: Zombieboy

Zombieboy: main.o
	$(CC) main.o -o Zombieboy

main.o: main.c
	$(CC) -c main.c -o main.o

clean:
	rm -f *.o Zombieboy