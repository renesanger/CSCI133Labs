#include <iostream>
#include <fstream>  
#include <string>
#include <iomanip>
#include "lab8.h"
using namespace std;

/*
  Author: <name>
  Course: {136}
  Instructor: Rene Sanger
  Assignment: "Lab 8"

  This program does ...
	-takes a list of data from a csv file
	-inputs and reads
	-seperates the data of each country
	-sorts by population growth rate
	-prints
*/



	//prototypes and constants
	int MAXCOUNTRIES=229;

	
	//struct country that has name, growth, and population at certain years
	struct Country {
		string name;
		double pops[8];  // stores population in 1950, 1960,..., 2010, 2015 in order
		double growth;
  	};

	//struct world that holds number of countries. all countries in an array, all negative 		growth rate countries in an array, the fastest and the slowest growing countries.
	struct World {
    		int     numCountries;
		Country countries[229];
		Country negs[20];
		string fastest;
		string slowest;
  	} myWorld;



void task0()
{
	//read the file
	ifstream population;
	population.open("population.csv");

	//y1950-y2015: population in respective years
	//name: local variable for country name
	double y1950;
	double y1960;
	double y1970;
	double y1980;
	double y1990;
	double y2000;
	double y2010;
	double y2015;
	string name;
	
	//constructs each country, with respective variables of name, populations
	//inputs data into variabls using >> and getline
	//i is index of countries[]
	int i=0;
	while(population>>y1950>>y1970>>y1990>>y2010>>y2015){
		getline(population,name);
		y1960= (y1950+y1970)/2;
		y1980= (y1970+y1990)/2;
		y2000= (y1990+y2010)/2;
		myWorld.countries[i].pops[0]= y1950;
		myWorld.countries[i].pops[1]= y1960;
		myWorld.countries[i].pops[2]= y1970;
		myWorld.countries[i].pops[3]= y1980;
		myWorld.countries[i].pops[4]= y1990;
		myWorld.countries[i].pops[5]= y2000;
		myWorld.countries[i].pops[6]= y2010;
		myWorld.countries[i].pops[7]= y2015;
		myWorld.countries[i].growth=((y2015-y1960)/y1960)*100;
		myWorld.countries[i].name=name;
		i++;
  	}

	population.close();
	
}

void task1()
{
	//finds the indicies of maximum and minimum growth.
	int max=0;
	int min=0;

	//loops through all elements of countries[] finds max min indices
	for(int i=0; i<229;i++)
	{
		if(myWorld.countries[i].growth>myWorld.countries[max].growth)
		{
			max=i;
		}
		if(myWorld.countries[i].growth<myWorld.countries[min].growth)
		{
			min=i;
		}
	}

	//prints out the country's data
	cout<<"====================TASK1======================="<<endl;
	cout<<"The fastest growing country is"<<myWorld.countries[max].name<<" which grew by "<<myWorld.countries[max].growth<<"% between 1960 and 2015."<<endl;
	cout<<"The slowest growing country is"<<myWorld.countries[min].name<<" which shrunk by "<<myWorld.countries[min].growth<<"% between 1960 and 2015."<<endl;
cout<<endl;

}

void task2()
{
	int j=0;
	
	//loops through entire countries[] finds negatives growth rates and puts it in the negs array
	for(int i=0;i<229;i++)
	{
		int step=0;
		if(myWorld.countries[i].growth<=0)
		{
			myWorld.negs[j]=myWorld.countries[i];
			j++;
		}	
		
	}

	//insertion sort: takes first element and places it in the right place 
	int loop=0;
	while(loop<7)
	{
		loop++;
		for(int i=0;i<j-1;i++)
		{
			if(myWorld.negs[i].pops[7]>myWorld.negs[i+1].pops[7])
			{
				Country temp=myWorld.negs[i+1];
				myWorld.negs[i+1]=myWorld.negs[i];
				myWorld.negs[i]=temp;
			}
		}
	}
	cout<<"====================TASK2======================="<<endl;
	cout<<"The countries that shrank between 1960 and 2015 (and their 'growth' rates) are: "<<endl;
	cout<<left<<setw(20)<<" Country Name"<<"Growth percentages"<<endl;
	for(int i=0; i<7;i++)
	{
		cout<<left<<setw(20)<<myWorld.negs[i].name<<myWorld.negs[i].growth<<"%" <<endl;
	}
}













