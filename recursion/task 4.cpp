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
//   
//    if (head == NULL)
//        return;
//
//    cout << head->data << " ";
//
//   
//    printList(head->next);
//}
//
//int main()
//{
//    Node* head = new Node(10);
//    head->next = new Node(20);
//    head->next->next = new Node(30);
//
//    cout << "Linked List: ";
//
//    printList(head);
//
//    return 0;
//}