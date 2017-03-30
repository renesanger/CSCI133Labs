#ifndef iostream_H
#define IOSTREAM_H
#include <iostream>
using std::string;

const int MAXWIDTH = 512;
const int MAXHEIGHT = 512;

void readImage(int image[][MAXHEIGHT], int &widtmah, int &height);
void writeImage(string fname,int image[][MAXHEIGHT], int width, int height);
#endif
