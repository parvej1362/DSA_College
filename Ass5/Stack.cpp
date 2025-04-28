#include <iostream>
using namespace std;

class Stack {
    int top;
    int MAX;
    int* arr;

public:
    Stack(int size) {
        MAX = size;
        arr = new int[MAX];    
        top = -1;
    }

    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << "\n";
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack\n";
        }
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! Cannot pop\n";
        } else {
            cout << arr[top--] << " popped from stack\n";
        }
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    int size;
    cout << "Enter size of stack: ";
    cin >> size;
    Stack s(size);
    
    int choice, value;
    while (true) {
        cout << "\nStack Operations:\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    }
}

/*
Enter size of stack: 5

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 2
Stack Underflow! Cannot pop

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 2
2 pushed to stack

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 5
5 pushed to stack

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 8
8 pushed to stack

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 12
12 pushed to stack

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 11
11 pushed to stack

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter value to push: 23
Stack Overflow! Cannot push 23

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3
Stack elements: 11 12 8 5 2 

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 2
11 popped from stack

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3
Stack elements: 12 8 5 2 

Stack Operations:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 4
Exiting program...
0*/