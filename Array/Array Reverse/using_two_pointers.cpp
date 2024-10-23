#include <bits/stdc++.h>
using namespace std;

// time O(n) space 0(1)
void reverseArray(vector<int> &arr)
{
  int size = arr.size();

  // take two pointers and assign them with two end location
  int left = 0;
  int right = size - 1;

  // swap until left cross the right
  while (left < right)
  {
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    left++;
    right--;
  }
}

int main()
{
  vector<int> arr{1, 4, 5, 9, 10, 11};

  reverseArray(arr);

  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  return 0;
}