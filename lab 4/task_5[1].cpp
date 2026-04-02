//#include <iostream>
//using namespace std;
//
//class PrintQueue {
//private:
//    string arr[100];
//    int front, rear;
//
//public:
//    PrintQueue() {
//        front = 0;
//        rear = -1;
//    }
//
//    bool isEmpty() {
//        return front > rear;
//    }
//
//    bool isFull() {
//        return rear == 99;
//    }
//
//    void enqueue(string doc) {
//        if (isFull()) {
//            cout << "Queue Full!" << endl;
//            return;
//        }
//        arr[++rear] = doc;
//        cout << "Document \"" << doc << "\" added to queue." << endl;
//    }
//
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "No documents to print!" << endl;
//            return;
//        }
//        cout << "Printing Document: " << arr[front++] << endl;
//    }
//
//    void frontDoc() {
//        if (isEmpty()) {
//            cout << "No documents!" << endl;
//            return;
//        }
//        cout << "Next Document: " << arr[front] << endl;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "No documents in queue!" << endl;
//            return;
//        }
//
//        cout << "Documents in Queue:" << endl;
//        for (int i = front; i <= rear; i++) {
//            cout << arr[i] << endl;
//        }
//    }
//};
//
//int main() {
//    PrintQueue pq;
//    int choice;
//    string doc;
//
//    do {
//        cout << endl;
//        cout << "1. Add Document" << endl;
//        cout << "2. Print Document" << endl;
//        cout << "3. View Next Document" << endl;
//        cout << "4. Display Queue" << endl;
//        cout << "5. Exit" << endl;
//        cout << "Enter choice: ";
//        cin >> choice;
//        cin.ignore(); 
//
//        switch (choice) {
//        case 1:
//            cout << "Enter Document Name: ";
//            cin >> doc;
//            //getline(cin, doc); 
//            pq.enqueue(doc);
//            break;
//
//        case 2:
//            pq.dequeue();
//            break;
//
//        case 3:
//            pq.frontDoc();
//            break;
//
//        case 4:
//            pq.display();
//            break;
//
//        case 5:
//            cout << "Exiting..." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice!" << endl;
//        }
//    } while (choice != 5);
//
//    return 0;
//}