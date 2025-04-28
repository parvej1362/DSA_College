#include <iostream>
using namespace std;

void printMatrix(int matrix[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void lowerUpperTriangular(int matrix[2][2])
{
    int lower[2][2] = {0}, upper[2][2] = {0};

    // Compute Lower and Upper triangular matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j >= i) // Upper triangular elements
                upper[i][j] = matrix[i][j];
            if (i >= j) // Lower triangular elements
                lower[i][j] = matrix[i][j];
        }
    }

    cout << "\nLower Triangular Matrix (L):\n";
    printMatrix(lower);

    cout << "\nUpper Triangular Matrix (U):\n";
    printMatrix(upper);
}

int main()
{
    int matrix[2][2] = {
        {2, -1},
        {4, 5},
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    lowerUpperTriangular(matrix);

    return 0;
}

/*

*/