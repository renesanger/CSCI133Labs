main: lab8.o main.o
	g++ -o main main.o lab8.o

main.o: main.cpp lab8.cpp
	g++ -c main.cpp
lab8.o: lab8.cpp
	g++ -c lab8.cpp

clean:
	rm main main.o lab8.o
	rm *~
	
