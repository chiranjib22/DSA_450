#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> arr{2, 3, 5, 6, 7};

  // use inbuilt reverse function
  // Time O(n) Space O(1)
  reverse(arr.begin(), arr.end());

  for (auto u : arr)
    cout << u << " ";
  cout << endl;
  return 0;
}