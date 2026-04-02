//#include <iostream>
//using namespace std;
//
//class Queue {
//private:
//    int arr[100];
//    int front, rear;
//
//public:
//    Queue() {
//        front = 0;
//        rear = -1;
//    }
//
//    bool isEmpty() {
//        return front > rear;
//    }
//
//    void enqueue(int x) {
//        arr[++rear] = x;
//    }
//
//    int dequeue() {
//        return arr[front++];
//    }
//
//    int size() {
//        return rear - front + 1;
//    }
//
//    void display() {
//        for (int i = front; i <= rear; i++)
//            cout << arr[i] << " ";
//        cout << endl;
//    }
//
//    // Reverse first K elements
//    void reverseK(int k) {
//        int n = size();
//
//        if (k <= 1 || k > n) return;
//
//        int stack[100], top = -1;
//
//        // Step 1: Push first K into stack
//        for (int i = 0; i < k; i++) {
//            stack[++top] = dequeue();
//        }
//
//        // Step 2: Enqueue back from stack
//        while (top != -1) {
//            enqueue(stack[top--]);
//        }
//
//        // Step 3: Move remaining elements to rear
//        for (int i = 0; i < n - k; i++) {
//            enqueue(dequeue());
//        }
//    }
//};
//
//int main() {
//    Queue q;
//    int n, x, k;
//
//    cout << "Enter number of elements: ";
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        cin >> x;
//        q.enqueue(x);
//    }
//
//    cout << "Enter K: ";
//    cin >> k;
//
//    q.reverseK(k);
//
//    cout << "Result: ";
//    q.display();
//
//    return 0;
//}