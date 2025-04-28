#include <iostream>
using namespace std;

class Queue {
    int front, rear, MAX;
    int* arr;

public:
    Queue(int size) {
        MAX = size;
        arr = new int[MAX];
        front = rear = -1;
    }

    void enqueue(int value) {
        if (rear >= MAX - 1) {
            cout << "Queue Overflow! Cannot enqueue " << value << "\n";
        } else {
            if (front == -1) front = 0;
            arr[++rear] = value;
            cout << value << " enqueued to queue\n";
        }
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! Cannot dequeue\n";
        } else {
            cout << arr[front++] << " dequeued from queue\n";
            if (front > rear) front = rear = -1; // Reset queue if empty
        }
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    int size;
    cout << "Enter size of queue: ";
    cin >> size;
    Queue q(size);
    
    int choice, value;
    while (true) {
        cout << "\nQueue Operations:\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
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
Enter size of queue: 5

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 2
Queue Underflow! Cannot dequeue

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 2
2 enqueued to queue

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 5
5 enqueued to queue

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 8
8 enqueued to queue

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 12
12 enqueued to queue

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 21
21 enqueued to queue

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 23
Queue Overflow! Cannot enqueue 23

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 3
Queue elements: 2 5 8 12 21 

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 2
2 dequeued from queue

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter value to enqueue: 24
Queue Overflow! Cannot enqueue 24

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 3
Queue elements: 5 8 12 21 

Queue Operations:
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 4
Exiting program...
*/