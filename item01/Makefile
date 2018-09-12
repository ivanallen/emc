CC=g++
CFLAGS=--std=c++11 -I../base
LFLAGS=-L../base -lbase

all: demo01

base:
	$(MAKE) -C ../base

demo01: base demo01.cpp
	$(CC) -o demo01 demo01.cpp $(CFLAGS) $(LFLAGS)


.PHONY:all
.PHONY:base
