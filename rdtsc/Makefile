CC = gcc
CFLAGS = -g -Wall -O0
rdtsc.o: rdtsc.c rdtsc.h
	$(CC) $(CFLAGS) -c rdtsc.c

demo.o: demo.c demo.h
	$(CC) $(CFLAGS) -c demo.c

demo: rdtsc.o demo.o
	$(CC) $(CFLAGS) -o demo rdtsc.o demo.o

.PHONY: clean
clean:
	rm *.o
