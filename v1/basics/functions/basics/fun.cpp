#include <iostream>
using namespace std;
int sub(int, int);
int addfun(int x, int y)
{
  return x + y;
}

bool evenornot(int val)
{
  return val % 2 == 0;
}

int main()
{
  int result = addfun(2, 4);
  // cout << result;
  int a = evenornot(2);
  // cout << a;

  cout << sub(7, 2);
}

int sub(int x, int y)
{
  return x - y;
}