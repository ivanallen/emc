CC=g++
SRC=${wildcard  *.cpp}
OBJ=${patsubst %.cpp,%.o,${SRC}}

libbase.a: $(OBJ)
	ar -r libbase.a $(OBJ)

%.o: %.cpp
	$(CC) -std=c++11 -c $< -o $@

clear:
	rm -rf *.o *.a

.PHONY:clear
