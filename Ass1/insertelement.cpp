#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n+1];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    } 
    int index, value;
    cout<<"enter index at which you want to insert element(cosider 0 index): ";
    cin>>index;
    cout<<"Enter element to insert: ";
    cin>>value;
    for(int i=n+1; i>=index; i--){
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    for (int i = 0; i < n+1; i++){
        cout<< arr[i]<<" ";
    } 
}

// Enter size of array: 4
// Enter array elements: 12
// 41
// 62
// 50
// enter index at which you want to insert element(cosider 0 index): 2
// Enter element to insert: 51
// 12 41 51 62 50