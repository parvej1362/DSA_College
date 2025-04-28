#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], copy[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        copy[i] = arr[i];
    }
    cout << "Copied array: ";
    for (int i = 0; i < n; i++){
        cout << copy[i] << " ";
    }
    return 0;
}

// Enter size of array: 4
// Enter array elements: 12
// 14
// 52
// 50
// Copied array: 12 14 52 50