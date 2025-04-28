#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];
    int secondSmallest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest || secondSmallest == -1) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == -1) {
        cout << "No second smallest element exists." << endl;
    } else {
        cout << "The second smallest element is: " << secondSmallest << endl;
    }

    return 0;
}

// Enter the size of the array: 4
// Enter 4 elements: 12
// 13
// 14
// 15
// The second smallest element is: 13
