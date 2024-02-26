VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

bouncing_balls : bouncing_balls_main.o bouncing_balls.o debug.o
	$(CC) $(CFLAGS) bouncing_balls_main.o bouncing_balls.o debug.o -o bouncing_balls

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

bouncing_balls.o : bouncing_balls.cpp bouncing_balls.hpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

bouncing_balls_main.o : bouncing_balls_main.cpp bouncing_balls.hpp
	$(CC) $(CFLAGS) -c -g $^

clean : bouncing_balls_main.o bouncing_balls.o debug.o bouncing_balls.hpp.gch debug.hpp.gch
	rm $^
