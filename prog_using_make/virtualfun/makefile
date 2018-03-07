all: main

main: lambo.o fer.o car.o main.o
	g++ -o main main.o car.o lambo.o fer.o
main.o: main.cpp car.o lambo.o fer.o
	g++ -c main.cpp
car.o: car.cpp car.h
	g++ -c car.cpp
lambo.o: lambo.cpp lambo.h
	g++ -c lambo.cpp
fer.o: fer.cpp fer.h
	g++ -c fer.cpp
clean:
	rm *.o main
