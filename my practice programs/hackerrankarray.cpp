#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;

  int arr[n];
  cout << "Enter the no of terms";

  cin >> n;
  for (int i = 0; i <= n + 1; i++)
  {
    cout << "enter the numbers";
    cin >> arr[i];
    i = i + 1;
  }

  for (int i = n; i >= 0; i--)
  {
    cout << arr[n];
    n = n - 1;
  }

  return 0;
}