#include <iostream>
#include <ctime>
#include <string>
using namespace std;

/*
  Author: Rene Sanger
  Course: {135,136}
  Instructor: Mike Zamansky
  Assignment: "Lab 1", part b

  This program does ...
	>>>This program takes in the input sunset time and
	compares it to the currtent time to determine 
	what time of the day it is whether it is morning,
	afternoon, or evening.
	>>>It also computes the time you will arrive at home 
	by adding the input estimate to the current time
	>>>All times are converted to 12 hour format

	***TEST CASES***
	CHANGING INPUTS
	-Change Sunset times: 
		make sunset before, during, after current time
		(I did this to see if the greetings were working properly
		 Checking if morning,afternoon, evening is the proper output.
		 I changed this because I couldnt change the current time. also 
		chose out of range and negative numbers)
		SPECIFIC TEST: (5,50) (12,0) (0,0) (24, 1000)
	-Change the time expected to get home
		have a small number less than an hr
		have a big number more than an hour
		have a massive number
		have a number when added will make expected time to be midnight
		(I did this to see if the time would be displayed accurately in
		 12 hour format and not end up having a num like 171:18 and to test
		 changes in AM and PM. also to test if 12midnight is displayed as 12 or 0)
		SPECIFIC TEST: 58 (hour= 11:02PM), 900, 1000, 60, 5, -30, -50
*/

int main() {
	time_t t;
	struct tm *now;
	t = time(0);           //get current time                      
	now = localtime(&t);     // adjust for local timezone
	int hour = now->tm_hour; // retrieve current hour
	int min = now->tm_min;   // retrieve current min
	
	//get sunset time in 12 o'clock format
	int cur_hour;
	int cur_min;
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
	
		
	//HH is hr you'll be at home, MM is minute you'll be at home
	//add current time to time it takes to get home
	int home_min;
	int HH;
	int MM;
	cout<< "How many minutes from now do you expect to be home?";
	cin >> home_min;
	HH=hour;
	int home_hr= home_min/60;
	int home_rem= home_min%60;
	HH+=home_hr;
	if(home_rem>=(60-min))
		HH+=1;
	MM=min+home_rem;
	MM%=60;

	//declaring the string that means "timeOfDay" as AM or PM
	string tod="AM";
	if ((HH/12)%12==1)
		tod="PM";

	//make 12 o'clock format
	HH%=12;

	//fills in a zero for single digits
	string fill="";
	if (MM<10)
		fill="0";

	if(HH==0)
		HH=12;
	
	//output time to be at home
	cout<< "You will get home at " << HH << ":" << fill<< MM << " " << tod << endl;
	
}






