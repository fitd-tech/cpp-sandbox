VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

unique_in_order : unique_in_order_main.o unique_in_order.o debug.o
	$(CC) $(CFLAGS) unique_in_order_main.o unique_in_order.o debug.o -o unique_in_order

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

unique_in_order.o : unique_in_order.cpp unique_in_order.hpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

unique_in_order_main.o : unique_in_order_main.cpp unique_in_order.hpp
	$(CC) $(CFLAGS) -c -g $^

clean : unique_in_order_main.o unique_in_order.o debug.o unique_in_order.hpp.gch debug.hpp.gch
	rm $^
