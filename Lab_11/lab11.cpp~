#include <iostream>
#include<string>
using namespace std;

bool match(char c1,char c2)
{
	if(c1=='(')
	{
		if(c2==')')
		{
			return true;
		}

	}
	if(c1=='[')
	{
		if(c2==']')
		{
			return true;
		}

	}
	if(c1=='{')
	{
		if(c2=='}')
		{
			return true;
		}

	}
	if(c1=='<')
	{
		if(c2=='>')
		{
			return true;
		}

	}

	return false;

}

bool wellFormed(string x)
{
	int n=x.length();
	int i=0;
	bool well;
	n;
	if(n>i)
	{
		well=match(x[i],x[n])&& wellFormed(x.substr(i,n));
		i++;
		n--;
	}
	return well;

//

}

int nestLevel(string s)
{



}

void numberFunction(int i) {
  cout << "The number is: " << i << endl;
  i++;
  if(i<10) {
    numberFunction(i);
  }
}



int main()
{
	string h="()";
	cout<<match(h[0],h[1])<<" "<<h.substr(0,2)<<" "<<wellFormed(h)<<endl;

	int i = 0;
	//numberFunction(i);


	return 0;
}



































