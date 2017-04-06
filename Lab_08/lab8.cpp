#include <iostream>
#include <fstream>  
#include <string>

using namespace std;

void tak0();
void tak1();
int MAXCOUNTRIES=229;

	struct Country {
		string name;
		double pops[8];  // stores population in 1950, 1960,..., 2010, 2015 in order
		double growth;
  	};

	struct World {
    		int     numCountries;
		Country countries[229];
		string fastest;
		string slowest;
  	} myWorld;

	struct negs {
		double array[]
		
	}


void task0()
{
	ifstream population;
	population.open("population.csv");
	double y1950;
	double y1960;
	double y1970;
	double y1980;
	double y1990;
	double y2000;
	double y2010;
	double y2015;
	string name;
	
	
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
		myWorld.countries[i].growth=(y2015-y1960)/y1960;
		myWorld.countries[i].name=name;
		i++;
  	}

	population.close();
	
}

void task1()
{
	int max=0;
	int min=0;
	//cout<<myWorld.countries[2].growth<<" "<<endl;
	for(int i=0; i<229;i++)
	{
		//min=myWorld.countries[5].growth;
	
		//cout<<myWorld.countries[i].name<<endl;
		//if(myWorld.countries[i].growth>myWorld.countries[i+1].growth)
			
		if(myWorld.countries[i].growth>myWorld.countries[max].growth)
		{
			max=i;
		}
		if(myWorld.countries[i].growth<myWorld.countries[min].growth)
		{
			min=i;
		}
	}
cout<<myWorld.countries[max].name<<myWorld.countries[min].name<<" "<<endl;



}

void task2()
{
	for(int i=


}

int main()
{
	task0();
	task1();
	task2();
}













