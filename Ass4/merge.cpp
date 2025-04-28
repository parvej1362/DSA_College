#include <iostream>
using namespace std;

void mergeAndSortArrays(int arr1[], int n1, int arr2[], int n2) {
    int merged[n1 + n2]; // Create merged array
    int k = 0;

    // Copy elements of arr1
    for (int i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }

    // Copy elements of arr2
    for (int i = 0; i < n2; i++) {
        merged[k++] = arr2[i];
    }

    // Display merged array
    cout << "Only Merged array:\n";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    // Bubble Sort for sorting the merged array
    for (int i = 0; i < n1 + n2 - 1; i++) {
        for (int j = 0; j < n1 + n2 - 1 - i; j++) {
            if (merged[j] > merged[j + 1]) {
                // Swap
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    // Display sorted merged array
    cout << "Merged Sorted array:\n";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
}

int main() {
    int n1, n2;

    // Input first array
    cout << "Enter the size of array 1: ";
    cin >> n1;
    int arr1[n1]; // Declare array of size n1
    cout << "Enter elements of array 1: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    // Input second array
    cout << "Enter the size of array 2: ";
    cin >> n2;
    int arr2[n2]; // Declare array of size n2
    cout << "Enter elements of array 2: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Merge and sort the arrays
    mergeAndSortArrays(arr1, n1, arr2, n2);

    return 0;
}

/*
o/p:
Enter the size of array 1: 5
Enter elements of array 1: 4
8
9
2
6
Enter the size of array 2: 5
Enter elements of array 2: 9
12
20
8
4
Only Merged array:
4 8 9 2 6 9 12 20 8 4 
Merged Sorted array:
2 4 4 6 8 8 9 9 12 20
*/