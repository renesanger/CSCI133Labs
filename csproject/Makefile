main: main.o prog1A.o prog1B.o
	g++ -o main main.o prog1A.o prog1B.o

main.o: main.cpp prog1A.h prog1B.h
	g++ -c main.cpp

prog1A.o: prog1A.cpp 
	g++ -c prog1A.cpp

prog1B.o: prog1B.cpp prog1A.h prog1B.h
	g++ -c prog1B.cpp

run:
	./main

clean:
	rm main.o prog1A.o prog1B.o main *~
