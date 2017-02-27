What is the smallest value of n for which C(n,n-1) returns an incorrect result? Explain why the results are incorrect (you don’t need to figure out the actual relevant bit patterns). 

anything less than zero for n, will give you an incorrect value.
i tried values such as C(-1,2), C(-2,2), and (-20,10)
the function C is meant to represent a combination and as stated in the specs
n! / (k! * (n-k)!), for n>=0 and 0<=k<=n
k has to be less than n and n has to be greater than zero.
in more technical terms the way I wrote the function i made the for loop end case i>1 where i is equal to n. so it it never goes in the loop and never increases the value of n!. so the denominator increases while the numerator stays at 1.


c(32,25) gives me -1
cout<<C(5,4)<<endl;


//tests
	cout<<C(10,10)<<endl;
	cout<<C(10,1)<<endl;
	cout<<C(10,11)<<endl;
	cout<<C(2,1)<<endl;
	cout<<C(32,25)<<endl;
//output
	5
	1
	10
	0
	2
	42


	cout<<C(35,25)<<endl;//float point exception around this number and higher
	cout<<C(38,25)<<endl;
	cout<<C(40,25)<<endl;

//task2

the second function is more efficient because it uses one for loop while the first 1 has 3.
the more for loops you have the longer it takes to compile and run. in this case the second function is more time efficient.


//task 3 
i made an optimiztion code to simplify multiplication. by comparing n-k with k and taking the smaller value.

 
//task 4

the fourth task is most efficient for one thing it uses one for loop and one formula making it both easy to understand and fast to run and compile.
i tested this with larger values of n and k and it still worked.
task 4 uses doubles causing the result to be more accurate using decimal point.


c4(100,3) = 161700
c4(50,3) = 19600

