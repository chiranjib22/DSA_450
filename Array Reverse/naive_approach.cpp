#include <bits/stdc++.h>

using namespace std;

// Time O(n); Space O(n) ;
void reverseArray(vector<int> &arr)
{
  int n = arr.size();
  // create an temporary vector of n size to store element
  vector<int> temp(n);

  // copy elements from original array to temp in reverse order
  for (int i = 0; i < n; i++)
    temp[i] = arr[n - 1 - i];

  // again copy elements back to original array

  for (int i = 0; i < n; i++)
    arr[i] = temp[i];
}

int main()
{
  vector<int> arr{1, 4, 3, 2, 6, 5};

  reverseArray(arr);

  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
}