#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum = " << sum << endl;
    cout << "Average = " << sum / n << endl;
    return 0;
}

// Enter size of array: 5
// Enter array elements: 10
// 45
// 11
// 6
// 59
// Sum = 131
// Average = 26