VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

find_unique : find_unique_main.o find_unique.o debug.o
	$(CC) $(CFLAGS) find_unique_main.o find_unique.o debug.o -o find_unique

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c $^

find_unique.o : find_unique.cpp find_unique.hpp debug.hpp
	$(CC) $(CFLAGS) -c $^

find_unique_main.o : find_unique_main.cpp find_unique.hpp
	$(CC) $(CFLAGS) -c $^

clean : find_unique_main.o find_unique.o debug.o find_unique.hpp.gch debug.hpp.gch
	rm $^
