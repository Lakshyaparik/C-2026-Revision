#include <iostream>
using namespace std;
#include <cstring>
int main()
{
  char name[29];

  int num[5] = {1, 3, 4, 5, 6};

  cout << "Enter your name: ";
  // cin >> name;   only get char until space comes

  cin.getline(name, 29);
  cout << name;

  cout << strlen(name);
}