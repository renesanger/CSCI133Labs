#include <iostream>

using namespace std;


int main(){
	char letter;
	cout<<"Enter (R)ectangle, (L)owerTriangle, (T)rapezoid, (C)ircle, or (E)nd"<< endl;
	cin>>letter;
	//cin.ignore();
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
	


}


