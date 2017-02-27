#include <iostream>
#include "verhulst.h"
using namespace std;


//calculates the population of the next year 
float verhulst(int p, float g, float h, int m)
{
	return ((1+g-h)*p)-(g*p*p/m);
}

