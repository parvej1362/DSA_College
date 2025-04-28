#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter size of array: ";
    cin >> N;

    int DATA[N];
    cout << "Enter elements of array: ";
    for (int i = 0; i < N; i++){
        cin >> DATA[i];
    }
    cout<<"Original Array: ";
    for (int i = 0; i < N; i++){
        cout<<DATA[i]<<" ";
    }
    cout<<endl;

    // Selection Sort Algorithm
    for (int K = 0; K < N - 1; K++)
    {
        int LOC = K;    // Initialize location of minimum element
        int MIN = DATA[K]; // Assume first unsorted element is the smallest
        // Find the smallest element in the unsorted part
        for (int j = K + 1; j < N; j++)
        {
            if (DATA[j] < MIN)
            {
                MIN = DATA[j];
                LOC = j;
            }
        }

        int temp = DATA[K];
        DATA[K] = DATA[LOC];
        DATA[LOC] = temp;

        cout << "Pass "<<K+1<<": ";
        for (int i = 0; i < N; i++){
        cout << DATA[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Output:
Enter size of array: 8
Enter elements of array: 77
33
44
11
88
22
66
55
Original Array: 77 33 44 11 88 22 66 55 
Pass 1: 11 33 44 77 88 22 66 55 
Pass 2: 11 22 44 77 88 33 66 55
Pass 3: 11 22 33 77 88 44 66 55 
Pass 4: 11 22 33 44 88 77 66 55 
Pass 5: 11 22 33 44 55 77 66 88
Pass 6: 11 22 33 44 55 66 77 88 
Pass 7: 11 22 33 44 55 66 77 88
*/