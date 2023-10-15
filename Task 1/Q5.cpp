#include <iostream>

using namespace std;
/*
Q5 Vedant Agarwal 
Code for decimal to other conversions
*/
int d2h(int d) {
  int h = 0;
  int p = 1;
  while (d > 0) {
    int r = d % 16;
    h += r * p;
    d /= 16;
    p *= 10;
  }
  return h;
}

int d2o(int d) {
  int o = 0;
  int p = 1;
  while (d > 0) {
    int r = d % 8;
    o += r * p;
    d /= 8;
    p *= 10;
  }
  return o;
}

int d2b(int d) {
  int b = 0;
  int p = 1;
  while (d > 0) {
    int r = d % 2;
    b += r * p;
    d /= 2;
    p *= 10;
  }
  return b;
}

int main() {
  int decimal;
  cout << "Enter a decimal number: ";
  cin >> decimal;

  int hexanum = d2h(decimal);
  int octalnum = d2o(decimal);
  int binarynum = d2b(decimal);

 
  cout << "Hexadecimal: " << hexanum << endl;
  cout << "Octal: " << octalnum << endl;
  cout << "Binary: " << binarynum << endl;

  return 0;
}
