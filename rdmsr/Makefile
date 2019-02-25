CC = gcc
CFLAGS = -g -Wall -O0
rdmsr.o: rdmsr.c rdmsr.h
	$(CC) $(CFLAGS) -c rdmsr.c

demo.o: demo.c demo.h
	$(CC) $(CFLAGS) -c demo.c

demo: rdmsr.o demo.o
	$(CC) $(CFLAGS) -o demo rdmsr.o demo.o

.PHONY: clean
clean:
	rm *.o demo
