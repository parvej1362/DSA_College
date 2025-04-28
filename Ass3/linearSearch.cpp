#include<iostream>
using namespace std;
int main(){
    int loc=0, n, i,k=1;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int data[n];
    cout<<"Enter elements of array: ";
    for(i=1;i<=n;i++){
        cin>>data[i];
    }
    int item;
    cout<<"Enter element to find: ";
    cin>>item;
    while(loc==0 && k<=n){
        if(item==data[k]){
            loc=k;
        }
        k=k+1;
    }
    if(loc==0){
        cout<<"item is not in the array data";
    } else{
        cout<<"location of item is "<<loc;
    }
}

//output
// Enter number of elements in array: 5
// Enter elements of array: 4
// 9
// 6
// 10
// 8
// Enter element to find: 4
// location of item is 1

//Enter number of elements in array: 5
// Enter elements of array: 4
// 9
// 6
// 10
// 8
// Enter element to find: 8
// location of item is 5

// Enter number of elements in array: 5
// Enter elements of array: 4
// 9
// 6
// 10
// 8
// Enter element to find: 11
// item is not in the array data

// Enter number of elements in array: 5
// Enter elements of array: 4
// 9
// 6
// 10
// 8
// Enter element to find: 10
// location of item is 4

