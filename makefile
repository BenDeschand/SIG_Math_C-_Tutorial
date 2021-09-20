main: main.o sig.o
	g++ -o main main.o sig.o

main.o: main.cpp sig.h
	g++ -c main.cpp

sig.o: sig.cpp sig.h
	g++ -c sig.cpp

clean: 
	rm main.o sig.o main