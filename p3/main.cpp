#include <iostream>
#include <fstream>
#include <vector>
#include "prog1A.h"
using namespace std;

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

