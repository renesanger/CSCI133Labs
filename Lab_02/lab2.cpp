#include <iostream>
using namespace std;



//calculates the population of the next year 
float verhulst(int p, float g, float h, int m)
{
	

	return ((1+g-h)*p)-(g*p*p/m);

}

int main()
{
int P;
float G;
float H;
int M;
int k;


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


for(int i=1;i<=k;i++)
{	
	P=verhulst(P,G,H,M);
	cout<<i<<"     "<<P<<endl;

}
}



/*
input the parameters 
output the table
*/
