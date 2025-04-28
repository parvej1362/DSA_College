#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int splitIndex = n / 2;
    int size1 = splitIndex;
    int size2 = n - splitIndex;

    int arr1[size1], arr2[size2];

    for (int i = 0; i < size1; i++)
    {
        arr1[i] = arr[i];
    }

    for (int i = 0; i < size2; i++)
    {
        arr2[i] = arr[splitIndex + i];
    }

    cout << "First array: ";
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Second array: ";
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

// Enter the size of the array: 6
// Enter the elements of the array: 12
// 45
// 56
// 50
// 13
// 10
// First array: 12 45 56 
// Second array: 50 13 10