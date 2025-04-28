#include <iostream>
using namespace std;

int main() {
    int size, index, newval;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];  
    cout << "Enter " << size << " elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the index of the element to update: ";
    cin >> index;
    if (index >= 0 && index < size) {
        cout << "Enter the new value: ";
        cin >> newval;
        arr[index] = newval; 

    
        cout << "Updated array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Please enter a valid index.\n";
    }
return 0;
}

// Enter the size of the array: 5
// Enter 5 elements of the array:
// 10
// 14
// 56
// 20
// 50
// Original array: 10 14 56 20 50
// Enter the index of the element to update: 2
// Enter the new value: 90
// Updated array: 10 14 90 20 50