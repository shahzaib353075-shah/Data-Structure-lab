//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    string name;
//    Node* next;
//
//    Node(string n) {
//        name = n;
//        next = nullptr;
//    }
//};
//
//class Hospital {
//private:
//    Node* head;
//
//public:
//    Hospital() {
//        head = nullptr;
//    }
//
//    void addPatient(string name) {
//        Node* newNode = new Node(name);
//
//        if (head == nullptr) {
//            head = newNode;
//            return;
//        }
//
//        Node* temp = head;
//        while (temp->next != nullptr) {
//            temp = temp->next;
//        }
//
//        temp->next = newNode;
//    }
//
//    void removePatient(string name) {
//        if (head == nullptr) return;
//
//        if (head->name == name) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//            return;
//        }
//
//        Node* temp = head;
//        while (temp->next != nullptr && temp->next->name != name) {
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
//    void display() {
//        Node* temp = head;
//
//        while (temp != nullptr) {
//            cout << temp->name << " -> ";
//            temp = temp->next;
//        }
//        cout << "NULL" << endl;
//    }
//
//    void count() {
//        Node* temp = head;
//        int c = 0;
//
//        while (temp != nullptr) {
//            c++;
//            temp = temp->next;
//        }
//
//        cout << "Patients: " << c << endl;
//    }
//};
//
//int main() {
//    Hospital h;
//
//    h.addPatient("Ali");
//    h.addPatient("Ahmed");
//    h.addPatient("Sara");
//
//    h.display();
//
//    h.removePatient("Ahmed");
//
//    h.display();
//    h.count();
//
//    return 0;
//}