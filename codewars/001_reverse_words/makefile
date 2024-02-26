VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

reverse_words : reverse_words_main.o reverse_words.o debug.o
	$(CC) $(CFLAGS) reverse_words_main.o reverse_words.o debug.o -o reverse_words

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c $^

reverse_words.o : reverse_words.cpp reverse_words.hpp debug.hpp
	$(CC) $(CFLAGS) -c $^

reverse_words_main.o : reverse_words_main.cpp reverse_words.hpp
	$(CC) $(CFLAGS) -c $^

clean : reverse_words_main.o reverse_words.o debug.o reverse_words.hpp.gch debug.hpp.gch
	rm $^
