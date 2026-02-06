#include <iostream>
using namespace std;

inline int mul(int x)
{
  return x * x;
}

int main()
{
  cout << mul(4); // compiler puts defination here mul = x*x;
}