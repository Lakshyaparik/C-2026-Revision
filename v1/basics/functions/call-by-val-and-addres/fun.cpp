#include <iostream>
using namespace std;
int changeval(int x)
{
  x = 100;
}
int changeadd(int x)
{
  x = 100;
}
void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
int main()
{
  int a = 10;
  int b = 10;
  changeval(a); // call by value
  // cout << a;
  changeadd(b); // call by address
  cout << b;

  int x = 2;
  int y = 5;
  swap(x, y);
  cout <<endl << x << y;
}