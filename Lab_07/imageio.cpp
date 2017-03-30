/*
  Author: Alexey Nikolaev, 2015.
          Modified by Subash Shankar on Oct 29, 2016.

  Description:
    The program read a PPM file from the standard input,
    and outputs a modified PPM file through the standard output.
  
*/


#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "imageio.h"
using namespace std;

//const int MAXWIDTH = 512;
//const int MAXHEIGHT = 512;

// reads a PPM file.
// Notice that: width and height are passed by reference!
void readImage(int image[][MAXHEIGHT], int &width, int &height) {
  char c;
  int x;
  ifstream instr;
  instr.open("inImage.pgm");
  
  // read the header P2
  instr >> c;  assert(c == 'P');
  instr >> c;  assert(c == '2');

  // skip the comments (if any)
  while ((instr>>ws).peek() == '#') { instr.ignore(4096, '\n'); }

  instr >> width; 
  instr >> height;

  assert(width <= MAXWIDTH);
  assert(height <= MAXHEIGHT);
  int max;
  instr >> max;
  assert(max == 255);

  for (int row = 0; row < height; row++) 
    for (int col = 0; col < width; col++) 
      instr >> image[col][row];
  instr.close();
  return;
}

void writeImage(string fname, int image[][MAXHEIGHT], int width, int height) {
  ofstream ostr;
  ostr.open(fname.c_str());
  if (ostr.fail()) {
    cout << "Unable to write file\n";
    exit(1);
  };
  
  // print the header
  ostr << "P2" << endl;
  // width, height
  ostr << width << ' '; 
  ostr << height << endl;
  ostr << 255 << endl;

  for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {
      assert(image[col][row] < 256);
      assert(image[col][row] >= 0);
      ostr << image[col][row] << ' ';
      // lines should be no longer than 70 characters
      if ((col+1)%16 == 0) ostr << endl;
    }
    ostr << endl;
  }
  ostr.close();
  return;
}

void highlight(int image[][MAXHEIGHT],int width, int height, int t1, int t2)
{
  for (int y=0;y<height;y++){
    for (int x=40;x<150;x++) {
      
		if(image[x][y]<t1)
      			image[x][y]=0;
		else if(image[x][y]>t2)
			image[x][y]=255;
    }

  }
}

int avgColor(int image[],int n)
{
	int sum=0;
	for(int i=0; i<(n*n);i++)
	{
		sum+=image[i];
	}
	return sum/n;
}

void scale(int image[][MAXHEIGHT],int width, int height, int n)
{
	int arr[n*n];
	int mat[(n/2)][(n/2)];
  	for (int y=0;y<n;y++){
  	  for (int x=0;x<n;x++) {
		image[0][0]=avgColor(arr,n);
    }

  }
	//image=mat;
	cout<<avgColor(arr,n)<<endl;



}

















