#include <bits/stdc++.h>

using namespace std;

// time O(n) space O(1)
void reverseArray(vector<int> &arr)
{
  int n = arr.size();

  // iterate the half of vector
  for (int i = 0; i < n / 2; i++)
  {
    // swap the element with its corresponding element
    // at other half of the vector
    swap(arr[i], arr[n - 1 - i]);
  }
}
int main()
{
  vector<int> arr{1, 8, 10, 7, 5, 6};

  reverseArray(arr);

  for (auto u : arr)
    cout << u << " ";
  cout << endl;

  return 0;
}