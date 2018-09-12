CC=g++
CFLAGS=--std=c++11 -I../base
LFLAGS=-L../base -lbase

all: demo01 demo02 demo03 demo04

base:
	$(MAKE) -C ../base

demo01: base demo01.cpp
	$(CC) -o demo01 demo01.cpp $(CFLAGS) $(LFLAGS)

demo02: base demo02.cpp
	$(CC) -o demo02 demo02.cpp $(CFLAGS) $(LFLAGS)

demo03: base demo03.cpp
	$(CC) -o demo03 demo03.cpp $(CFLAGS) $(LFLAGS)
	
demo04: base demo04.cpp
	$(CC) -o demo04 demo04.cpp $(CFLAGS) $(LFLAGS)

.PHONY:all
.PHONY:base
