VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

dont_give_me_five : dont_give_me_five_main.o dont_give_me_five.o debug.o
	$(CC) $(CFLAGS) dont_give_me_five_main.o dont_give_me_five.o debug.o -o dont_give_me_five

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c $^

dont_give_me_five.o : dont_give_me_five.cpp dont_give_me_five.hpp debug.hpp
	$(CC) $(CFLAGS) -c $^

dont_give_me_five_main.o : dont_give_me_five_main.cpp dont_give_me_five.hpp
	$(CC) $(CFLAGS) -c $^

clean : dont_give_me_five_main.o dont_give_me_five.o debug.o dont_give_me_five.hpp.gch debug.hpp.gch
	rm $^
