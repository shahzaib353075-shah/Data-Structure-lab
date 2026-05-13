//#include <iostream>
//using namespace std;
//
//class Node
//{
//public:
//    int data;
//    Node* next;
//    Node* prev;
//
//    Node(int value)
//    {
//        data = value;
//        next = NULL;
//        prev = NULL;
//    }
//};
//
//
//void printForward(Node* head)
//{
//    if (head == NULL)
//    {
//        cout << endl;
//        return;
//    }
//
//    cout << head->data << " ";
//
//    printForward(head->next);
//}
//
//
//void printReverse(Node* tail)
//{
//    if (tail == NULL)
//    {
//        cout << endl;
//        return;
//    }
//
//    cout << tail->data << " ";
//
//    printReverse(tail->prev);
//}
//
//
//Node* insertEnd(Node* head, int value)
//{
//    if (head == NULL)
//        return new Node(value);
//
//    if (head->next == NULL)
//    {
//        Node* temp = new Node(value);
//
//        head->next = temp;
//        temp->prev = head;
//
//        return head;
//    }
//
//    head->next = insertEnd(head->next, value);
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
//
//bool palindrome(Node* left, Node* right)
//{
//    if (left == NULL || right == NULL)
//        return true;
//
//    if (left == right || left->prev == right)
//        return true;
//
//    if (left->data != right->data)
//        return false;
//
//    return palindrome(left->next, right->prev);
//}
//
//int main()
//{
//    Node* head = NULL;
//
//    head = insertEnd(head, 1);
//    head = insertEnd(head, 2);
//    head = insertEnd(head, 2);
//    head = insertEnd(head, 1);
//
//    printForward(head);
//
//    Node* tail = head;
//
//    while (tail->next != NULL)
//        tail = tail->next;
//
//    printReverse(tail);
//
//    if (palindrome(head, tail))
//        cout << "Palindrome";
//    else
//        cout << "Not Palindrome";
//
//    return 0;
//}