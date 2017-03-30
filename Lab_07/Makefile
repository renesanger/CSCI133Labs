CXXFLAGS=-std=c++14

main: main.o imageio.o
	g++  -o main main.o imageio.o 

main.o: main.cpp imageio.h

imageio.o: imageio.cpp imageio.h

debug: CXXFLAGS:=$(CXXFLAGS) -g
debug: main

test:

clean:
	rm main.o imageio.o

