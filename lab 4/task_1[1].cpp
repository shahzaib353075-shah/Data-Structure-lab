//#include <iostream>
//using namespace std;
//
//template <typename T>
//class AbstractQueue {
//public:
//    virtual void enQueue(T value) = 0;
//    virtual T deQueue() = 0;
//    virtual T front() const = 0;
//    virtual bool isEmpty() const = 0;
//    virtual bool isFull() const = 0;
//    virtual ~AbstractQueue() {}
//};
//
//
//template <typename T>
//class myQueue : public AbstractQueue<T> {
//private:
//    T* arr;
//    int frontIndex;
//    int rearIndex;
//    int capacity;
//
//public:
//    
//    myQueue(int size) {
//        capacity = size;
//        arr = new T[capacity];
//        frontIndex = 0;
//        rearIndex = -1;
//    }
//
//   
//    void enQueue(T value) {
//        if (isFull()) {
//            cout << "Queue Full!" << endl;
//            return;
//        }
//        arr[++rearIndex] = value;
//        cout << value << " inserted." << endl;
//    }
//
//   
//    T deQueue() {
//        if (isEmpty()) {
//            cout << "Queue Empty!" << endl;
//            return T();
//        }
//        return arr[frontIndex++];
//    }
//
// 
//    T front() const {
//        if (isEmpty()) {
//            cout << "Queue Empty!" << endl;
//            return T();
//        }
//        return arr[frontIndex];
//    }
//
//   
//    bool isEmpty() const {
//        return (frontIndex > rearIndex);
//    }
//
//    bool isFull() const {
//        return (rearIndex == capacity - 1);
//    }
//
//    void display() const {
//        if (isEmpty()) {
//            cout << "Queue Empty!" << endl;
//            return;
//        }
//
//        cout << "Queue elements (Front to Rear):" << endl;
//        for (int i = frontIndex; i <= rearIndex; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//
//    ~myQueue() {
//        delete[] arr;
//    }
//};
//
//
//int main() {
//    int size;
//    cout << "Enter queue size: ";
//    cin >> size;
//
//    myQueue<int> q(size);
//
//    int choice, value;
//
//    do {
//        cout << endl;
//        cout << "1. Enqueue" << endl;
//        cout << "2. Dequeue" << endl;
//        cout << "3. Front" << endl;
//        cout << "4. Display" << endl;
//        cout << "5. Exit" << endl;
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value: ";
//            cin >> value;
//            q.enQueue(value);
//            break;
//
//        case 2:
//            cout << "Removed: " << q.deQueue() << endl;
//            break;
//
//        case 3:
//            cout << "Front: " << q.front() << endl;
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