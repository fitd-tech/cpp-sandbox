VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

is_valid_walk : is_valid_walk_main.o is_valid_walk.o debug.o
	$(CC) $(CFLAGS) is_valid_walk_main.o is_valid_walk.o debug.o -o is_valid_walk

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c $^

is_valid_walk.o : is_valid_walk.cpp is_valid_walk.hpp debug.hpp
	$(CC) $(CFLAGS) -c $^

is_valid_walk_main.o : is_valid_walk_main.cpp is_valid_walk.hpp
	$(CC) $(CFLAGS) -c $^

clean : is_valid_walk_main.o is_valid_walk.o debug.o is_valid_walk.hpp.gch debug.hpp.gch
	rm $^
