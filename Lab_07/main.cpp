#include <iostream>
#include <fstream>
#include "imageio.h"


void change(int image[][512],int w, int h){
  for (int y=0;y<h;y++){
    for (int x=40;x<150;x++) {
      image[x][y]=200;
      
    }

  }

}


int main()
{
	task0();
	return 0;
}

void task0()
{
  int image[512][512];
  int h=512;
  int w=512;
	int n=4;
  readImage(image,w,h);
  //change(image,w,h);
	//highlight(image,w,h,30,88);
scale( image, w,  h,  n);
   writeImage("out.pgm",image,w,h);
  return;
}
