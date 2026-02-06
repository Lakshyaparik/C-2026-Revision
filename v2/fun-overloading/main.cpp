#include <iostream>
using namespace std;

int fun(int x, int y)
{
  return x + y;
}
int fun(int x, int y, int z) // fun overloading with diff parameters
{
  return x - y - z;
}
double fun(double x, double y) // fun overloading with different data type
{
  return x + y;
}
int main()
{
  cout << fun(2, 4);
  cout << fun(2.4, 4.5);
}