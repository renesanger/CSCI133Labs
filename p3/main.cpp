#include <iostream>
#include <fstream>
#include "prog1A.h"
#include "prog1A.h"
using namespace std;

/*
  Author: Rene
  Course: 135
  Instructor: Eric Swiezer
  Assignment: prog1A.cpp
	
	-tests the functions in prog1A.cpp and prog1B.cpp
  	-finds the words in a sentence
	-finds syntax of sentence
	-check if sentence is legal
*/


int main()
{
	//read file I/O files
	fillFileVects();

	//Input Sentence 
	string s;
	cout<<"Enter a valid sentence: "<<endl;
	getline(cin,s);

	//construct sentence and syntax
	Sentence sent(s);
	sent.lower();	
	sent.getWords();
	sent.developSyn();

	//output legality
	sent.legal();

	return 0;
}


