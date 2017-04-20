
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "bot.h"
#include "screen.h"

/*
  Author: Rene Sanger
  Course: {136}
  Instructor: Raffi
  Assignment: "project 2"

  This program does ...
	-takes a list of data from a csv file
	-inputs and reads
	-seperates the data of each country
	-sorts by population growth rate
	-prints
*/


using namespace std;

int ROWS;
int COLS;
int mem[100][100];
int iter = 0;
int hitR;
int hitC;
bool prevHit=false;
bool prevSunk=true;
bool prevMiss=false;
bool hitsunk=false;
bool found=false;
int direction=0;
int histroy[20];
int step=0;
int lastDir=3;


/* Initialization procedure, called when the game starts:

   init (rows, cols, num, screen, log) 
 
   Arguments:
    rows, cols = the boards size
    num        = the number of ships 
    screen     = a screen to update your knowledge about the game
    log        = a cout-like output stream
*/
void init(int rows, int cols, int num, Screen &screen, ostream &log) 
{
  ROWS = rows;
  COLS = cols;
  log << "Start." << endl;
}


/* The procedure handling each turn of the game:
 
   next_turn(sml, lrg, num, gun, screen, log)
 
   Arguments:
    sml, lrg = the sizes of the smallest and the largest ships that are currently alive
    num      = the number of ships that are currently alive
    gun      = a gun.
               Call gun.shoot(row, col) to shoot: 
                  Can be shot only once per turn. 
                  Returns MISS, HIT, HIT_N_SUNK, ALREADY_HIT, or ALREADY_SHOT.
    screen   = a screen to update your knowledge about the game
    log      = a cout-like output stream
*/
void next_turn(int sml, int lrg, int num, Gun &gun, Screen &screen, ostream &log)
{

	
  	//int maxsize=ROWS*COLS+lrg*num;


	int r = rand() % ROWS;
  	int c = rand() % COLS;
  


  	log << "Smallest: " << sml << " Largest: " << lrg << ". ";


	/*for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			if(mem[i][j]!=0 && mem[i][j]!=1 && mem[i][j]!=2)
				mem[i][j]=-1;
		}
	}*/
	if(found)
	{
		step++;
		
		//up
		if(prevMiss)
		{
			direction++;
			step=1;
		}
		

		if(direction==0)
		{
			r=hitR+step;
			c=hitC;
		
			if((hitR+step)>ROWS-1)
			{
				direction=1;
				step=1;
			}
			if(mem[r][c]>0)
			{
				direction=1;
				step=1;
			}
		}		
		if(direction==1)
		{
			//up
			r=hitR-step;
			c=hitC;
			if ((hitR-step)<0)
			{
				direction=2;
				step=1;
			}
			if(mem[r][c]>0)
			{
				direction=2;
				step=1;
				
			}
		}
		if(direction==2)
		{
		
			//left
			r=hitR;
			c=hitC-step;
			if((hitC-step)<0)
			{
				direction=3;
				step=1;
			}
			if(mem[r][c]>0)
			{
				direction=3;
				step=1;
			}
		}
		if(direction==3)
		{
			//right
			r=hitR;
			c=hitC+step;
			if((hitC+step)>COLS-1)
			{
				direction=2;
				step=1;
			}
			if(mem[r][c]>0)
			{
				direction=0;
				step=1;
			}	
		}
		if(direction==2)
		{
		
			//left
			r=hitR;
			c=hitC-step;
			if((hitC-step)<0)
			{
				direction=3;
				step=1;
			}
			if(mem[r][c]>0)
			{
				direction++;
				step=1;
			}
		}
		lastDir=direction;
	}
	if(!found)
	{

		//if last direction was vertical
		if(lastDir ==0 ||lastDir ==1)
		{
			r=hitR;
			c=hitC+2;
			if(mem[r][c]>0 || c>COLS-1)
			{
				c=hitC-2;
			}
	
		}
		//if last direction was horizontal
		if(lastDir ==2 ||lastDir ==3)
		{
			r=hitR+2;
			c=hitC;
			if(mem[r][c]>0 || r> ROWS-1)
			{
				r=hitR-2;
			}
		}

	}
	while(mem[r][c]>0 || c<0 ||r<0 ||c>COLS-1||r>ROWS-1)
	{
		r=rand()%ROWS;
		c=rand()%COLS;
	}



	if(!found)
	{
	int i= r;
	int j= r;
	int a;
	int b;
	bool toosmall=false;
	int longest;
	int widest;
	


	while(mem[i][c]<3 && i<ROWS)
	{
		i++;
	}
	while(mem[j][c]<3 && j>=0)
	{
		j--;
	}
	longest= i-j-1;	

	
	a= c;
	b= c;
	while(mem[r][a]<3 && a<COLS)
	{
		a++;
	}
	while(mem[r][b]<3 && b>=0)
	{
		b--;
	}
	widest= a-b-1;



	while(((longest<sml)&&(widest<sml)) || mem[r][c]>0 || c<0 ||r<0 ||c>COLS-1||r>ROWS-1)
	{
		r=rand()%ROWS;
		c=rand()%COLS; 
		i=r;
		j=r;
		while(mem[i][c]<3 && i<ROWS)
		{
			i++;
		}
		while(mem[j][c]<3 && j>=0)
		{
			j--;
		}
		if(b==0)
		{
			longest= i-j;	
		}
		else
		{
			longest= i-j-1;	

		}
	
		a= c;
		b= c;
		while(mem[r][a]<3 && a<COLS)
		{
			a++;
		}
		while(mem[r][b]<3 && b>0)
		{
			b--;
		}
		if(b==0)
		{
			widest= a-b;
		}
		else
		{
			widest= a-b-1;
		}
	}

	}
	


	result res=gun.shoot(r, c);
	
	

		

		
 	// add result on the screen res
	if (res == HIT)
    		{
      			screen.mark(r, c, '@', GREEN); 
      			mem[r][c]=1;


			if(!found)
			{
				hitR=r;
				hitC=c;
			}
			prevMiss=false;
			prevHit=true;
			prevSunk=false;
			found=true;
    		}
    
  	else 
    		if (res == HIT_N_SUNK)
    		{
      			screen.mark(r, c, 'S', RED); 
      			mem[r][c]=2;



			if(direction==0)
			{
				

				int jump=r-1;
				while(mem[jump][c]==1)
				{
					mem[jump][c+1]=3;
					screen.mark(jump, c+1, 'x', BLUE); 
					mem[jump][c-1]=3;
					screen.mark(jump, c-1, 'x', BLUE); 
					jump--;
					
				}
			
				mem[jump][c]=3;
				screen.mark(jump, c, 'x', BLUE); 

					
			}

			if(direction==1)
			{
				

				int jump=r+1;
				while(mem[jump][c]==1)
				{
					mem[jump][c+1]=3;
					screen.mark(jump, c+1, 'x', BLUE); 
					mem[jump][c-1]=3;
					screen.mark(jump, c-1, 'x', BLUE); 
					jump++;
				}

				//loop down if sunk is in the middle
				jump=r-1;
				while(mem[jump][c]==1)
				{
					mem[jump][c+1]=3;
					screen.mark(jump, c+1, 'x', BLUE); 
					mem[jump][c-1]=3;
					screen.mark(jump, c-1, 'x', BLUE); 
					jump--;
					
				}
			}

			if(direction==2)
			{
				

				int jump=c+1;
				while(mem[r][jump]==1)
				{
					mem[r+1][jump]=3;
					screen.mark(r+1, jump, 'x', BLUE); 
					mem[r-1][jump]=3;
					screen.mark(r-1, jump, 'x', BLUE); 
					jump++;
				}
				
				mem[r][jump]=3;
				screen.mark(r, jump, 'x', BLUE); 
						
			}

			if(direction==3)
			{
				

				int jump=c-1;
				while(mem[r][jump]==1)
				{
					mem[r+1][jump]=3;
					screen.mark(r+1, jump, 'x', BLUE); 
					mem[r-1][jump]=3;
					screen.mark(r-1, jump, 'x', BLUE); 
					jump--;
				}
			
				jump=c+1;
				while(mem[r][jump]==1)
				{
					mem[r+1][jump]=3;
					screen.mark(r+1, jump, 'x', BLUE); 
					mem[r-1][jump]=3;
					screen.mark(r-1, jump, 'x', BLUE); 
					jump++;
				}
			}


			//marks everything around sunk 's' as miss
			if(mem[r-1][c]!=1)
			{
				mem[r-1][c]=3;
				screen.mark(r-1, c, 'x', BLUE); 
			}
			if(mem[r][c+1]!=1)
			{
				mem[r][c+1]=3;
				screen.mark(r, c+1, 'x', BLUE); 
			}
			if(mem[r][c-1]!=1)
			{
				mem[r][c-1]=3;
				screen.mark(r, c-1, 'x', BLUE); 
			}
			if(mem[r+1][c]!=1)
			{
				mem[r+1][c]=3;
				screen.mark(r+1, c, 'x', BLUE); 
			}


			prevHit=false;
			prevSunk=true;
			prevMiss=false;
			found=false;
			step=0;
			direction=0;
    		}
  	else 
    		if (res == MISS)
	{
    		screen.mark(r, c, 'x', BLUE); 
    		mem[r][c]=3;




		prevHit=false;
		prevMiss=true;
  	}

	log << "Shoot at " << r << " " << c  <<endl;
	iter += 1;
}








