VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

equal_sides : equal_sides_main.o equal_sides.o debug.o
	$(CC) $(CFLAGS) equal_sides_main.o equal_sides.o debug.o -o equal_sides

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

equal_sides.o : equal_sides.cpp equal_sides.hpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

equal_sides_main.o : equal_sides_main.cpp equal_sides.hpp
	$(CC) $(CFLAGS) -c -g $^

clean : equal_sides_main.o equal_sides.o debug.o equal_sides.hpp.gch debug.hpp.gch
	rm $^
