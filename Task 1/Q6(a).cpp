#include <iostream>

using namespace std;

/* 
Q6(a) Vedant Agarwal
Code to see if two numbers are amicable
*/

int divisorsum(const int number) {
  int sum = 1;  

  for (int i = 2; i <= number / 2; ++i) {
    if (number % i == 0) {
      sum += i;
    }
  }

  return sum;
}
bool amicable(const int num1, const int num2) {
  return (divisorsum(num1) == num2) && (divisorsum(num2) == num1);
}

int main() {
  int num1, num2;

  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  if (amicable(num1, num2)) {
    cout << num1 << " and " << num2 << " are amicable numbers." << endl;
  } else {
    cout << num1 << " and " << num2 << " are not amicable numbers." << endl;
  }

  return 0;
}
