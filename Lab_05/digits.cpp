#include <iostream>
#include "digits.h"
using namespace std;



/*   	Author: Rene Sanger  
	Course: {136}  
 	Instructor: Mike Zamansky   
	Assignment: <"Lab 5">   
	This program gets the sim of the digits in a number and 
	makes the number divisible by 9 
*/




/*
gives the number of digits
in the variable num
*/
int numDigits(int num)
{
	//count: var incremented evertyime n is divided by 10, 
	//	then returned
	
	int count=0;
	while(num>0)
	{
		num=num/10;
		count++;
	}
	return count;
}




/*
	numD is number of digits in num
	loop from 0 to index-1 and divide num by 10 that many times
	when you get to index(when it is out of the loop, get the remainder when divided by 10
	return


*/
int getDigit(int num, int index)
{
	int numD=numDigits(num);
	for(int i=0;i<index-1;i++)
	{
		num=num/10;	
	}
	num%=10;

	
	
	return num;

}

/*
	


*/

/* first loop:
	called get digit to get each digit and sum it all together

   loop 2:
	put sum into old sum so i can use it in the iteration 
	clear the sum and return new sum that is when adding the not one integer number.
*/
int sumDigits(int num)
{
	int sum = 0;
	for(int i = 1;i <= numDigits(num);i++)
	{
		sum+=getDigit(num, i);
	}
	if(sum >= 10)
	{
		return sumDigits(sum);
	}
	else
	{
		return sum;
	}
/* before recursion
	

	while(sum/10!=0)
	{
		int oldSum=sum;
		int sum=0;
		for(int i=1; i<=numDigits(oldSum);i++)
		{
			sum+=getDigit(oldSum,i);
		}
		if(sum/10<=1)
			return sum;
		
	}
*/

}

/*
	gets the remainder of n/9 and adding the difference to the sum to get a number divisible by 9
*/
void transformNum(int &n)
{
	int diff;
	int rem;
	int sum=sumDigits(n);
	int last=getDigit(n,1);
	if(last + 9 - n >= 10)
	{
		diff=9-sum;;
		n=n+diff;
	}
	else
	{
		diff=sum-9;
		n=n-diff;

	}
}









