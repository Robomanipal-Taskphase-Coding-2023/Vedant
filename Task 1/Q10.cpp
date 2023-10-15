#include <iostream>
#include <vector>

using namespace std;
/*
Q10 Vedant Agarwal
Fastest way to generate Fibonacci sequence in c++(40 terms)
*/
vector<int> fibonacci(int n) {
  vector<int> fib(n);
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i < n; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  return fib;
}

int main() {

  vector<int> fib = fibonacci(40);

  for (int i = 0; i < 40; i++) {
    cout << fib[i] << " ";
  }
  cout << endl;

  return 0;
}
