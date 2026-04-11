//#include <iostream>
//using namespace std;
//
//struct Node {
//    int roll;
//    string name;
//    float marks;
//    Node* next;
//};
//
//class StudentList {
//private:
//    Node* head;
//
//public:
//    StudentList() {
//        head = NULL;
//    }
//
//    void insertAtBeginning(int r, string n, float m) {
//        Node* newNode = new Node{ r, n, m, head };
//        head = newNode;
//        cout << "Inserted at beginning." << endl;
//    }
//
//    void insertAtEnd(int r, string n, float m) {
//        Node* newNode = new Node{ r, n, m, NULL };
//
//        if (head == NULL) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next != NULL)
//                temp = temp->next;
//            temp->next = newNode;
//        }
//
//        cout << "Inserted at end." << endl;
//    }
//
//    void insertAfter(int key, int r, string n, float m) {
//        Node* temp = head;
//
//        while (temp != NULL && temp->roll != key)
//            temp = temp->next;
//
//        if (temp == NULL) {
//            cout << "Roll number not found." << endl;
//            return;
//        }
//
//        Node* newNode = new Node{ r, n, m, temp->next };
//        temp->next = newNode;
//
//        cout << "Inserted after roll " << key << endl;
//    }
//
//    void deleteStudent(int key) {
//        if (head == NULL) {
//            cout << "List is empty." << endl;
//            return;
//        }
//
//        Node* temp = head;
//        Node* prev = NULL;
//
//        while (temp != NULL && temp->roll != key) {
//            prev = temp;
//            temp = temp->next;
//        }
//
//        if (temp == NULL) {
//            cout << "Student not found." << endl;
//            return;
//        }
//
//        if (prev == NULL)
//            head = head->next;
//        else
//            prev->next = temp->next;
//
//        delete temp;
//        cout << "Student deleted." << endl;
//    }
//
//    void display() {
//        if (head == NULL) {
//            cout << "No records." << endl;
//            return;
//        }
//
//        Node* temp = head;
//        cout << "Roll\tName\tMarks" << endl;
//
//        while (temp != NULL) {
//            cout << temp->roll << "\t"
//                << temp->name << "\t"
//                << temp->marks << endl;
//            temp = temp->next;
//        }
//    }
//
//    void search(int key) {
//        Node* temp = head;
//
//        while (temp != NULL) {
//            if (temp->roll == key) {
//                cout << "Found: "
//                    << temp->roll << " "
//                    << temp->name << " "
//                    << temp->marks << endl;
//                return;
//            }
//            temp = temp->next;
//        }
//
//        cout << "Student not found." << endl;
//    }
//
//    void update(int key) {
//        Node* temp = head;
//
//        while (temp != NULL) {
//            if (temp->roll == key) {
//                cout << "Enter new name: ";
//                cin >> temp->name;
//                cout << "Enter new marks: ";
//                cin >> temp->marks;
//                cout << "Updated successfully." << endl;
//                return;
//            }
//            temp = temp->next;
//        }
//
//        cout << "Student not found." << endl;
//    }
//
//    void statistics() {
//        if (head == NULL) {
//            cout << "No data." << endl;
//            return;
//        }
//
//        float max = head->marks;
//        float min = head->marks;
//        float sum = 0;
//        int count = 0;
//
//        Node* temp = head;
//
//        while (temp != NULL) {
//            if (temp->marks > max) max = temp->marks;
//            if (temp->marks < min) min = temp->marks;
//
//            sum += temp->marks;
//            count++;
//
//            temp = temp->next;
//        }
//
//        cout << "Highest: " << max << endl;
//        cout << "Lowest: " << min << endl;
//        cout << "Average: " << sum / count << endl;
//    }
//};
//int main() {
//    StudentList list;
//    int choice, roll;
//    string name;
//    float marks;
//
//    do {
//        cout << endl;
//        cout << "1.Insert Beginning\n2.Insert End\n3.Insert After\n4.Delete\n5.Display\n6.Search\n7.Update\n8.Statistics\n9.Exit" << endl;
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cin >> roll >> name >> marks;
//            list.insertAtBeginning(roll, name, marks);
//            break;
//
//        case 2:
//            cin >> roll >> name >> marks;
//            list.insertAtEnd(roll, name, marks);
//            break;
//
//        case 3:
//            int key;
//            cin >> key >> roll >> name >> marks;
//            list.insertAfter(key, roll, name, marks);
//            break;
//
//        case 4:
//            cin >> roll;
//            list.deleteStudent(roll);
//            break;
//
//        case 5:
//            list.display();
//            break;
//
//        case 6:
//            cin >> roll;
//            list.search(roll);
//            break;
//
//        case 7:
//            cin >> roll;
//            list.update(roll);
//            break;
//
//        case 8:
//            list.statistics();
//            break;
//
//        case 9:
//            cout << "Exit" << endl;
//            break;
//
//        default:
//            cout << "Invalid choice" << endl;
//        }
//
//    } while (choice != 9);
//
//    return 0;
//}