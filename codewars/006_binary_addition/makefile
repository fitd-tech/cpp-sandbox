VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

binary_addition : binary_addition_main.o binary_addition.o debug.o
	$(CC) $(CFLAGS) binary_addition_main.o binary_addition.o debug.o -o binary_addition

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c $^

binary_addition.o : binary_addition.cpp binary_addition.hpp debug.hpp
	$(CC) $(CFLAGS) -c $^

binary_addition_main.o : binary_addition_main.cpp binary_addition.hpp
	$(CC) $(CFLAGS) -c $^

clean : binary_addition_main.o binary_addition.o debug.o binary_addition.hpp.gch debug.hpp.gch
	rm $^
