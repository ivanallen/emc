CC=g++
CFLAGS=--std=c++11 -I../base
LFLAGS=-L../base -lbase

all: demo01 demo02 demo03 demo04 demo05 demo06 demo07

../base/libbase.a: ../base
	$(MAKE) -C ../base

demo01: ../base/libbase.a demo01.cpp
	$(CC) -o demo01 demo01.cpp $(CFLAGS) $(LFLAGS)

demo02: ../base/libbase.a demo02.cpp
	$(CC) -o demo02 demo02.cpp $(CFLAGS) $(LFLAGS)

demo03: ../base/libbase.a demo03.cpp
	$(CC) -o demo03 demo03.cpp $(CFLAGS) $(LFLAGS)
	
demo04: ../base/libbase.a demo04.cpp
	$(CC) -o demo04 demo04.cpp $(CFLAGS) $(LFLAGS)

demo05: ../base/libbase.a demo05.cpp
	$(CC) -o demo05 demo05.cpp $(CFLAGS) $(LFLAGS)

demo06: ../base/libbase.a demo06.cpp
	$(CC) -o demo06 demo06.cpp $(CFLAGS) $(LFLAGS)

demo07: ../base/libbase.a demo07.cpp
	$(CC) -o demo07 demo07.cpp $(CFLAGS) $(LFLAGS)

.PHONY:all
