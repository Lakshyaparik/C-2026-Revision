#include <iostream>
using namespace std;

int main()
{
  int a, b;
  int x;
  string name;
  // cout << "write two values: " << endl;
  // cin >> a >> b;
  // cout << a + b;
  cout << "enter the number";
  cin >> x;
  cin.ignore();
  clog << "cin.ignore run";
  cout << "enter name";
  getline(cin, name);
  cout << x << name;
}