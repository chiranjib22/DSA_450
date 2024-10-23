#include <bits/stdc++.h>

using namespace std;

// time O(n), space O(log n)
pair<int, int> getMinMax(int arr[], int low, int high)
{
  pair<int, int> p, mml, mmr;
  int mid;

  // if there is only one element
  if (low == high)
  {
    p.first = arr[0];
    p.second = arr[0];
    return p;
  }

  // if there are two elements
  if (low + 1 == high)
  {
    if (arr[low] > arr[high])
    {
      p.first = arr[high];
      p.second = arr[low];
    }
    else
    {
      p.first = arr[low];
      p.second = arr[high];
    }
    return p;
  }

  // if there are more than 2 elements
  mid = (low + high) / 2;
  mml = getMinMax(arr, low, mid);
  mmr = getMinMax(arr, mid + 1, high);

  // compare minimum of two parts and store in the resulted pair
  if (mml.first < mmr.first)
    p.first = mml.first;
  else
    p.first = mmr.first;

  if (mml.second > mmr.second)
    p.second = mml.second;
  else
    p.second = mmr.second;

  return p;
}

int main()
{
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int size = sizeof(arr) / sizeof(arr[0]);

  pair<int, int> p = getMinMax(arr, 0, size - 1);
  cout << "Minimum element is : " << p.first << endl;
  cout << "Maximum element is : " << p.second << endl;

  return 0;
}