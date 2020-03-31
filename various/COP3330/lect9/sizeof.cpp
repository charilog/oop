#include <iostream>
using namespace std;

int main()
{
  int i;
  char c;
  char *ptr;
  ptr = &c;

  cout << "size of int = " << sizeof(int) << endl;
  cout << "size of int variable = " << sizeof(i) << endl;

  cout << "size of char = " << sizeof(char) << endl;
  cout << "size of char variable = " << sizeof(c) << endl;

  cout << "size of char * = " << sizeof(char *) << endl;
  cout << "size of char* variable = " << sizeof(ptr) << endl;

  cout << "size of float * = " << sizeof(float *) << endl;
  cout << "size of double * = " << sizeof(double *) << endl;
  cout << "size of void * = " << sizeof(void *) << endl;

  return 0;
}

/*
size of int = 4
size of int variable = 4
size of char = 1
size of char variable = 1
size of char * = 8
size of char* variable = 8
size of float * = 8
size of double * = 8
size of void * = 8
*/
