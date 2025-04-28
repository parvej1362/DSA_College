#include <iostream>
#define N 5  // Size of the Circular Queue
using namespace std;

int queue[N], front = -1, rear = -1;  // Global queue variables

// Function to insert an element into the circular queue (original logic)
void enqueue(int item) {
    if ((front == 0 && rear == N - 1) || (front == rear + 1)) {  // Queue full condition
        cout << "Queue Overflow\n";
        return;
    }
    if (front == -1) {  // Queue initially empty
        front = rear = 0;
    } else if (rear == N - 1) {  // Rear at the last position, wrap around
        rear = 0;
    } else {  // Normal increment
        rear++;
    }
    queue[rear] = item;
    cout << "Inserted: " << item << endl;
}

// Function to remove an element from the circular queue
void dequeue() {
    if (front == -1) {  // Queue empty condition
        cout << "Queue Underflow\n";
        return;
    }
    cout << "Deleted: " << queue[front] << endl;
    if (front == rear) {  // Queue has only one element
        front = rear = -1;
    } else if (front == N - 1) {  // Front at last position, wrap around
        front = 0;
    } else {  // Normal increment
        front++;
    }
}

// Function to display the queue
void display() {
    if (front == -1) {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear) break;
        i = (i + 1) % N;
    }
    cout << endl;
}

// Main function to handle user input
int main() {
    int choice, value;

    while (true) {
        cout << "\nCircular Queue Menu:\n";
        cout << "1. Enqueue (Insert)\n";
        cout << "2. Dequeue (Delete)\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    }

    return 0;
}

/*
Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 2
Queue Underflow

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 10
Inserted: 10

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 20
Inserted: 20

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 30
Inserted: 30

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 40
Inserted: 40

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 50
Inserted: 50

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 60
Queue Overflow

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 2
Deleted: 10

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 60
Inserted: 60

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 3
Queue elements: 20 30 40 50 60 

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 2
Deleted: 20

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 2
Deleted: 30

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 3
Queue elements: 40 50 60 

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 70
Inserted: 70

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 80
Inserted: 80

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 90
Queue Overflow

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 3
Queue elements: 40 50 60 70 80 

Circular Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 4
Exiting program.
*/