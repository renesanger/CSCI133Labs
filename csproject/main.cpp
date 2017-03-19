#include <iostream>
#include <fstream>
#include "prog1A.h"
#include "prog1B.h"
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
	//prints if inputSent is legal
	string inputSent;
	cout<<"Enter a sentence: "<<endl;
	getline(cin,inputSent);
	legal(inputSent);	

	//elbonian translation
	string s;
	s="Map is large art";
	string str= elbonian(s);
	cout<<str<<endl;

	//print();
}
