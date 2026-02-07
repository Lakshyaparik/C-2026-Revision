#include <iostream>
using namespace std;

void fun(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5}; // arr is base address

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i];
  }
  fun(arr, 5);
}