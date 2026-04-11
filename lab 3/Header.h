#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;


template <typename T>
class AbstractStack {
public:
    virtual void push(T value) = 0;
    virtual T pop() = 0;
    virtual T top() const = 0;
    virtual bool isEmpty() const = 0;
    virtual bool isFull() const = 0;
    virtual ~AbstractStack() {}
};


template <typename T>
class myStack : public AbstractStack<T> {
private:
    T* arr;
    int topIndex;
    int capacity;

public:
    myStack(int size);

    void push(T value);
    T pop();
    T top() const;
    bool isEmpty() const;
    bool isFull() const;
    void display() const;

    ~myStack();
};

#endif#pragma once
