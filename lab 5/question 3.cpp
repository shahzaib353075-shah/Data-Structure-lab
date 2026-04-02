//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int value) {
//        data = value;
//        next = nullptr;
//    }
//};
//
//class LinkedList {
//private:
//    Node* head;
//
//public:
//    LinkedList() {
//        head = nullptr;
//    }
//
//    void insertAtPosition(int value, int pos) {
//        Node* newNode = new Node(value);
//
//        if (pos == 1) {
//            newNode->next = head;
//            head = newNode;
//            return;
//        }
//
//        Node* temp = head;
//        for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
//            temp = temp->next;
//        }
//
//        if (temp == nullptr) return;
//
//        newNode->next = temp->next;
//        temp->next = newNode;
//    }
//
//    void deleteAtPosition(int pos) {
//        if (head == nullptr) return;
//
//        if (pos == 1) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//            return;
//        }
//
//        Node* temp = head;
//        for (int i = 1; i < pos - 1 && temp->next != nullptr; i++) {
//            temp = temp->next;
//        }
//
//        if (temp->next == nullptr) return;
//
//        Node* delNode = temp->next;
//        temp->next = delNode->next;
//        delete delNode;
//    }
//
//    void search(int key) {
//        Node* temp = head;
//        int pos = 1;
//
//        while (temp != nullptr) {
//            if (temp->data == key) {
//                cout << "Found at position " << pos << endl;
//                return;
//            }
//            temp = temp->next;
//            pos++;
//        }
//
//        cout << "Not Found" << endl;
//    }
//
//    void countNodes() {
//        Node* temp = head;
//        int count = 0;
//
//        while (temp != nullptr) {
//            count++;
//            temp = temp->next;
//        }
//
//        cout << "Total nodes: " << count << endl;
//    }
//
//    void display() {
//        Node* temp = head;
//
//        while (temp != nullptr) {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//        cout << "NULL" << endl;
//    }
//};
//
//int main() {
//    LinkedList list;
//    int choice, value, pos;
//
//    do {
//        cout << "1 Insert" << endl;
//        cout << "2 Delete" << endl;
//        cout << "3 Search" << endl;
//        cout << "4 Count" << endl;
//        cout << "5 Display" << endl;
//        cout << "0 Exit" << endl;
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cin >> value >> pos;
//            list.insertAtPosition(value, pos);
//            break;
//        case 2:
//            cin >> pos;
//            list.deleteAtPosition(pos);
//            break;
//        case 3:
//            cin >> value;
//            list.search(value);
//            break;
//        case 4:
//            list.countNodes();
//            break;
//        case 5:
//            list.display();
//            break;
//        }
//    } while (choice != 0);
//
//    return 0;
//}