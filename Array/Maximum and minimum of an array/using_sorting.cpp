#include <bits/stdc++.h>
using namespace std;

// time 0(nlogn) space 0(1)
pair<int, int> getMinMax(int arr[], int n)
{
  pair<int, int> p;

  sort(arr, arr + n); // O(nlogn)

  p.first = arr[0];
  p.second = arr[n - 1];

  return p;
}

int main()
{
  pair<int, int> p;
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int size = sizeof(arr) / sizeof(arr[0]);

  p = getMinMax(arr, size);
  cout << "Minimum element is: " << p.first << endl;
  cout << "Maximum element is: " << p.second << endl;

  return 0;
}