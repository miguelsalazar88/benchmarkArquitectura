GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c99

PROGS = principal

all: principal

principal:
		$(GCC) $(FLAGS) modulo.c -c 
		$(GCC) $(FLAGS) tiempo.c -c 
		$(GCC) $(FLAGS) $@.c -c 
		$(GCC) $(FLAGS) -o $@ $@.o modulo.o tiempo.o

clean: 
		$(RM) $(PROGS) *.o
