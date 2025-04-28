#include <iostream>
using namespace std;
int main(){
    int matrix1[2][2], matrix2[2][2], result[2][2], choice;
    cout << "Enter elements of matrix 1: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of matrix 2: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix2[i][j];
        }
    }

    do {
        cout << "\nChoose operation you want to perform:\n";
        cout << "1.Addition of matrices\n";
        cout << "2.Substraction of matrices\n";
        cout << "3.Multiplication of matrices\n";
        cout << "4.Transpose of matrix 1\n";
        cout << "5.Transpose of matrix 2\n";
        cout << "6.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nAddition of matrices:\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        result[i][j] = matrix1[i][j] + matrix2[i][j];
                    }
                }
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
                break;

            case 2: 
                cout << "\nSubstraction of matrices:\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        result[i][j] = matrix1[i][j] - matrix2[i][j];
                    }
                }
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3: 
                cout << "\nMultiplication of matrices:\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        result[i][j] = 0;
                        for (int k = 0; k < 2; k++) {
                            result[i][j] += matrix1[i][k] * matrix2[k][j];
                        }
                    }
                }
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            case 4: 
                cout << "\nTranspose of matrix 1:\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        result[j][i] = matrix1[i][j];
                    }
                }
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
                break;

            case 5: 
                cout << "\nTranspose of matrix 2:\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        result[j][i] = matrix2[i][j];
                    }
                }
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            
            case 6:
                cout << "Progran exited\n";
                break;

            default:
                cout << "You have entered invalid operation.\n";
        }
    } while (choice != 6);
return 0;
}

// Output
// Enter elements of matrix 1: 12
// 3 
// 20
// 9
// Enter elements of matrix 2: 3
// 5
// 16
// 6

// Choose operation you want to perform:
// 1.Addition of matrices
// 2.Substraction of matrices
// 3.Multiplication of matrices
// 4.Transpose of matrix 1
// 5.Transpose of matrix 2
// 6.Exit
// Enter your choice: 1

// Addition of matrices:
// 15 8 
// 36 15

// Choose operation you want to perform:
// 1.Addition of matrices
// 2.Substraction of matrices
// 3.Multiplication of matrices
// 4.Transpose of matrix 1
// 5.Transpose of matrix 2
// 6.Exit
// Enter your choice: 2

// Substraction of matrices:
// 9 -2
// 4 3

// Choose operation you want to perform:
// 1.Addition of matrices
// 2.Substraction of matrices
// 3.Multiplication of matrices
// 4.Transpose of matrix 1
// 5.Transpose of matrix 2
// 6.Exit
// Enter your choice: 3

// Multiplication of matrices:
// 84 78
// 204 154

// Choose operation you want to perform:
// 1.Addition of matrices
// 2.Substraction of matrices
// 3.Multiplication of matrices
// 4.Transpose of matrix 1
// 5.Transpose of matrix 2
// 6.Exit
// Enter your choice: 4

// Transpose of matrix 1:
// 12 20
// 3 9

// Choose operation you want to perform:
// 1.Addition of matrices
// 2.Substraction of matrices
// 3.Multiplication of matrices
// 4.Transpose of matrix 1
// 5.Transpose of matrix 2
// 6.Exit
// Enter your choice: 5

// Transpose of matrix 2:
// 3 16
// 5 6

// Choose operation you want to perform:
// 1.Addition of matrices
// 2.Substraction of matrices
// 3.Multiplication of matrices
// 4.Transpose of matrix 1
// 5.Transpose of matrix 2
// 6.Exit
// Enter your choice: 6
// Progran exited