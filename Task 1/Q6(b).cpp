#include <iostream>
#include <vector>

using namespace std;

/* 
Q6(b) Vedant Agarwal
Code for Selection and Bubble sort with binary search
*/
void bubble(vector<int>& arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
    
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void selection(vector<int>& arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i) {
    int minIndex = i;
    for (int j = i + 1; j < n; ++j) {
      
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
}

int binsearch(const vector<int> &arr, int target) {
  int left = 0;
  int right = arr.size() - 1;

  while (true) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      return mid;  
    } else if (arr[mid] < target) {
      left = mid + 1;  
    } else if(arr[mid] < target){
      right = mid - 1;  
    } else{
        return -1;
    }
  }
}

int main() {
  int size, target;
  char choice;
  cout << "Enter the size of the array: ";
  cin >> size;


  vector<int> arr(size);
  cout << "Enter the elements of the array:" << endl;
  for (int i = 0; i < size; ++i) {
    cin >> arr[i];
  }

  cout << "Choose a sorting method"<<endl;
  cout << "Enter 's' for Selection Sort or 'b' for Bubble Sort: ";
  cin >> choice;

  if (choice == 's') {
    selection(arr);
  } else if (choice == 'b') {
    bubble(arr);
  } else {
    cout << "Invalid choice. Exiting program.\n";
    return 1;
  }

  cout << "Enter a number to search: ";
  cin >> target;

  int result = binsearch(arr, target);
  if (result != -1) {
    cout << "Number " << target << " found at position " << result << endl;
  } else {
    cout << "Number " << target << " not found in the array"<<endl;
  }

  return 0;
}
