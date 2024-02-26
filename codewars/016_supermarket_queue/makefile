VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility -Weverything

supermarket_queue : supermarket_queue_main.o supermarket_queue.o debug.o
	$(CC) $(CFLAGS) supermarket_queue_main.o supermarket_queue.o debug.o -o supermarket_queue

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

supermarket_queue.o : supermarket_queue.cpp supermarket_queue.hpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

supermarket_queue_main.o : supermarket_queue_main.cpp supermarket_queue.hpp
	$(CC) $(CFLAGS) -c -g $^

clean : supermarket_queue_main.o supermarket_queue.o debug.o supermarket_queue.hpp.gch debug.hpp.gch
	rm $^
