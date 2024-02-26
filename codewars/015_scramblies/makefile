VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

scramblies : scramblies_main.o scramblies.o debug.o
	$(CC) $(CFLAGS) scramblies_main.o scramblies.o debug.o -o scramblies

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

scramblies.o : scramblies.cpp scramblies.hpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

scramblies_main.o : scramblies_main.cpp scramblies.hpp
	$(CC) $(CFLAGS) -c -g $^

clean : scramblies_main.o scramblies.o debug.o scramblies.hpp.gch debug.hpp.gch
	rm $^
