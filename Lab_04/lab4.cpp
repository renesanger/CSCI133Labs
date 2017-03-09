#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int C(int n, int k)
{
	int x=1;//n!
	int y=1;//k!
	int z=1;//(n-k)!
	int total;
	//cout<<x<<endl;
	for(int i=n;i>1;i--)
	{
		x*=i;
	}
	for(int i=k;i>1;i--)
	{
		y*=i;

	}
	for(int i=n-k;i>1;i--)
	{
		z*=i;
	}

	total=x/(y*z);
	return total;

}


int C2(int n, int k)
{
	int x=1;
	int y=1;
	for(int i=n;i>=(n-k);i--)
	{
		x*=i;
		y*=i-k;		
	}
	int total;
	total= x/y;
	return total;
}

double C3(int n, int k)
{
	//optimization
	int diff= n-k;
	if(diff<k)
	{
		k=diff;
	}

	//repeat code
	int x=1;
	int y=1;
	for(int i=n;i>=(n-k);i--)
	{
		x*=i;
		y*=i-k;		
	}
	double total;
	total= x/y;
	return total;

}

double c4(int n, int k)
{
	double div;
	double total=1;

	for(double i=1;i<=k;i++)
	{
		total*=(1+(n-k)/i);
	}
	return total;
}

int main()
{
	cout<<C(5,4)<<endl;
	cout<<C2(5,2)<<endl;
	cout<<C3(5,3)<<endl;
	cout<<c4(5,3)<<endl;
	cout<<c4(50,3)<<endl;
/*
	cout<<C(10,10)<<endl;
	cout<<C(10,13)<<endl;
	cout<<C(-20,10)<<endl;
	cout<<C2(10,2)<<endl;
	cout<<C3(15,3)<<endl;
	cout<<c4(25,3)<<endl;
	cout<<c4(50,7)<<endl;
	cout<<c4(20,5)<<endl;
*/


}
