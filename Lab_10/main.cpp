#include <iostream>
#include <string>
#include <math.h>
#include "shapes.h"
using namespace std;

/*
  Author: Rene Sanger
  Course: {36}
  Instructor: Mike Zamansky
  Assignment: "Lab 3"
  This program does ...
	creates 5 different shapes using asterisks
	one is an outline of a square
	two is a right triange with incrementing num of stars in each row
	three is a trapezoid
	four is another triangle flippedby the hypotenuse
	five is a cirlcle that is given a radius
	
*/

int main(){
	

	menu();

	/*
	char letter;
	//cin>>letter;
	//cin.ignore();
	cout<<"Enter (R)ectangle, (L)owerTriangle, (T)rapezoid, (C)ircle, or (E)nd"<< endl;
	while(!(letter=='r'|| letter=='R'))
	{
		cin>>letter;
		//cin.clear();
		//cin.ignore();
		//cout << "ERROR" << endl;// simple error message 
		cout<<letter<<endl;;
	
	}/*
	if(letter=='r' || letter=='R')
	{
		int w;
		int l;
		cout<<"input width parameter"<<endl;
		cin>>w;
		cout<<"input length parameter"<<endl;
		cin>>l;
		cout<<rect(w,l)<<endl;
	}
	if(letter=='l' || letter=='L')
	{
		int side;
		cout<<"input side parameter"<<endl;
		cin>>side;
		cout<<tri1(side)<<endl;
	}
	if(letter=='t' || letter=='T')
	{
		int h;
		int b;
		cout<<"input height parameter"<<endl;
		cin>>h;
		cout<<"input base parameter"<<endl;
		cin>>b;
		cout<<trap(h,b)<<endl;
	}
	if(letter=='c' || letter=='C')
	{
		int r;
		cout<<"input radius parameter"<<endl;
		cin>>r;
		cout<<circle(r)<<endl;
	}

	
	/*
	if(letter=='e' || letter=='E')
	{
		int w;
		int l;
		cout<<"input width parameter"<<endl;
		cin>>w;
		cout<<"input length parameter"<<endl;
		cin>>l;
		cout<<rect(w,l)<<endl;
	}

	*/

}



