#include <iostream>
using namespace std;

struct Package {
    int id;
    string address;
    int startTime, endTime;
};

class DeliveryQueue {
private:
    Package arr[100];
    int front, rear;

public:
    DeliveryQueue() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return front > rear;
    }

    bool isFull() {
        return rear == 99;
    }

    void enqueue(Package p) {
        if (isFull()) {
            cout << "Queue Full!" << endl;
            return;
        }
        arr[++rear] = p;
        cout << "Package " << p.id << " added to queue." << endl;
    }

    void dequeue(int currentTime) {
        if (isEmpty()) {
            cout << "No packages to deliver!" << endl;
            return;
        }

        Package p = arr[front];

        if (currentTime >= p.startTime && currentTime <= p.endTime) {
            cout << "Delivered Package ID: " << p.id << endl;
        }
        else {
            cout << "Package ID " << p.id << " expired!" << endl;
        }
        front++;
    }

    void frontPackage() {
        if (isEmpty()) {
            cout << "No packages!" << endl;
            return;
        }
        cout << "Next Package ID: " << arr[front].id << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "No packages in queue!" << endl;
            return;
        }
        cout << "Pending Packages:" << endl;
        for (int i = front; i <= rear; i++) {
            cout << "ID: " << arr[i].id
                << " Address: " << arr[i].address
                << " Time: " << arr[i].startTime
                << "-" << arr[i].endTime << endl;
        }
    }
};

int main() {
    DeliveryQueue dq;
    int choice, id, start, end, currentTime;
    string addr;
    Package p;

    do {
        cout << endl;
        cout << "1. Add Package" << endl;
        cout << "2. Deliver Package" << endl;
        cout << "3. View Next Package" << endl;
        cout << "4. Display Packages" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Package ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Address: ";
            cin>> addr;
            cout << "Enter Delivery Time (start end): ";
            cin >> start >> end;
            p.id = id;
            p.address = addr;
            p.startTime = start;
            p.endTime = end;
            dq.enqueue(p);
            break;

        case 2:
            cout << "Enter current time: ";
            cin >> currentTime;
            dq.dequeue(currentTime);
            break;

        case 3:
            dq.frontPackage();
            break;

        case 4:
            dq.display();
            break;

        case 5:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}