#include <iostream>
#include<string>
using namespace std;

/*   	


	Author: Rene Sanger 
	Course: 136   
	Instructor: Mike Zamansky   
	Assignment: "Lab 11”  
	This program does …
	
	takes input for a string used throughout the whole program.
	uses recursion to check if a syntax of a sentence or expression is correct when using brackets

	also uses booleans and if statements
 
		


*/

bool match(char c1,char c2)
{
	if(c1=='(')
	{
		if(c2==')')
		{
			return true;
		}

	}
	if(c1=='[')
	{
		if(c2==']')
		{
			return true;
		}

	}
	if(c1=='{')
	{
		if(c2=='}')
		{
			return true;
		}

	}
	if(c1=='<')
	{
		if(c2=='>')
		{
			return true;
		}

	}

	return false;

}

bool isBracket(char c)
{
	if(c=='(' || c==')' || c=='[' || c==']' || c=='{' || c=='}' || c=='<' || c=='>')
	{
		return true;

	}
	return false;

}

bool wellFormed(string x)
{

	//task two that takes out non bracket character
	string str="";
	for(int i=0;i<x.length();i++)
	{
		if(isBracket(x[i]))
		{
			str+=x[i];
		}

	}
	x=str;
	


	int n=x.length();
	int i=0;
	bool well;

	//base case
	if(n==0)
	{
		return true;
	}
	//recursive call
	else{
		well=match(x[i],x[n-1])&&wellFormed(x.substr(1,n-2));
	}

	return well;
}

int nestLevel(string s)
{

	//repeat code, just following instuctions, "modify wellFormed". refer to well Formed function
	string str="";
	for(int i=0;i<s.length();i++)
	{
		if(isBracket(s[i]))
		{
			str+=s[i];
		}

	}
	s=str;
	


	int n=s.length();
	int total=0;
	//base case
	if(n==0)
	{
		return 0;
	}
	//recursive call
	else{
		total+=nestLevel(s.substr(1,n-2))+1;
	}
	return total;

}



int main()
{
	string h;
	cout<<"Enter a string of brackets"<<endl;
	cin>>h;

	if(wellFormed(h))
		cout<<"this string is: wellFormed"<<endl;
	else
	{
		cout<<"this is: not formed well"<<endl;
	}
	cout<<"The nest Level is: " <<nestLevel(h)<<endl;

	return 0;
}



