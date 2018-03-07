all: main

main: main.o complexNumber.o
	g++ -o main main.o complexNumber.o
main.o: main.cpp
	g++ -c main.cpp
complexNumber.o: complexNumber.cpp complexNumber.h
	g++ -c complexNumber.cpp
clean:
	rm -f *.o main 
