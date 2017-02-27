#include <iostream>
#include "verhulst.h"
using namespace std;

int main()
{
int P=10;
float G=1.25;
float H=.2;
int M=100;
int k=20;

/*
do{
cout<<"Enter a Population size:"<<endl;
cin>>P;
}
while(P<0);

do{
cout<<"Growth rate:"<<endl;
cin>>G;
}
while(G<0);

do{
cout<<"Enter a minimum losss rate:"<<endl;
cin>>H;
}
while(H>1 || H<0);

do{
cout<<"Enter a carrying capacity:"<<endl;
cin>>M;
}
while(M<0);

do{
cout<<"Enter the amount of years on the table:"<<endl;
cin>>k;
}
while(k<0);
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




