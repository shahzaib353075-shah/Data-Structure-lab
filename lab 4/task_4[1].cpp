//#include <iostream>
//using namespace std;
//
//class TicketQueue {
//private:
//    int arr[100];
//    int front, rear;
//
//public:
//    TicketQueue() {
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
//    // Add ticket
//    void enqueue(int id) {
//        if (isFull()) {
//            cout << "Queue Full!" << endl;
//            return;
//        }
//        arr[++rear] = id;
//        cout << "Ticket " << id << " added." << endl;
//    }
//
//    // Resolve ticket
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "No tickets to resolve!" << endl;
//            return;
//        }
//        cout << "Resolved Ticket: " << arr[front++] << endl;
//    }
//
//    // Show next ticket
//    void showFront() {
//        if (isEmpty()) {
//            cout << "No tickets!" << endl;
//            return;
//        }
//        cout << "Next Ticket: " << arr[front] << endl;
//    }
//
//    // Display all tickets
//    void display() {
//        if (isEmpty()) {
//            cout << "No pending tickets!" << endl;
//            return;
//        }
//
//        cout << "Pending Tickets: ";
//        for (int i = front; i <= rear; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
///* -------- MAIN FUNCTION -------- */
//int main() {
//    TicketQueue q;
//    int choice, id;
//
//    do {
//        cout << endl;
//        cout << "1. Add Ticket" << endl;
//        cout << "2. Resolve Ticket" << endl;
//        cout << "3. View Next Ticket" << endl;
//        cout << "4. Display All Tickets" << endl;
//        cout << "5. Exit" << endl;
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter Ticket ID (4-digit): ";
//            cin >> id;
//            q.enqueue(id);
//            break;
//
//        case 2:
//            q.dequeue();
//            break;
//
//        case 3:
//            q.showFront();
//            break;
//
//        case 4:
//            q.display();
//            break;
//
//        case 5:
//            cout << "Exiting..." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice!" << endl;
//        }
//
//    } while (choice != 5);
//
//    return 0;
//}