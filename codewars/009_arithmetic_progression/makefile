VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

arithmetic_progression : arithmetic_progression_main.o arithmetic_progression.o debug.o
	$(CC) $(CFLAGS) arithmetic_progression_main.o arithmetic_progression.o debug.o -o arithmetic_progression

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

arithmetic_progression.o : arithmetic_progression.cpp arithmetic_progression.hpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

arithmetic_progression_main.o : arithmetic_progression_main.cpp arithmetic_progression.hpp
	$(CC) $(CFLAGS) -c -g $^

clean : arithmetic_progression_main.o arithmetic_progression.o debug.o arithmetic_progression.hpp.gch debug.hpp.gch
	rm $^
