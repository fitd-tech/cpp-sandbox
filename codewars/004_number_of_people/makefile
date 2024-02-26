VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

number_of_people : number_of_people_main.o number_of_people.o debug.o
	$(CC) $(CFLAGS) number_of_people_main.o number_of_people.o debug.o -o number_of_people

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c $^

number_of_people.o : number_of_people.cpp number_of_people.hpp debug.hpp
	$(CC) $(CFLAGS) -c $^

number_of_people_main.o : number_of_people_main.cpp number_of_people.hpp
	$(CC) $(CFLAGS) -c $^

clean : number_of_people_main.o number_of_people.o debug.o number_of_people.hpp.gch debug.hpp.gch
	rm $^
