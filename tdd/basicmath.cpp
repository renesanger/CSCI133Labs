#include <cassert>

int divide(int a, int b){
	assert(b!=0);
	// you dont need the if statement if (b==0) because the assertion already crashes the program.this is used for testing. if the boolean is false it crashes. used to state that we are aware of the problem and we crash it. rather than have a floating point error that gives us no information of why it is crashing. 
//unit testing vs integration testing 
	int c=a/b;
  return c;
}
