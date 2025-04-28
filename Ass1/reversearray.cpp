#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i<n/2; i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"Reversed array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
}

// Enter size of array: 5
// Enter array elements: 41
// 56
// 12
// 17
// 5
// Reversed array: 5 17 12 56 41