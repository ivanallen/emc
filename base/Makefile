CC=g++

libbase.a: cpp_filter.o term.o
	ar -r libbase.a cpp_filter.o term.o

cpp_filter.o: cpp_filter.cpp
	$(CC) -o cpp_filter.o -c cpp_filter.cpp

term.o: term.cpp
	$(CC) -o term.o -c term.cpp

clear:
	rm -rf *.o *.a

.PHONY:clear
