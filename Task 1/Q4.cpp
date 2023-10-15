#include <iostream>
#include <vector>

using namespace std;

/* 
Q4 Vedant Agarwal 
Code to check if a number is a hill number
*/
bool hillnum(int number) {
  vector<int> digits;
  while (number > 0) {
    digits.push_back(number % 10);
    number /= 10;
  }

  size_t size = digits.size();

  bool ascending = true;
  bool descending = false;

  for (size_t i = 1; i < size; ++i) {
    if (digits[i] == digits[i - 1]) {
      return false;  // Consecutive digits are not allowed
    }

    if (ascending && digits[i] < digits[i - 1]) {
      ascending = false;
      descending = true;
    }

    if (descending && digits[i] > digits[i - 1]) {
      return false;  // Hill structure is violated
    }
  }

  return descending;  // Should end in a descending slope to be a hill number
}

int main() {
  int number;

  cout << "Enter a number: ";
  cin >> number;

  if (hillnum(number)) {
    cout << "The number is a Hill Number." << endl;
  } else {
    cout << "The number is Not a Hill Number." << endl;
  }

  return 0;
}
