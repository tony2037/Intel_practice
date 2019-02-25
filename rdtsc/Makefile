CC = gcc
CFLAGS = -g -Wall -O0
rdtsc.o: rdtsc.c rdtsc.h
	$(CC) $(CFLAGS) rdtsc.c -o rdtsc.o
demo: rdtsc.o
	$(CC) $(CFLAGS) -o demo rdtsc.o
