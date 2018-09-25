CC=g++
SRC=${wildcard  *.cpp}
HEADER=${wildcard  *.h}
OBJ=${patsubst %.cpp,%.o,${SRC}}
CXXFLAGS=-I../thirdparty/boost_1_68_0

libbase.a: $(OBJ) $(HEADER)
	ar -r libbase.a $(OBJ)

%.o: %.cpp
	$(CC) -std=c++11 -c $< -o $@

clear:
	rm -rf *.o *.a

.PHONY:clear
