#include <bits/stdc++.h>

using namespace std;

// time O(N) Space O(N)
void reverseArray(vector<int> &arr, int l, int r)
{
  // if left cross right than there are no sub array
  if (l >= r)
    return;

  // swap elements of left and right indices
  swap(arr[l], arr[r]);

  // recursively call the function with the sub array excluding those two element
  reverseArray(arr, l + 1, r - 1);
}

int main()
{
  vector<int> arr{2, 4, 5, 10, 11, 23};

  reverseArray(arr, 0, arr.size() - 1);

  for (auto u : arr)
    cout << u << " ";
  cout << endl;
  return 0;
}