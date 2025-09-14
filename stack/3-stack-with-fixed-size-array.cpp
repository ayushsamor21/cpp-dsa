#include <iostream>
using namespace std;

class Stack {
    int topIndex;  // position of the last inserted element 
    int capacity;  // total number of element
    int* arr;      // dynamic array

    // Constructor
    public: 
        Stack (int capacity) {
            this->capacity = capacity; // capacity = cap;
            topIndex = -1;
            arr = new int[capacity];
        }

    // Destructor
    ~Stack() {
        delete[] arr;
    }

    bool push(int value) {
        if (topIndex >= capacity - 1) {
            cout << "Stack overflow\n";
            return false;
        }
        arr[++topIndex] = value; // increment topIndex, then assign
        return true;
    }

    int pop() { 
        if (topIndex < 0) {
            cout << "Stack underflow\n";
            return 0;
        }
        return arr[topIndex--];  // return current element, then decrement topIndex
    }

    int peek() {
        if (topIndex < 0) {
             cout << "Stack is Empty\n";
            return 0;
        }
        return arr[topIndex];    
    }

    bool isEmpty() {
        return topIndex < 0;
    }
};

int main() {
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top element of Stack: " << s.peek() << endl; // shows 40

    cout << "---Elements present in stack----\n";
    while (!s.isEmpty()) {
        cout << s.peek() << " ";   
        s.pop();                 
    }
    return 0;
}