#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], max;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Largest element: " << max << endl;
    return 0;
}

// Enter size of array: 4
// Enter array elements: 45
// 46
// 8
// 56
// Largest element: 56