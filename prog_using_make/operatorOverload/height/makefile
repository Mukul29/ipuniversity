#makefile for the height program
#run make to compile the whole program
all: main

main: main.o height.o
	g++ -o main main.o height.o
main.o: main.cpp
	g++ -c main.cpp
height.o: height.cpp height.h
	g++ -c height.cpp
clean: *.o main
	rm *.o main
