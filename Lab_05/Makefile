
main: main.o digits.o
	g++ main.o digits.o -o main

tests: tests.o digits.o test_digits.o
	g++ -o tests tests.o digits.o test_digits.o

test_digits.o: test_digits.cpp digits.h
	g++ -c test_digits.cpp

tests.o: tests.cpp digits.h
	g++ -c tests.cpp
 
main.o: main.cpp digits.h
	g++ -c main.cpp

digits.o: digits.cpp digits.h
	g++ -c digits.cpp

clean:
	rm main.o digits.o tests.o test_digits.o *~
