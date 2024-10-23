#include <bits/stdc++.h>
using namespace std;

// time O(n), space O(1)
// function for determining the Max element
int setMax(int arr[], int n)
{
  int max = INT_MIN;
  for (int i = 0; i < n; i++)
    if (max < arr[i])
      max = arr[i];
  return max;
}

// function for determining the Min element
int setMin(int arr[], int n)
{
  int min = INT_MAX;
  for (int i = 0; i < n; i++)
    if (min > arr[i])
      min = arr[i];
  return min;
}

int main()
{
  int A[] = {4, 9, 6, 5, 2, 3};
  int n = 6;

  cout << "Maximum element is: " << setMax(A, n) << endl;
  cout << "Minimum element is: " << setMin(A, n) << endl;
  return 0;
}