#include <iostream>
using namespace std;

class Queue {
private:
    string arr[10];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == 9;
    }

    void enqueue(string x) {
        if (isFull()) {
            cout << "Queue Full" << endl;
            return;
        }

        if (isEmpty())
            front = 0;

        arr[++rear] = x;
    }

    string dequeue() {
        if (isEmpty()) {
            return "EMPTY";
        }

        string val = arr[front];

        if (front == rear)
            front = rear = -1;
        else
            front++;

        return val;
    }

    void display() {
        if (isEmpty()) {
            cout << "Empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class Airport {
private:
    Queue emergency;
    Queue passenger;
    Queue cargo;

public:
    void enqueue(string type, string id) {
        if (type == "Emergency")
            emergency.enqueue(id);
        else if (type == "Passenger")
            passenger.enqueue(id);
        else
            cargo.enqueue(id);
    }

    void dequeue() {
        if (!emergency.isEmpty())
            cout << "Landing: " << emergency.dequeue() << endl;
        else if (!passenger.isEmpty())
            cout << "Landing: " << passenger.dequeue() << endl;
        else if (!cargo.isEmpty())
            cout << "Landing: " << cargo.dequeue() << endl;
        else
            cout << "No flights waiting" << endl;
    }

    void display() {
        cout << "Emergency Queue: ";
        emergency.display();

        cout << "Passenger Queue: ";
        passenger.display();

        cout << "Cargo Queue: ";
        cargo.display();
    }
};


int main() {
    Airport a;

    a.enqueue("Passenger", "P1");
    a.enqueue("Cargo", "C1");
    a.enqueue("Emergency", "E1");
    a.enqueue("Passenger", "P2");
    a.enqueue("Cargo", "C2");
    a.enqueue("Emergency", "E2");

    cout << "Queues:" << endl;
    a.display();

    cout << endl << "Landing Order:" << endl;

    for (int i = 0; i < 6; i++) {
        a.dequeue();
    }

    return 0;
}