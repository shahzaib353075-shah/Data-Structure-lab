#include <iostream>
using namespace std;

class Node {
public:
    string name;
    int priority;
    Node* next;

    Node(string n, int p) {
        name = n;
        priority = p;
        next = nullptr;
    }
};

class Book {
private:
    Node* head;

public:
    Book() {
        head = nullptr;
    }

    void addStudent(string name, int priority) {
        Node* newNode = new Node(name, priority);

        if (head == nullptr || priority < head->priority) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->priority <= priority) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void removeStudent(string name) {
        if (head == nullptr) return;

        if (head->name == name) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->name != name) {
            temp = temp->next;
        }

        if (temp->next == nullptr) return;

        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }

    void serveStudent() {
        if (head == nullptr) return;

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void display() {
        Node* temp = head;

        while (temp != nullptr) {
            cout << temp->name << "(" << temp->priority << ") -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void count() {
        Node* temp = head;
        int c = 0;

        while (temp != nullptr) {
            c++;
            temp = temp->next;
        }

        cout << "Students: " << c << endl;
    }
};

int main() {
    Book book1, book2;

    book1.addStudent("Ali", 2);
    book1.addStudent("Sara", 1);
    book1.addStudent("Ahmed", 3);

    book1.display();

    book1.serveStudent();

    book1.display();
    book1.count();

    book2.addStudent("Zara", 2);
    book2.addStudent("Usman", 1);

    book2.display();

    return 0;
}