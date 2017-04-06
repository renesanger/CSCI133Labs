#include <iostream>
#include <fstream>  
#include <string>

using namespace std;

int MAXCOUNTRIES=300;

	struct Country {
		string name;
		double pops[8];  // stores population in 1950, 1960,..., 2010, 2015 in order
  	};

	struct World {
    		int     numCountries;
		Country countries[300];
  	} myWorld;



int main()
{
	Country myCountry;
	ifstream population;
	population.open("population.csv");
	
	population>>skipws;
	while (!population.eof()){
		population >> myCountry.pops[0];
		population >> myCountry.pops[1];
		population >> myCountry.pops[2];
		population >> myCountry.pops[3];
		population >> myCountry.pops[4];
		getline(population,myCountry.name);
  	} 
	
	World myWorld;
	myWorld.countries[0]=myCountry;
	
	cout<<myWorld.countries[0].name<<myCountry.pops[0]<<" " <<myCountry.name<<endl;
	population.close();
	
	




}
