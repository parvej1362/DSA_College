#include <iostream>
using namespace std;

void printArray(int data[], int n)
{
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << endl;
}

int main()
{
    int num, i;
    cout << "Enter number of elements in array: ";
    cin >> num;
    int data[num];
    cout << "Enter elements of array: ";
    for (i = 0; i < num; i++)
    {
        cin >> data[i];
    }
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Original array: ";
    printArray(data, n);

    for (int k = 1; k < n; k++)
    {
        for (int PTR = 0; PTR < n - k; PTR++)
        {
            if (data[PTR] > data[PTR + 1])
            { // Compare adjacent elements
                int temp = data[PTR];
                data[PTR] = data[PTR + 1];
                data[PTR + 1] = temp;
                // swap(data[PTR], data[PTR + 1]);
            }
        }
        cout << "Pass " << k << ": ";
        printArray(data, n);
    }

    return 0;
}

// Enter number of elements in array: 5
// Enter elements of array: 5
// 8
// 16
// 18
// 1
// Original array: 5 8 16 18 1
// Pass 1: 5 8 16 1 18
// Pass 2: 5 8 1 16 18
// Pass 3: 5 1 8 16 18
// Pass 4: 1 5 8 16 18