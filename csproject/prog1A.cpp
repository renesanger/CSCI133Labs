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

  	-finds the words in a sentence
	-finds syntax of sentence
	-check if sentence is legal
*/


string lower(string s)
{
	for(int i=0; i<s.length();i++)
	{
		if(s[i]>= 'A' && s[i]<='Z')
			s[i]=s[i]+0x20;
	}
	return s;
}

int findWordEnd(string sent, int index)
{
	for(int i=index; i<sent.length()-1;i++)
	{
		if((sent[i+1]==' ')||(sent[i+1]=='\t'))
		{
			return i;
		}
	}
	return sent.length()-1;
}

int findNextWord(string sent, int index)
{
	for(int i=index;i<sent.length();i++)
	{
		if(sent[i] != ' ')
		{
			return i;
		}
	}
	return sent.length();
}

string syn(string word)
{
	string str="";
	if(isNoun(word))
		str+="noun";
	if(isVerb(word)==1)
		str+="verb";
	if(isAdj(word))
		str+="adjective";
	if(isPronoun(word)==1)
		str+="pronoun";
	return str;

}

string developSyn(string s)
{
	string syntax="";
	string word1="";
	string word2="";
	string word3="";
	string word4="";
	int wordPos; 
	int wordEndPos; 
	int i=1;
	
	word1= getWord1(s);
	word2= getWord2(s);
	word3= getWord3(s);
	word4= getWord4(s);

	syntax= syn(word1) + syn(word2) + syn(word3) + syn(word4);
	return syntax;
}

//pronoun, noun, verb, adjective
bool isPronoun(string s)
{
	string pronoun;
	fstream pronouns;
	pronouns.open("pronouns");
	
	while (!pronouns.eof()){
		pronouns >> pronoun;
		if(lower(s)==pronoun)
		{
			return true;
		}
  	}
	pronouns.close();
	return false;
}

bool isNoun(string s)
{
	string noun;
	fstream nouns;
	nouns.open("nouns");
	s=lower(s);
	while (!nouns.eof()){
		nouns >> noun;
		if(lower(s)==noun)
		{
			return true;
		}
  	}
	nouns.close();
	return false;
}

bool isVerb(string s)
{
	string verb;
	fstream verbs;
	verbs.open("verbs");
	
	while (!verbs.eof()){
		verbs >> verb;
		if(lower(s)==verb)
		{
			return true;
		}
  	}
	verbs.close();
	return false;
}

bool isAdj(string s)
{
	string adj;
	fstream adjectives;
	adjectives.open("adjectives");
	
	while (!adjectives.eof()){
		adjectives >> adj;
		if(lower(s)==adj)
		{
			return true;
		}
  	}
	adjectives.close();
	return false;
}

int isValid(string s)
{
	if(s=="nounverbnoun")
		return 1;
	else if(s=="nounverbadjectivenoun")
		return 2;
	else if(s=="pronounverbnoun")
		return 3;
	else if(s=="pronounverbadjectivenoun")
		return 4;
	else if(s=="pronounverbpronoun")
		return 5;
	return 0;
}




string getWord(string sent,int start, int end)
{
	string s="";
	for(int i=start;i<=end; i++)
	{
		s+=sent[i];
	}
	//cout<<s<<endl;
	return s;

}
string getWord1(string s)
{
	string word1="";
	int wordPos; 
	int wordEndPos; 
	int i=1;
	
	for(wordPos=0; wordPos< s.length();)
	{
		wordPos = findNextWord(s, wordPos);
		wordEndPos = findWordEnd(s, wordPos);
		
		if(i==1)
		{
			word1=getWord(s,wordPos,wordEndPos);
		}		

		wordPos=wordEndPos+1;
		i++;
	}
	return word1;

}

string getWord2(string s)
{
	string word2="";
	int wordPos; 
	int wordEndPos; 
	int i=1;
	
	for(wordPos=0; wordPos< s.length();)
	{
		wordPos = findNextWord(s, wordPos);
		wordEndPos = findWordEnd(s, wordPos);
	
		if(i==2)
		{
			word2=getWord(s,wordPos,wordEndPos);
		}

		wordPos=wordEndPos+1;
		i++;
	}
	return word2;
}

string getWord3(string s)
{
	string word3="";
	int wordPos; 
	int wordEndPos; 
	int i=1;
	
	for(wordPos=0; wordPos< s.length();)
	{
		wordPos = findNextWord(s, wordPos);
		wordEndPos = findWordEnd(s, wordPos);
		//wordEndPos=1;
		
		if(i==3)
		{
			word3=getWord(s,wordPos,wordEndPos);
		}
		wordPos=wordEndPos+1;
		i++;
	}
	return word3;

}

string getWord4(string s)
{
	string word4="";
	int wordPos; 
	int wordEndPos; 
	int i=1;
	
	for(wordPos=0; wordPos< s.length();)
	{
		wordPos = findNextWord(s, wordPos);
		wordEndPos = findWordEnd(s, wordPos);

		if(i==4)
		{
			word4=getWord(s,wordPos,wordEndPos);
		}
		wordPos=wordEndPos+1;
		i++;
	}
	return word4;


}


void legal(string s)
{
	string syntax=developSyn(s);
	if(isValid(syntax)>0)
		cout<<"Your sentence is a legal sentance by rule " << isValid(syntax)<<endl;
	else if(isValid(syntax)<=0)
		cout<<"Your sentence is a not a legal sentence"<<endl;

}




