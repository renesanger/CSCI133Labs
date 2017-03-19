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

  	-translates a sentence into elbonian
	-translates a file into elbonian
*/

string elbonian(string s)
{
	string str="";
	string word1=getWord1(s);
	string word2=getWord2(s);
	string word3=getWord3(s);
	string word4=getWord4(s);
	int wordPos;
	int wordEndPos;
	if(isValid(developSyn(s))>0)
	{		
		str=word2+" "+word1+" "+word3+" "+word4;
		if(isAdj(word3)>0)
		{
			str=word2+" "+word1+" "+word3[0]+word4;
			for(int i=1;i<word3.length();i++)
			{
				str+=word3[i];
			}
		}
		return str;
	}
	else
	{
		return "Illegal sentence found";
	}


}

void print()
{
	string elb;
	fstream engsents;
	engsents.open("engsents");
	
	while(!engsents.eof())
	{	
		getline(engsents, elb);
		if(elb!="")
			cout<<elbonian(elb)<<endl;
		
	}
	engsents.close();
}
