VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

testing_one_two : testing_one_two_main.o testing_one_two.o debug.o
	$(CC) $(CFLAGS) testing_one_two_main.o testing_one_two.o debug.o -o testing_one_two

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c $^

testing_one_two.o : testing_one_two.cpp testing_one_two.hpp debug.hpp
	$(CC) $(CFLAGS) -c $^

testing_one_two_main.o : testing_one_two_main.cpp testing_one_two.hpp
	$(CC) $(CFLAGS) -c $^

clean : testing_one_two_main.o testing_one_two.o debug.o testing_one_two.hpp.gch debug.hpp.gch
	rm $^
