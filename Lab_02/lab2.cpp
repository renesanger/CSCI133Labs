#include <iostream>
using namespace std;

/*
  Author: Rene Sanger
  Course: {135,136}
  Instructor: Mike Zamansky
  Assignment: "Lab 2"

  This program does ...
	automatiically calls verhulst 3 times 
	
	it gets inputs that become the values for population, growth rate, minimum loss rate,carrying capacity, table size
	generates a table with population corresponding to the year
	
*/

//calculates the population of the next year 
float verhulst(int p, float g, float h, int m)
{
	return ((1+g-h)*p)-(g*p*p/m);
}

int main()
{
int P=10;
float G=1.25;
float H=.2;
int M=100;
int k=20;

/*
cout<<"Enter a Population size:"<<endl;
cin>>P;
cout<<"Growth rate:"<<endl;
cin>>G;
cout<<"Enter a minimum losss rate:"<<endl;
cin>>H;
cout<<"Enter a carrying capacity:"<<endl;
cin>>M;
cout<<"Enter the amount of years on the table:"<<endl;
cin>>k;
*/

cout<<"Year"<<"	"<<"Population"<<endl;
for(int i=1;i<=k;i++)
{	
	P=verhulst(P,G,H,M);
	cout<<i<<"	"<<P<<endl;

}

cout<<endl;
cout<<endl;





/*
	specification fullfillment:
	Three automatic calls to verlhurst
*/

P=10;
G=2.5;
H=.2;
M=120;

cout<<"Year"<<"	"<<"Population"<<endl;
for(int i=1;i<=k;i++)
{	
	P=verhulst(P,G,H,M);
	
	cout<<i<<"	"<<P<<endl;

}

cout<<endl;
cout<<endl;

P=120;
G=3;
H=.5;
M=140;

cout<<"Year"<<"	"<<"Population"<<endl;
for(int i=1;i<=k;i++)
{	
	P=verhulst(P,G,H,M);
	
	cout<<i<<"	"<<P<<endl;

}

cout<<endl;

/**/



}




