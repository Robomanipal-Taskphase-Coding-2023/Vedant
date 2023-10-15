#include<iostream>
using namespace std;

/*
Q12 Vedant Agarwal
Recursive function to calculate the factorial of a number
*/
unsigned long long factorial(int n) {

  if (n == 0) {
    return 1;
  }

  return static_cast<unsigned long long>(n) * factorial(n - 1);
}

int main() {
  int number;

 
  cout << "Enter a non-negative integer: ";
  cin >> number;

  if (number < 0) {
    cout << "Please enter a non-negative integer." << endl;
    return 1;
  }
  unsigned long long result = factorial(number);
  cout << "Factorial of " << number << " is: " << result << endl;

  return 0;
}
