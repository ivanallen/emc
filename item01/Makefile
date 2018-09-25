CC=g++
CXXFLAGS=--std=c++11 -I../base -I../thirdparty/boost_1_68_0
LFLAGS=-L../base -lbase

all: demo01 demo02 demo03 demo04 demo05 demo06 demo07 demo08 demo09 demo10

../base/libbase.a: ../base
	$(MAKE) -C ../base

demo01: ../base/libbase.a demo01.cpp
	$(CC) -o demo01 demo01.cpp $(CXXFLAGS) $(LFLAGS)

demo02: ../base/libbase.a demo02.cpp
	$(CC) -o demo02 demo02.cpp $(CXXFLAGS) $(LFLAGS)

demo03: ../base/libbase.a demo03.cpp
	$(CC) -o demo03 demo03.cpp $(CXXFLAGS) $(LFLAGS)
	
demo04: ../base/libbase.a demo04.cpp
	$(CC) -o demo04 demo04.cpp $(CXXFLAGS) $(LFLAGS)

demo05: ../base/libbase.a demo05.cpp
	$(CC) -o demo05 demo05.cpp $(CXXFLAGS) $(LFLAGS)

demo06: ../base/libbase.a demo06.cpp
	$(CC) -o demo06 demo06.cpp $(CXXFLAGS) $(LFLAGS)

demo07: ../base/libbase.a demo07.cpp
	$(CC) -o demo07 demo07.cpp $(CXXFLAGS) $(LFLAGS)

demo08: ../base/libbase.a demo08.cpp
	$(CC) -o demo08 demo08.cpp $(CXXFLAGS) $(LFLAGS)

demo09: ../base/libbase.a demo09.cpp
	$(CC) -o demo09 demo09.cpp $(CXXFLAGS) $(LFLAGS)

demo10: ../base/libbase.a demo10.cpp
	$(CC) -o demo10 demo10.cpp $(CXXFLAGS) $(LFLAGS)

.PHONY:all
