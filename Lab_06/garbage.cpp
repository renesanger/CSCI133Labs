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
int menu()
{
	char letter;
	cout<<"Enter (R)ectangle, (L)owerTriangle, (T)rapezoid, (C)ircle, or (E)nd"<< endl;
	cin>>letter;
	if(letter=='r' || letter=='R')
	{
		int w;
		int l="";
		cout<<"input width parameter"<<endl;
		cin>>w;
		//cout<<"input length parameter"<<endl;
		//cin>>l;
		cout<<w<<" "<<l<<endl;
	}
}

void line(int l, string c){
	string s;
	for(int i=0; i<l;i++)
		s+=c;

}


void rect(int w, int h)
{
	std::string  s="";
	for(int i=1;i<=h;i++)
	{
		if(i==1 || i==h)
			s+=line(w,'*') + '\n' ;
		else
		{
			s+= '*' + line(w-2,' ')+ '*' + '\n';

		}
	}
}

void tri1(int side)
{

	string s;
	for(int i=1;i<=side;i++)
	{
		s+=line(i,'*')+'\n';
	}
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
			s+='\n';
			b = b + 1;
	}
}


void tri2(int side) // upper half of square
{
	string s;
	for(int i=0;i<side;i++)
	{
		s+=line(i,' ')+line(side-i,'*')+'\n';
	}

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
            			 s+='*';
        		}
        		else
        		{
        		     s+=' ';
       			}
    		}
		s+='\n';

	}

}

