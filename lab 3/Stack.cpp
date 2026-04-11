#include "stack.h"

template <typename T>
myStack<T>::myStack(int size) {
    capacity = size;
    arr = new T[capacity];
    topIndex = -1;
}


template <typename T>
void myStack<T>::push(T value) {
    if (isFull()) {
        cout << "Stack Overflow!" << endl;
        return;
    }
    arr[++topIndex] = value;
}


template <typename T>
T myStack<T>::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow!" << endl;
        return T();
    }
    return arr[topIndex--];
}


template <typename T>
T myStack<T>::top() const {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return T();
    }
    return arr[topIndex];
}


template <typename T>
bool myStack<T>::isEmpty() const {
    return (topIndex == -1);
}

template <typename T>
bool myStack<T>::isFull() const {
    return (topIndex == capacity - 1);
}

template <typename T>
void myStack<T>::display() const {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return;
    }

    cout << "Stack (top to bottom):" << endl;
    for (int i = topIndex; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}


template <typename T>
myStack<T>::~myStack() {
    delete[] arr;
}