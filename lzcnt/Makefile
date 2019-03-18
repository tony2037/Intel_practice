CFLAGS = -g -Wall

foo: foo.c
	$(CC) $(CFLAGS) $^ -o $@
all: foo

clean:
	$(RM) foo
debug: foo
	gdb ./$< --tui
