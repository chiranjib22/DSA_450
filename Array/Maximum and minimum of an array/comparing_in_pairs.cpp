#include <bits/stdc++.h>

using namespace std;

// time O(n), space O(1)
pair<int, int> getMinMax(int arr[], int n)
{
  pair<int, int> minMax;
  int i;
  // if n is odd
  if (n % 2 != 0)
  {
    minMax.first = arr[0];
    minMax.second = arr[1];

    // loop start from 2nd element
    i = 1;
  }
  // if n is even
  else
  {
    if (arr[0] < arr[1])
    {
      minMax.first = arr[0];
      minMax.second = arr[1];
    }
    else
    {
      minMax.first = arr[1];
      minMax.second = arr[0];
    }

    // loop starts from 3rd element
    i = 2;
  }

  // pick two elements in pair and compare them with minMax.first and minMax.second
  while (i < n - 1)
  {
    if (arr[i] < arr[i + 1])
    {
      if (arr[i] < minMax.first)
        minMax.first = arr[i];
      if (arr[i + 1] > minMax.second)
        minMax.second = arr[i + 1];
    }
    else
    {
      if (arr[i] > minMax.second)
        minMax.second = arr[i];
      if (arr[i + 1] < minMax.first)
        minMax.first = arr[i + 1];
    }
    // in each iteration two elements are processed
    i += 2;
  }

  return minMax;
}

int main()
{
  int arr[] = {1000, 11, 445, 1, 330, 3000};

  int size = sizeof(arr) / sizeof(arr[0]);

  pair<int, int> p = getMinMax(arr, size);

  cout << "Minimum element is : " << p.first << endl;
  cout << "Maximum element is : " << p.second << endl;

  return 0;
}