//#include <iostream>
//using namespace std;
//
//class Node
//{
//public:
//    int data;
//    Node* next;
//
//    Node(int value)
//    {
//        data = value;
//        next = NULL;
//    }
//};
//
//
//void printList(Node* head)
//{
//    if (head == NULL)
//    {
//        cout << endl;
//        return;
//    }
//
//    cout << head->data << " ";
//
//    printList(head->next);
//}
//
//
//Node* insertBeginning(Node* head, int value)
//{
//    Node* temp = new Node(value);
//    temp->next = head;
//
//    return temp;
//}
//
//
//Node* insertEnd(Node* head, int value)
//{
//    if (head == NULL)
//        return new Node(value);
//
//    head->next = insertEnd(head->next, value);
//
//    return head;
//}
//
//
//Node* insertPosition(Node* head, int value, int pos)
//{
//    if (pos == 1)
//    {
//        Node* temp = new Node(value);
//        temp->next = head;
//        return temp;
//    }
//
//    if (head == NULL)
//        return NULL;
//
//    head->next =
//        insertPosition(head->next, value, pos - 1);
//
//    return head;
//}
//
//
//Node* deleteValue(Node* head, int value)
//{
//    if (head == NULL)
//        return NULL;
//
//    if (head->data == value)
//    {
//        Node* temp = head->next;
//        delete head;
//        return temp;
//    }
//
//    head->next =
//        deleteValue(head->next, value);
//
//    return head;
//}
//
//
//Node* deletePosition(Node* head, int pos)
//{
//    if (head == NULL)
//        return NULL;
//
//    if (pos == 1)
//    {
//        Node* temp = head->next;
//        delete head;
//        return temp;
//    }
//
//    head->next =
//        deletePosition(head->next, pos - 1);
//
//    return head;
//}
//
//
//int search(Node* head, int key, int pos = 1)
//{
//    if (head == NULL)
//        return -1;
//
//    if (head->data == key)
//        return pos;
//
//    return search(head->next, key, pos + 1);
//}
//
//int main()
//{
//    Node* head = NULL;
//
//    head = insertBeginning(head, 10);
//    printList(head);
//
//    head = insertEnd(head, 20);
//    printList(head);
//
//    head = insertEnd(head, 30);
//    printList(head);
//
//    head = insertPosition(head, 15, 2);
//    printList(head);
//
//    head = deleteValue(head, 20);
//    printList(head);
//
//    head = deletePosition(head, 2);
//    printList(head);
//
//    int pos = search(head, 30);
//
//    if (pos != -1)
//        cout << "Found at position: " << pos;
//    else
//        cout << "Not Found";
//
//    return 0;
//}