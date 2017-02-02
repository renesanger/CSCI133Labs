#include <iostream>
#include <ctime>
#include <string>
using namespace std;

/*
  Author: Rene Sanger
  Course: {135,136}
  Instructor: Mike Zamansky
  Assignment: "Lab 1"

  This program does ...
*/

int main() {
	time_t t;
	struct tm *now;
	t = time(0);           //get current time                      
	now = localtime(&t);     // adjust for local timezone
	int hour = now->tm_hour; // retrieve current hour
	int min = now->tm_min;   // retrieve current min
	
	int cur_hour;
	int cur_min;
	string tod; //time of day ==> tod
	cout<<"Enter the hours part of today's sunset time (4-9):";
	cin >> cur_hour;
	cout<<"Enter the minutes part of today's sunset time (0-59):";
	cin>> cur_min;
	cur_hour+=12;
	string greet;
	if(hour<12)
		greet="Good Morning Mr.Zamansky";
	else if(hour>12 && hour<cur_hour)
		greet="Good Afternoon Mr.Zamansky";
	else if(hour==cur_hour && min<cur_min)
		greet="Good Afternoon Mr.Zamansky";
	else if (hour==cur_hour && min>=cur_min)
		greet="Good Evening Mr.Zamansky";
	else if (hour>cur_hour)
		greet="Good Evening Mr.Zamansky";		
	cout << greet << endl;
	
	int home_min;
	int HH;
	int MM;
	cout<< "How many minutes from now do you expect to be home?";
	cin >> home_min;
	HH=hour;
	MM=min+home_min;
	
	MM%=60;
	
	cout<< "You will get home at " << HH << ":" << MM << endl;
	
}






