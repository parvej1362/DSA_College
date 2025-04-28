#include <iostream>
using namespace std;

int main() {
    int n, key, found = -1;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }
    if (found != -1)
        cout << "Element found at index " << found << endl;
    else
        cout << "Element not found!" << endl;
    return 0;
}

// Enter size of array: 5
// Enter array elements: 12
// 14
// 82
// 50
// 30
// Enter element to search: 50
// Element found at index 3