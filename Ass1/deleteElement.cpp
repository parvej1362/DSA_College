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
    int index;
    cout<<"enter index at which element you want to delete(cosider index from 1): ";
    cin>>index;
    for (int i = index - 1; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n-1; i++){
        cout<< arr[i]<<" ";
    } 
}

// Enter size of array: 4
// Enter array elements: 12
// 14
// 56
// 89
// enter index at which element you want to delete(cosider index from 1): 1
// 14 56 89