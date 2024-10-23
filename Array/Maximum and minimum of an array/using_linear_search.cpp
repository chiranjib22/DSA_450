#include <bits/stdc++.h>
using namespace std;

// time O(n), space O(1)
pair<int, int> getMinMax(int arr[], int n)
{
  pair<int, int> p;
  if (n == 1)
  {
    p.first = arr[0];
    p.second = arr[0];
  }
  else
  {
    if (arr[0] < arr[1])
    {
      p.first = arr[0];
      p.second = arr[1];
    }
    else
    {
      p.first = arr[1];
      p.second = arr[0];
    }
    for (int i = 2; i < n; i++)
    {
      if (p.first > arr[i])
        p.first = arr[i];
      else if (p.second < arr[i])
        p.second = arr[i];
    }
  }
  return p;
}

int main()
{
  pair<int, int> p;
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int size = sizeof(arr) / sizeof(arr[0]);

  p = getMinMax(arr, size);
  cout << "Minimum element is : " << p.first << endl;
  cout << "Maximum element is : " << p.second << endl;
  return 0;
}