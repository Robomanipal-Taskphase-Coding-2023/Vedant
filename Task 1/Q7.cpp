#include <iostream>

using namespace std;

/*
Q7 Vedant Agarwal
Code to copy a string using pointers
*/

void copy(char *destination, const char *source) {
  while (*source != '\0') {
    *destination = *source;
    ++destination;
    ++source;
  }

  *destination = '\0'; 
}

int main() {
  const int size = 100;
  char source[size];
  char destination[size];

  cout << "Enter a string: ";
  cin.getline(source, size);

  copy(destination, source);

  cout << "Copied String: " << destination << endl;

  return 0;
}
