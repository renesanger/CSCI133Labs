#ifndef iostream_H
#define IOSTREAM_H
#include <iostream>
using std::string;

const int MAXWIDTH = 512;
const int MAXHEIGHT = 512;

void task0();
void highlight(int image[][MAXHEIGHT],int width, int height, int t1, int t2);
int avgColor(int image[],int n);
void scale(int image[][MAXHEIGHT],int width, int height, int n);
void readImage(int image[][MAXHEIGHT], int &widtmah, int &height);
void writeImage(string fname,int image[][MAXHEIGHT], int width, int height);
#endif
