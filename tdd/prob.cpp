#include "prob.h"
#include <cassert>

int fact(int n){
	//assert(n>0);
	int x=1;
	for(int i=n;i>1;i--)
	{
		x*=i;
	}
	return x;
}

double combo(int n, int k)
{
	//assert(n>=k);
	double div;
	double total=1;

	for(double i=1;i<=k;i++)
	{
		total*=(1+(n-k)/i);
	}
	return total;
}

