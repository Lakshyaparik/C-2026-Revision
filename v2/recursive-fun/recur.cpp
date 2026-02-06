#include <iostream>
using namespace std;

void printrev(int x)
{
  if (x == 0)
    return;
  else
    cout << x << " ";
  printrev(x - 1);
}

void print(int x)
{
  if (x == 0)
    return;
  else
    print(x - 1);
  cout << x << " ";
}

int main()
{
  // print(3);
  printrev(3);
}