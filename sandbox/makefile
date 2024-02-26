VPATH = ../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../utility

sandbox : sandbox_main.o sandbox.o debug.o
	$(CC) $(CFLAGS) sandbox_main.o sandbox.o debug.o -o sandbox

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

sandbox.o : sandbox.cpp sandbox.hpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

sandbox_main.o : sandbox_main.cpp sandbox.hpp
	$(CC) $(CFLAGS) -c -g $^

clean : sandbox_main.o sandbox.o debug.o sandbox.hpp.gch debug.hpp.gch
	rm $^
