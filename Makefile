CFLAGS =-std=c89

SRCS = $(wildcard *.c)

CC = gcc

PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
clean: 
	rm -f $(PROGS)