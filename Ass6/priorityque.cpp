#include <iostream>
#define N 5

using namespace std;

int pq[N], rear = -1;

// Function to insert an element into the priority queue
void enqueue(int item)
{
    if (rear == N - 1)
    {
        cout << "Queue Overflow\n";
        return;
    }

    int i;
    // Shift elements to maintain ascending order (low value = high priority)
    for (i = rear; i >= 0 && pq[i] > item; i--)
    {
        pq[i + 1] = pq[i]; // Shift elements right
    }
    pq[i + 1] = item;
    rear++;
    cout << "Inserted: " << item << endl;
    cout << "Priority Queue elements: ";
    for (int i = 0; i <= rear; i++)
    {
        cout << pq[i] << " ";
    }
    cout << endl;
}

// Function to remove the highest priority element (smallest value)
void dequeue()
{
    if (rear == -1)
    {
        cout << "Queue Underflow\n";
        return;
    }
    cout << "Deleted: " << pq[0] << endl;

    // Shift elements left after deletion
    for (int i = 0; i < rear; i++)
    {
        pq[i] = pq[i + 1];
    }
    rear--;
    cout << "Priority Queue elements: ";
    for (int i = 0; i <= rear; i++)
    {
        cout << pq[i] << " ";
    }
    cout << endl;
}

// Function to display the priority queue
void display()
{
    if (rear == -1)
    {
        cout << "Queue is Empty\n";
        return;
    }
    cout << "Priority Queue elements: ";
    for (int i = 0; i <= rear; i++)
    {
        cout << pq[i] << " ";
    }
    cout << endl;
}

int main()
{
    int choice, value;

    while (true)
    {
        cout << "\nPriority Queue Menu:\n";
        cout << "1. Enqueue (Insert)\n";
        cout << "2. Dequeue (Delete)\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
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
Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 2
Queue Underflow

Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 21
Inserted: 21
Priority Queue elements: 21

Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 11
Inserted: 11
Priority Queue elements: 11 21

Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 15
Inserted: 15
Priority Queue elements: 11 15 21

Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 24
Inserted: 24
Priority Queue elements: 11 15 21 24

Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 2
Deleted: 11
Priority Queue elements: 15 21 24

Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 23
Inserted: 23
Priority Queue elements: 15 21 23 24

Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 50
Inserted: 50
Priority Queue elements: 15 21 23 24 50

Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 1
Enter value to insert: 17
Queue Overflow

Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 2
Deleted: 15
Priority Queue elements: 21 23 24 50

Priority Queue Menu:
1. Enqueue (Insert)
2. Dequeue (Delete)
3. Display Queue
4. Exit
Enter your choice: 4
Exiting program.
*/