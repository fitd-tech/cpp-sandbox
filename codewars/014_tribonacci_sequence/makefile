VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

tribonacci_sequence : tribonacci_sequence_main.o tribonacci_sequence.o debug.o
	$(CC) $(CFLAGS) tribonacci_sequence_main.o tribonacci_sequence.o debug.o -o tribonacci_sequence

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

tribonacci_sequence.o : tribonacci_sequence.cpp tribonacci_sequence.hpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

tribonacci_sequence_main.o : tribonacci_sequence_main.cpp tribonacci_sequence.hpp
	$(CC) $(CFLAGS) -c -g $^

clean : tribonacci_sequence_main.o tribonacci_sequence.o debug.o tribonacci_sequence.hpp.gch debug.hpp.gch
	rm $^
