#include <iostream>

using namespace std;

void foo(const int x) 
{
  x = 100;
}

void foo1(const int & x)
{
  x = 200;
}

int main()
{
  int i;
  i = 1;
  foo(i);
  cout << "i value after foo(i) (by value) is " << i << endl;
  
  foo1(i);
  cout << "i value after foo1(i) (by reference) is " << i << endl;
  return 0;
}
