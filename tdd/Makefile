main: main.o prob.o basicmath.o
	g++ -o main main.o prob.o basicmath.o

tests: tests.o prob.o basicmath.o test_basic_math.o test_prob.o
	g++ -o tests tests.o prob.o basicmath.o test_basic_math.o test_prob.o

test_basic_math.o: test_basic_math.cpp basicmath.h
	g++ -c test_basic_math.cpp

test_prob.o: test_prob.cpp prob.h
	g++ -c test_prob.cpp

tests.o: tests.cpp prob.h basicmath.h
	g++ -c tests.cpp

main.o: main.cpp prob.h basicmath.h
	g++ -c main.cpp

prob.o: prob.cpp prob.h
	g++ -c prob.cpp

basicmath.o: basicmath.cpp basicmath.h
	g++ -c basicmath.cpp


clean:
	rm main.o prob.o basicmath.o tests.o test_basic_math.o test_prob.o tests main *~

#-MM *cpp check directories
#try and catch function
#catch is a c++ framework blah blaah blah/ catch.hpp 
