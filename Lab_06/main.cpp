#include <iostream>
#include <string>
#include <math.h>
#include "shapes.h"
using namespace std;

/*
int main()
{
  int i;
  //cin >> i ;
  /* cin will send a value into i and also return a status code. Recall that 
     0 = false and anything else is true so, since i is an int, this loop will 
     run until cin gets an int
  /
  while (!(cin >> i)){  // 
    cin.clear();  // clear the error flag so it works next time through
    cin.ignore(); // clear the buffer so it works next time through
    cout << "ERROR" << endl;// simple error message   
  }
  cout << i << endl;

  return 0;
}
*/
int main(){
	
	char letter;
	//cin>>letter;
	//cin.ignore();
	cout<<"Enter (R)ectangle, (L)owerTriangle, (T)rapezoid, (C)ircle, or (E)nd"<< endl;
	while(!(letter=='r'|| letter=='R'))
	{
		cin>>letter;
		//cin.clear();
		//cin.ignore();
		//cout << "ERROR" << endl;// simple error message 
		cout<<letter<<endl;;
	
	}/*
	if(letter=='r' || letter=='R')
	{
		int w;
		int l;
		cout<<"input width parameter"<<endl;
		cin>>w;
		cout<<"input length parameter"<<endl;
		cin>>l;
		cout<<rect(w,l)<<endl;
	}
	if(letter=='l' || letter=='L')
	{
		int side;
		cout<<"input side parameter"<<endl;
		cin>>side;
		cout<<tri1(side)<<endl;
	}
	if(letter=='t' || letter=='T')
	{
		int h;
		int b;
		cout<<"input height parameter"<<endl;
		cin>>h;
		cout<<"input base parameter"<<endl;
		cin>>b;
		cout<<trap(h,b)<<endl;
	}
	if(letter=='c' || letter=='C')
	{
		int r;
		cout<<"input radius parameter"<<endl;
		cin>>r;
		cout<<circle(r)<<endl;
	}

	
	/*
	if(letter=='e' || letter=='E')
	{
		int w;
		int l;
		cout<<"input width parameter"<<endl;
		cin>>w;
		cout<<"input length parameter"<<endl;
		cin>>l;
		cout<<rect(w,l)<<endl;
	}

	*/

}



