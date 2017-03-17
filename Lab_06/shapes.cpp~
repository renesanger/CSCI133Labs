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
void menu()
{
	while(1){
		cout<<"Enter (R)ectangle, (L)owerTriangle, (T)rapezoid, (C)ircle, or (E)nd"<<endl;
		char letter;
		cin>>letter;
	
		if (letter=='R')
		{
			cout<<"input length of rectangle"<<endl;
			int l;
			while (!(cin >> l))
			{   
	    			cin.clear();  
	    			cin.ignore(); 
	    			cout << "ERROR: Enter integer: " << endl;
	  		}
			cout<<"input width of rectangle"<<endl;
			int w;
			while (!(cin >> w))
			{   
	    			cin.clear();  
	    			cin.ignore(); 
	    			cout << "ERROR: Enter integer: " << endl;
	  		}
			rect(l,w);
		}
		if (letter=='L')
		{
			cout<<"input side of triangle"<<endl;
			int side;
			while (!(cin >> side))
			{   
	    			cin.clear();  
	    			cin.ignore(); 
	    			cout << "ERROR: Enter integer: " << endl;
	  		}	
			tri1(side);
		}
		if (letter=='T'){
			cout<<"input base of trapezoid"<<endl;
			int b;
			while (!(cin >> b))
			{   
	    			cin.clear();  
	    			cin.ignore(); 
	    			cout << "ERROR: Enter integer: " << endl;
	  		}
			cout<<"input height of trapezoid"<<endl;
			int h;
			while (!(cin >> h))
			{   
	    			cin.clear();  
	    			cin.ignore(); 
	    			cout <<"ERROR: Enter integer: " << endl;
	  		}
			trap(b, h);
		}
		if (letter=='C')
		{
			cout<<"input radius of circle"<<endl;
			int r;
			while (!(cin >> r))
			{   
	    			cin.clear();  
	    			cin.ignore(); 
	    			cout << "ERROR: Enter integer: " << endl;
	  		}
			circle(r);
		}
		if (letter=='E')
		{
			break;
		}
	}
}


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


