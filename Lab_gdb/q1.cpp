#include <iostream>
using namespace std;


/* find the smallest valueof array A of size size */
int minval(int A[], int size) {
  int currmin=0;

  for (int i=0; i<size; i++)
    if (A[i] > currmin)
      currmin = A[i];
  return currmin;
}


int main()
{
  int i,j,tmp,m;
  int array[5];
  
  
  for (i=0; i<5; i++){
    cin >> tmp;
    if (i==3)
      array[i]=tmp;
    else
      array[i]=(10*tmp);
  }
  m = minval(array,5);
  cout << "the smallist is " << m << endl;
}












