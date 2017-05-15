#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

/*
  Author: Rene
  Course: 136
  Instructor: Mike Zamansky
  Assignment: "lab12"

	this program initializes an array with a a specific value 
	and modifies an element based on arguments given to main.
*/


const int MAXSIZE = 16; 
static int values[MAXSIZE]; 
static int i; 
// bad idea to call a global variable i! 


void initArray(int[], int); 
void printArray(int[]);
// This initializes element arr[i] to val for each array element 


/*
-It was weird to me how not all the elements in the array were intialized to the value 5, but instead was initialized to the default 0.
-this made me take a look at the for loop when setting the values to 5.
-it was an off by one error, fence post error, 
-changed it to i=MAXSIZE-1 and it worked correctly


the reason the program was allowed to run with MAXSIZE and not MAXSIZE-1 is because when the function accessed the 16th element of the array, it modified the adjacent memory location in something that is called buffer overflow. it accesses something that is not supposef to be accessible.
*/
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
	{	
		cout<<setw(3)<<right<<i<<": ";
		cout<<setw(5)<<right<<arr[i]<<endl;
	}
	return;

};

int main(int argc, char* argv[])
{
	if(argc>3)
	{exit(1);}

	int dummy;
	int index;
 

/*
	convert c-string to integer using atoi()
*/
	if(argc>1) 
	{dummy=atoi(argv[1]);}
	else
	{dummy=0;}
	
	if(argc>2) 
	{index=atoi(argv[2]);}
	else
	{index=0;}

//if the index tries to access something out of the array 
	if(index>15)
	{index=0;}

/*
-the next thing i noticed was that vallues array and arr2 array were pointing to the same object.
it was a shallow copy instead of a deep copy where arr2 does not have its own set of elements.
-made a dynamic array
*/
	initArray(values,dummy);   
	int *arr2 = new int[MAXSIZE];

	//deep copy
	for(i=0;i<MAXSIZE;i++)
	{arr2[i]=values[i];}

	values[index]=9;   
	arr2[1]=8;
	cout << "value is:" <<endl;   
	printArray(values);
	cout<< endl<< "arr2 is:"<<endl;    
	printArray(arr2);     
	cout<<endl;
	
	//cout <<argc<<" " << argv[0] << endl; 
	
	delete[] arr2;
	arr2=NULL;
	return 0;
};






