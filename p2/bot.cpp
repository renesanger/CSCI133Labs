
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "bot.h"
#include "screen.h"

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
		int step=1;
		//down
		if(prevHit && hitR!=ROWS && step==0)
		{
			step++;
		
		}
		//up
		else if(prevMiss)
		{
			//direction++;
		}



		if(direction==0)
		{
			r=hitR+1;
			c=hitC;
		}		
		if(direction==1)
		{
			//up
			r=hitR-1;
			c=hitC;

		}
		if(direction==2)
		{
		
			//left
			r=hitR;
			c=hitC-1;
		}
		if(direction==3)
		{
			//right
			r=hitR;
			c=hitC+1;
		}
	}
	while(mem[r][c]>0)
	{
		r=rand()%ROWS;
		c=rand()%COLS;
	}
	result res=gun.shoot(r, c);
	
	

		

		
 	// add result on the screen res
	if (res == HIT)
    		{
      			screen.mark(r, c, '@', GREEN); 
      			mem[r][c]=1;
			hitR=r;
			hitC=c;
			prevHit=true;
			prevSunk=false;
			found=true;
    		}
    
  	else 
    		if (res == HIT_N_SUNK)
    		{
      			screen.mark(r, c, 'S', RED); 
      			mem[r][c]=2;

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

			/*later on i will make this into a loop*/
			bool done=false;



			/*

			if(mem[r-4][c]==1 && !done)
			{
				mem[r-4][c-1]=3;
				screen.mark(r-3, c-1, 'x', BLUE); 
				mem[r-4][c+1]=3;
				screen.mark(r-3, c+1, 'x', BLUE); 
			}
			if(mem[r-3][c]==1 && !done)
			{
				mem[r-3][c-1]=3;
				screen.mark(r-3, c-1, 'x', BLUE); 
				mem[r-3][c+1]=3;
				screen.mark(r-3, c+1, 'x', BLUE); 
			}
			if(mem[r-2][c]==1 && !done)
			{
				mem[r-2][c-1]=3;
				screen.mark(r-2, c-1, 'x', BLUE); 
				mem[r-2][c+1]=3;
				screen.mark(r-2, c+1, 'x', BLUE); 
			}*/
			if(mem[r-1][c]==1 && !done)
			{
				mem[r-1][c-1]=3;
				screen.mark(r-1, c-1, 'x', BLUE); 
				mem[r-1][c+1]=3;
				screen.mark(r-1, c+1, 'x', BLUE); 
			}
			if(mem[r+1][c]==1 && !done)
			{
				mem[r+1][c-1]=3;
				screen.mark(r+1, c-1, 'x', BLUE); 
				mem[r+1][c+1]=3;
				screen.mark(r+1, c+1, 'x', BLUE); 
			}
			int a=r-1;
			int b=c-1;
			while(mem[a][b]==1)
			{	
				
				mem[a][b-1]=3;
				screen.mark(a, b-1, 'x', BLUE); 
				mem[a][b+1]=3;
				screen.mark(a, b+1, 'x', BLUE); 
				a--;
	
			}
			prevHit=false;
			prevSunk=true;
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








