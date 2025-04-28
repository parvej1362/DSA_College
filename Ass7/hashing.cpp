#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

// Function to get the nearest prime less than or equal to n
int nearestPrime(int n) {
    while (!isPrime(n)) {
        n--;
    }
    return n;
}

class HashTable {
private:
    int* table;
    int size;
    int prime;

public:
    HashTable(int s) {
        size = s;
        table = new int[size];
        prime = nearestPrime(size);
        for (int i = 0; i < size; i++)
            table[i] = -1;
    }

    int hashFunction(int key) {
        return key % prime;
    }

    void insert(int key) {
        int index = hashFunction(key);
        int originalIndex = index;
        int i = 0;

        // Linear probing for collision resolution
        while (table[index] != -1) {
            index = (originalIndex + (++i)) % size;
            if (i == size) {
                cout << "Hash Table is full\n";
                return;
            }
        }

        table[index] = key;
    }

    void display() {
        cout << "Hash Table (using mod with nearest prime <= size):\n";
        for (int i = 0; i < size; i++) {
            cout << i << " --> ";
            if (table[i] != -1)
                cout << table[i] << "\n";
            else
                cout << "Empty\n";
        }
    }

    ~HashTable() {
        delete[] table;
    }
};

int main() {
    int size;
    cout << "Enter hash table size: ";
    cin >> size;

    HashTable ht(size);

    int n, key;
    cout << "Enter number of keys to insert: ";
    cin >> n;

    cout << "Enter " << n << " keys:\n";
    for (int i = 0; i < n; i++) {
        cin >> key;
        ht.insert(key);
    }

    ht.display();

    return 0;
}