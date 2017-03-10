#include <iostream>
#include "digits.h"
using namespace std;

int main()
{	
 	/*int fred;	
 	cout<<" input a number for sum digits"<<endl;
 	cin>>fred;

 	cout<<"sum digits of inputed num: "<<sumDigits(fred)<<endl;
 	cout<<endl;*/
  	int n=234569;
  	cout<<endl;
  	cout<<"number of digits in 24535: "<<numDigits(24535)<<endl;
 	cout<<endl;
 	cout<<"third digit in 12345: "<< getDigit(12345,3)<<endl;
 	cout<<endl;	
 	cout<<"sum of the digits in 99999999 into one number: "<<sumDigits(99999999)<<endl;
 	cout<<endl;
 	cout<<"sum of the digits in 234567 into one number: "<<sumDigits(234567)<<endl;
 	cout<<endl;
	cout<<"sum of the digits in 234565 into one number: "<<sumDigits(234569)<<endl;
 	cout<<endl;
 	cout<<"n before function call: "<< n<<endl;
 	transformNum(n);
 	cout<<endl;
 	cout<<"n after function call: "<< n<<endl;
 	cout<<endl;
	n=80;
	cout<<"n before function call: "<< n<<endl;
 	transformNum(n);
 	cout<<endl;
	 cout<<"n after function call: "<< n<<endl;
 	cout<<endl;
}
