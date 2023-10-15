#include <iostream>
#include <vector>

using namespace std;

/* Q2 Vedant Agarwal 
Function to multiply two matrices
*/
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
  size_t rows1 = matrix1.size();
  size_t cols1 = matrix1[0].size();
  size_t rows2 = matrix2.size();
  size_t cols2 = matrix2[0].size();

  if (cols1 != rows2) {
    cerr << "Matrices are not compatible for multiplication." << endl;
    return vector<vector<int>>(); 
  }

 
  vector<vector<int>> result(rows1, vector<int>(cols2, 0));


  for (size_t i = 0; i < rows1; ++i) {
    for (size_t j = 0; j < cols2; ++j) {
      for (size_t k = 0; k < cols1; ++k) {
        result[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  return result;
}


void print(const vector<vector<int>>& matrix) {
  for (const auto &row : matrix) {
    for (int value : row) {
      cout << value << " ";
    }
    cout << endl;
  }
}

int main() {
  size_t rows1, cols1, rows2, cols2;

  cout << "Enter the number of rows and columns for the first matrix: ";
  cin >> rows1 >> cols1;

  vector<vector<int>> matrix1(rows1, vector<int>(cols1));

  cout << "Enter the elements of the first matrix:" << endl;
  for (size_t i = 0; i < rows1; ++i) {
    for (size_t j = 0; j < cols1; ++j) {
      cin >> matrix1[i][j];
    }
  }

  cout << "Enter the number of rows and columns for the second matrix: ";
  cin >> rows2 >> cols2;

  vector<vector<int>> matrix2(rows2, vector<int>(cols2));

  cout << "Enter the elements of the second matrix:" << endl;
  for (size_t i = 0; i < rows2; ++i) {
    for (size_t j = 0; j < cols2; ++j) {
      cin >> matrix2[i][j];
    }
  }

  // 2-Dimensional result
  vector<vector<int>> result = multiplyMatrices(matrix1, matrix2);

  if (!result.empty()) {
    cout << "Resultant matrix after multiplication:" << endl;
    print(result);
  }

  return 0;
}