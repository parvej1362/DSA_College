#include <iostream>
using namespace std;

bool isSymmetric(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix_A[2][2];

    cout << "Enter elements of matrix A (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix_A[i][j];
        }
    }

    if (isSymmetric(matrix_A)) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is not symmetric." << endl;
    }

    return 0;
}

// Enter elements of matrix A (2x2):
// 12 
// 13
// 11 
// 14
// The matrix is not symmetric.

// Enter elements of matrix A (2x2):
// 2 
// 2
// 2 
// 2
// The matrix is symmetric.

// Enter elements of matrix A (2x2):
// 4
// 8
// 8
// 12
// The matrix is symmetric.