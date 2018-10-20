battle: main.o klasy.o
	g++ main.o klasy.o -o battle
	rm *o
main.o: main.cpp
	g++ -c main.cpp
functions.o: klasy.cpp
	g++ -c klasy.cpp
