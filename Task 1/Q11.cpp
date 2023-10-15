#include<iostream>
#include<vector>
using namespace std;

/*
Q11 Vedant Agarwal
Code for recursive binary search function
*/
int binarySearch(const vector<int>& arr, int target, int low, int high) {
  if (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
      return mid;
    }


    if (arr[mid] > target) {
      return binarySearch(arr, target, low, mid - 1);
    }

 
    return binarySearch(arr, target, mid + 1, high);
  }


  return -1;
}

int main() {
  int size, target;

  cout << "Enter the size of the array: ";
  cin >> size;

  vector<int> arr(size);
  cout << "Enter the sorted elements of the array:" << endl;
  for (int i = 0; i < size; ++i) {
    cin >> arr[i];
  }

  cout << "Enter the targetted number: ";
  cin >> target;

  int result = binarySearch(arr, target, 0, size - 1);

  if (result != -1) {
    cout <<target << " found at index " << result << "." << endl;
  } else {
    cout <<target << " not found in the array." << endl;
  }

  return 0;
}
