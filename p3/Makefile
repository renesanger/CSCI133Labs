main:  main.o prog1A.o 
	g++ -o main main.o prog1A.o

main.o: main.cpp
	g++ -c main.cpp
	
prog1A.o: prog1A.cpp 
	g++ -c prog1A.cpp

run:
	./main

clean:
	rm prog1A.o main *~
