#include <iostream>
#include <stdlib.h>
using namespace std;

const int MAXSIZE = 16; 
static int values[MAXSIZE]; 
static int i; 
// bad idea to call a global variable i! 


void initArray(int[], int); void printArray(int[]);
// This initializes element arr[i] to val for each array element 



void initArray(int arr[], int val) 
{   
	for(i=MAXSIZE-1; i >= 0; i--)     
		arr[i] = val;   
	return; 
} 
// This prints the contents of the argument array, with each element printed as “index: value” on its own line // For example, a 4-element array containing {10,11,12,13} would print as: //   0: 10 //   1: 11 //   2: 12 //   3: 13      
void printArray(int arr[])
{  
	for(i=0;i<MAXSIZE;i++)
		cout<<i<<": "<<arr[i]<<endl;
	return;

};

int main(int argc, char* argv[])
{
	if(argc>3)
	{
		exit(1);
	}
	int dummy;  
	dummy=atoi(argv[1]);
	initArray(values,5);   
	int *arr2 = new int[MAXSIZE];
	for(i=0;i<MAXSIZE;i++)
		arr2[i]=values[i];   
	values[0]=9;   
	arr2[1]=8;
	cout << "value is:" <<endl;   
	printArray(values);
	cout<< endl<< "arr2 is:"<<endl;    
	printArray(arr2);     
	cout<<endl;
	
	
	std::cout <<argc<<" " << argv[0] << std::endl; 
	return 0;
};






