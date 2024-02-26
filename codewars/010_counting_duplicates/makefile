VPATH = ../../utility
CC = clang++
CFLAGS = -std=c++17 -stdlib=libc++ -I../../utility

counting_duplicates : counting_duplicates_main.o counting_duplicates.o debug.o
	$(CC) $(CFLAGS) counting_duplicates_main.o counting_duplicates.o debug.o -o counting_duplicates

debug.o : debug.cpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

counting_duplicates.o : counting_duplicates.cpp counting_duplicates.hpp debug.hpp
	$(CC) $(CFLAGS) -c -g $^

counting_duplicates_main.o : counting_duplicates_main.cpp counting_duplicates.hpp
	$(CC) $(CFLAGS) -c -g $^

clean : counting_duplicates_main.o counting_duplicates.o debug.o counting_duplicates.hpp.gch debug.hpp.gch
	rm $^
