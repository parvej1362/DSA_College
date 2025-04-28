#include <iostream>
using namespace std;

int binarySearch(int data[], int LB, int UB, int ITEM) {
    int BEG = LB, END = UB, MID;

    while (BEG <= END) {
        MID = (BEG + END) / 2; 

        if (data[MID] == ITEM){
            return MID;
        }
        if (ITEM < data[MID]){
            END = MID - 1;
        } else {               
            BEG = MID + 1;
        }
    }
    return -1; // ITEM not found
}

int main() {
    int data[] = {10,15,17,23,35,55,70,99};
    int n = sizeof(data) / sizeof(data[0]); 
    int ITEM, LOC;

    cout << "Enter the item to search: ";
    cin >> ITEM;

    LOC = binarySearch(data, 0, n - 1, ITEM);

    if (LOC != -1){
        cout << "Item found at index: " << LOC << endl;
    } else {
        cout << "Item not found in the array." << endl;
    }
    return 0;
}

//Enter the item to search: 10
//Item found at index: 0

// Enter the item to search: 99
// Item found at index: 7

// Enter the item to search: 35
// Item found at index: 4

// Enter the item to search: 30
// Item not found in the array.


