#include <iostream>
#include <string>
#include <math.h>
#include "shapes.h"
using namespace std;


/*
  Author: Rene Sanger
  Course: {135,136}
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
string line(int l, string c)
{
	string s;
	for(int i=0; i<l;i++)
		s+=c;
	return s;
}


void rect(int w, int h)
{
	std::string  s="";
	for(int i=1;i<=h;i++)
	{
		if(i==1 || i==h)
			s+=line(w,"*") + "\n" ;
		else
		{
			s+= "*" + line(w-2," ")+ "*" + "\n";

		}
	}
	cout << s << endl;



}

void tri1(int side)
{

	string s;
	for(int i=1;i<=side;i++)
	{
		s+=line(i,"*")+"\n";
	}
	cout << s << endl;
}


void trap(int h, int b)
{
	string s;
	for (int i = 0; i < h; i++)
	{
		for (int k = 0; k <= b-h; k++)
			{
				s+="*";
			}
			s+="\n";
			b = b + 1;
	}
	cout << s << endl;
}


/*
string trap(int side, int height)//basically a trianggle with top cut off
{
	string s;
	for(int i=3;i<=side;i++)
	{
		s+=line(i,"*")+"\n";
	}
	return s;
}
*/


void tri2(int side) // upper half of square
{
	string s;
	for(int i=0;i<side;i++)
	{
		s+=line(i," ")+line(side-i,"*")+"\n";
	}
  	cout << s << endl;



}



void circle(int r)
{
	string s;
	for (int i = 0; i <= 2*r; i++)
	{
	
		for (int j = 0; j <= 2*r; j++)
		{
        		if ((r*r)==((j-r)*(j-r)+(i-r)*(i-r)))
       			 {
        		     s+="*";
       			 }
       			else
        		{
        		     s+=" ";
        		}
    		}
		s+="\n";
	}

cout << s << endl;

}
void menu()
{
	while(1){
	cout<<"Enter (R)ectangle, (L)owerTriangle, (T)rapezoid, C(ircle), or (E)nd"<<endl;
	char P;
	cin>>P;

	if (P=='R'){
		cout<<"input length of rectangle"<<endl;
		int l;
		while (!(cin >> l)){   
    			cin.clear();  
    			cin.ignore(); 
    			cout << "ERROR: Enter integer: " << endl;
  		}
		cout<<"input width of rectangle"<<endl;
		int w;
		while (!(cin >> w)){   
    			cin.clear();  
    			cin.ignore(); 
    			cout << "ERROR: Enter integer: " << endl;
  		}
		rect(l,w);
	}
	if (P=='L'){
		cout<<"input side of triangle"<<endl;
		int stri;
		while (!(cin >> stri)){   
    			cin.clear();  
    			cin.ignore(); 
    			cout << "ERROR: Enter integer: " << endl;
  		}	
		tri1(stri);
	}
	if (P=='T'){
		cout<<"input side of trapezoid"<<endl;
		int strap;
		while (!(cin >> strap)){   
    			cin.clear();  
    			cin.ignore(); 
    			cout << "ERROR: Enter integer: " << endl;
  		}
		cout<<"input height of trapezoid"<<endl;
		int htrap;
		while (!(cin >> htrap)){   
    			cin.clear();  
    			cin.ignore(); 
    			cout <<"ERROR: Enter integer: " << endl;
  		}
		trap(strap, htrap);
	}
	if (P=='C'){
		cout<<"input radius of circle"<<endl;
		int radius;
		while (!(cin >> radius)){   
    			cin.clear();  
    			cin.ignore(); 
    			cout << "ERROR: Enter integer: " << endl;
  		}
		circle(radius);
	}
	if (P=='E'){
		break;
	}
	}

	/*
	char letter;
	cout<<"Enter (R)ectangle, (L)owerTriangle, (T)rapezoid, (C)ircle, or (E)nd"<< endl;
	cin>>letter;
	if(letter=='r' || letter=='R')
	{
		int w;
		int l;
		cout<<"input width parameter"<<endl;
		cin>>w;
		cout<<"input length parameter"<<endl;
		cin>>l;
		cout<<w<<" "<<l<<endl;
	}*/
}


