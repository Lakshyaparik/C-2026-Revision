#include <iostream>
using namespace std;
void greet(string name = "lakshya")
{
  cout << "hello " << name << endl;
}
void print(int x)
{
  cout << x;
}
void print(int x, int y)//overloading of print fun
{
  cout << endl
       << x << y;
}
int main()
{
  // greet();
  // greet("vasu");
  print(4);
  print(3, 4);
}