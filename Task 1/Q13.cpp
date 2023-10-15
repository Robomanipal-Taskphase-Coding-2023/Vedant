#include <iostream>
using namespace std;

/*
Q13 Vedant Agarwal
Code to calculate the sum of digits with and without recursion
*/
int sumOfDigitsWithoutRecursion(int number) {
  int sum = 0;
  while (number != 0) {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}

int sumOfDigitsWithRecursion(int number) {

  if (number < 10) {
    return number;
  }

  return number % 10 + sumOfDigitsWithRecursion(number / 10);
}

int main() {
  int number;


  cout << "Enter a non-negative integer: ";
  cin >> number;


  if (number < 0) {
    cout << "Please enter a non-negative integer." << endl;
    return 1;
  }

  int sumWithoutRecursion = sumOfDigitsWithoutRecursion(number);
  cout << "Sum of digits without recursion: " << sumWithoutRecursion << endl;

  int sumWithRecursion = sumOfDigitsWithRecursion(number);
  cout << "Sum of digits with recursion: " << sumWithRecursion << endl;

  return 0;
}
