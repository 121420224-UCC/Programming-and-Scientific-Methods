CC = gcc  # C compiler

CCFLAGS = -O3 # Optimise the code with the compiler to level 3, known as compiler flags

LDFLAGS = -lm # linking flags 

all: matmultc # compiles for 'matlmultc'

matmultc: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)


mm.o: mm.c
	$(CC) -c $(CCFLAGS) $< # $< targets the first list in the dependencies

main.o: main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm -f *.o 


