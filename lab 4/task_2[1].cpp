#include <iostream>
using namespace std;

/* -------- STACK CLASS -------- */
class Stack {
private:
    int arr[100];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == 99;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++topIndex] = x;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }
        return arr[topIndex--];
    }

    int top() {
        if (isEmpty()) return -1;
        return arr[topIndex];
    }

    // Display from top ? bottom
    void displayFromTop() {
        for (int i = topIndex; i >= 0; i--) {
            cout << arr[i] << " ";
        }
    }

    // Display from bottom ? top
    void displayFromBottom() {
        for (int i = 0; i <= topIndex; i++) {
            cout << arr[i] << " ";
        }
    }
};

/* -------- QUEUE USING TWO STACKS -------- */
class QueueUsingStacks {
private:
    Stack s1, s2;

    void transfer() {
        while (!s1.isEmpty()) {
            s2.push(s1.pop());
        }
    }

public:
    void enqueue(int x) {
        s1.push(x);
        cout << x << " inserted." << endl;
    }

    int dequeue() {
        if (s2.isEmpty()) {
            transfer();
        }

        if (s2.isEmpty()) {
            cout << "Queue Empty!" << endl;
            return -1;
        }

        return s2.pop();
    }

    int front() {
        if (s2.isEmpty()) {
            transfer();
        }

        if (s2.isEmpty()) {
            cout << "Queue Empty!" << endl;
            return -1;
        }

        return s2.top();
    }

    void display() {
        if (s1.isEmpty() && s2.isEmpty()) {
            cout << "Queue Empty!" << endl;
            return;
        }

        cout << "Queue elements (Front to Rear):" << endl;

        // s2 contains front elements (correct order)
        s2.displayFromTop();

        // s1 contains newer elements (reverse needed)
        s1.displayFromBottom();

        cout << endl;
    }
};

/* -------- MAIN FUNCTION -------- */
int main() {
    QueueUsingStacks q;
    int choice, value;

    do {
        cout << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            cout << "Removed: " << q.dequeue() << endl;
            break;

        case 3:
            cout << "Front: " << q.front() << endl;
            break;

        case 4:
            q.display();
            break;

        case 5:
            cout << "Exit..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}