#include <iostream>
#include <vector>

using namespace std;

/*
Q3 Vedant Agarwal
Code to replace rows and columns with zeroes
*/
void replace(vector<vector<int>>& matrix) {
  size_t rows = matrix.size();
  size_t cols = matrix[0].size();

  vector<bool> zeroRows(rows, false);
  vector<bool> zeroCols(cols, false);


  for (size_t i = 0; i < rows; ++i) {
    for (size_t j = 0; j < cols; ++j) {
      if (matrix[i][j] == 0) {
        zeroRows[i] = true;
        zeroCols[j] = true;
      }
    }
  }

  // Replacing rows
  for (size_t i = 0; i < rows; ++i) {
    if (zeroRows[i]) {
      for (size_t j = 0; j < cols; ++j) {
        matrix[i][j] = 0;
      }
    }
  }

  // Replacing columns
  for (size_t j = 0; j < cols; ++j) {
    if (zeroCols[j]) {
      for (size_t i = 0; i < rows; ++i) {
        matrix[i][j] = 0;
      }
    }
  }
}

// Function to print a matrix
void print(const vector<vector<int>>& matrix) {
  for (const auto& row : matrix) {
    for (int value : row) {
      cout << value << " ";
    }
    cout << endl;
  }
}

int main() {
  size_t rows, cols;
  cout << "Enter the number of rows and columns of the matrix: ";
  cin >> rows >> cols;

  vector<vector<int>> matrix(rows, vector<int>(cols));

  cout << "Enter the elements of the matrix:" << endl;
  for (size_t i = 0; i < rows; ++i) {
    for (size_t j = 0; j < cols; ++j) {
      cin >> matrix[i][j];
    }
  }

  replace(matrix);

  cout << "The matrix after replacing rows and columns with zeroes:" << endl;
  print(matrix);

  return 0;
}
