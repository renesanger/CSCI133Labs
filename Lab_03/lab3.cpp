#include <iostream>
#include <string>
#include <math.h>
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


string line(int l, string c){
	string s;
	for(int i=0; i<l;i++)
		s+=c;
	return s;
}


string rect(int w, int h)
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
	return s;



}

string tri1(int side)
{

	string s;
	for(int i=1;i<=side;i++)
	{
		s+=line(i,"*")+"\n";
	}
	return s;
}


string trap(int h, int b)
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
	return s;
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


string tri2(int side) // upper half of square
{
	string s;
	for(int i=0;i<side;i++)
	{
		s+=line(i," ")+line(side-i,"*")+"\n";
	}
  	return s;



}



string circle(int r)
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

return s;

}




int main(){

cout<<"===============RECT================"<<endl;
cout<<rect(5,4)<<endl;
cout<<"===============TRI2================"<<endl;
cout<<tri1(5)<<endl;
cout<<"===============TRAP================"<<endl;
cout<<trap(3,5)<<endl;
cout<<"===============TRI2================"<<endl;
cout<<tri2(5)<<endl;
cout<<"===============CIRCLE================"<<endl;
cout<<circle(5)<<endl;


/*
cout<<"===============TESTS1================"<<endl;
cout<<"===============RECT================"<<endl;
cout<<rect(3,2)<<endl;
cout<<"===============TRI2================"<<endl;
cout<<tri1(2)<<endl;
cout<<"===============TRAP================"<<endl;
cout<<trap(3,2)<<endl;
cout<<"===============TRI2================"<<endl;
cout<<tri2(3)<<endl;
cout<<"===============CIRCLE================"<<endl;
cout<<circle(4)<<endl;
cout<<"===============TESTS1================"<<endl;
cout<<"===============RECT================"<<endl;
cout<<rect(10,11)<<endl;
cout<<"===============TRI2================"<<endl;
cout<<tri1(12)<<endl;
cout<<"===============TRAP================"<<endl;
cout<<trap(12,15)<<endl;
cout<<"===============TRI2================"<<endl;
cout<<tri2(12)<<endl;
cout<<"===============CIRCLE================"<<endl;
cout<<circle(12)<<endl;
*/

















}
