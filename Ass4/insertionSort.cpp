#include <iostream>
using namespace std;

void insertionSort(int data[], int n) {
    for (int k = 1; k < n; k++) {
        int temp = data[k], PTR = k - 1;

        while (PTR >= 0 && temp < data[PTR]) { 
            data[PTR + 1] = data[PTR];
            PTR = PTR - 1;
        }
        data[PTR + 1] = temp; 

        cout << "Pass "<<k<<": ";
        for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
        }
        cout<<endl;
    }
    
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int data[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout<< data[i]<<" ";
    }
    cout<<endl;
    insertionSort(data, n);
    return 0;
}


/*Enter the number of elements: 8
Enter elements: 77
33
44
11
88
22
66
55
Original Array: 77 33 44 11 88 22 66 55 
Pass 1: 33 77 44 11 88 22 66 55
Pass 2: 33 44 77 11 88 22 66 55 
Pass 3: 11 33 44 77 88 22 66 55
Pass 4: 11 33 44 77 88 22 66 55 
Pass 5: 11 22 33 44 77 88 66 55
Pass 6: 11 22 33 44 66 77 88 55
Pass 7: 11 22 33 44 55 66 77 88
*/