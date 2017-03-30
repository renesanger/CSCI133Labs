#include <iostream>

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
  int image[512][512];
  int h=512;
  int w=512;
  readImage(image,w,h);
  change(image,w,h);
    writeImage("out.png",image,w,h);
  return 0;
}


