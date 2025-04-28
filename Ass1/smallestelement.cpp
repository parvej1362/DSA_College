#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], min;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    min = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Smallest element: " << min << endl;
    return 0;
}

// Enter size of array: 4
// Enter array elements: 12
// 45
// 85
// 3
// Smallest element: 3
