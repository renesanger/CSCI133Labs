#include <iostream>
#include <cmath>

using namespace std;

/*
  Author: Rene Sanger
  Course: 136
  Instructor: Mike Zamansky
  Assignment: "Lab 09"

  This program does ...
*/


int degree;

double* task0()
{	


	cout<<"Enter polynomial degree: "<<endl;
	cin>>degree;
	double *arr;
	arr= new double[degree+1];
	


	int i=degree+1;	
	while(i>0)
	{
		i--;
		cout<<"Enter coefficient of term "<< i <<": ";
		cin>>arr[i];

	}
	i=0;
	while(i<degree+1)
	{
		cout<<arr[i]<<" ";
		i++;	
	}
	cout<<endl;
	delete[] arr;

	return arr;

}

double eval(double* poly, int degree, double x)
{

	double total;
	int i=degree+1;	
	while(i>0)
	{
		i--;
		total+=poly[i]*pow(x,i);
	}
	cout<<total<<endl;	
	return total;


}

int main()
{
	double *arr;
	arr= new double[1000];
	arr=task0();
	
	eval(arr, degree, 3);
	//delete[] arr;
	return 0;
}










