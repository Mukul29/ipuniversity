all: prog
prog: main.o random.o
	g++ -o prog main.o random.o
main.o: main.cpp
	g++ -c main.cpp
random.o: random.cpp
	g++ -c random.cpp
clean:
	rm main.o random.o prog
