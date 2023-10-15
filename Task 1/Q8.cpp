#include <iostream>
#include <vector>

using namespace std;

/*
Q8 Vedant Agarwal
Code for Matrix Operations and Identity verification
*/
vector<vector<int>> matrixMultiplication(const vector<vector<int>>& matrix1,
                                        const vector<vector<int>>& matrix2) {
  int rows1 = matrix1.size();
  int cols1 = matrix1[0].size();
  int rows2 = matrix2.size();
  int cols2 = matrix2[0].size();

  if (cols1 != rows2) {
    cerr << "Matrices are not compatible for multiplication." << endl;
    return vector<vector<int>>();
  }


  vector<vector<int>> result(rows1, vector<int>(cols2, 0));


  for (int i = 0; i < rows1; ++i) {
    for (int j = 0; j < cols2; ++j) {
      for (int k = 0; k < cols1; ++k) {
        result[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  return result;
}

vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
  int rows = matrix.size();
  int cols = matrix[0].size();


  vector<vector<int>> result(cols, vector<int>(rows, 0));

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      result[j][i] = matrix[i][j];
    }
  }

  return result;
}

// Function to print a matrix
void printMatrix(const vector<vector<int>>& matrix) {
  for (const auto& row : matrix) {
    for (int value : row) {
      cout << value << " ";
    }
    cout << endl;
  }
}

int main() {
  // Put Matrices A and B here
  vector<vector<int>> matrixA = {{1, 2, 3},
                                  {4, 5, 6}};
  vector<vector<int>> matrixB = {{1, 2},
                                  {3, 4},
                                  {5, 6}};

  vector<vector<int>> matrixC = matrixMultiplication(matrixA, matrixB);


  vector<vector<int>> transposeB = transposeMatrix(matrixB);
  vector<vector<int>> transposeA = transposeMatrix(matrixA);

  vector<vector<int>> leftSide = transposeMatrix(matrixC);
  vector<vector<int>> rightSide = matrixMultiplication(transposeB, transposeA);


  cout << "Matrix A:" << endl;
  printMatrix(matrixA);

  cout << "\nMatrix B:" << endl;
  printMatrix(matrixB);

  cout << "\nMatrix C (A * B):" << endl;
  printMatrix(matrixC);

  cout << "\nTranspose of B:" << endl;
  printMatrix(transposeB);

  cout << "\nTranspose of A:" << endl;
  printMatrix(transposeA);

  cout << "\n(A * B)' :" << endl;
  printMatrix(leftSide);

  cout << "\nB' * A' :" << endl;
  printMatrix(rightSide);


  if (leftSide == rightSide) {
    cout << "\nIdentity Verified: (A * B)' = B' * A"<< endl;
    } else {
        cout << "\nIdentity Not Verified." <<endl;
    }

    return 0;
}