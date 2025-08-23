#include <iostream>
using namespace std; 

class IntStack {
    int topIndex, capacity;
    int *data;

    public:
    IntStack(int capacity) {
        this->capacity = capacity;
        topIndex = -1;
        data = new int[capacity];
    }

    bool push(int value) {
        if (topIndex >= capacity - 1) {
            cout << "Stack Overflow\n";
            return false;
        }
        //topIndex = topIndex + 1;
        data[++topIndex] = value;
        return true;
    }

    int pop() {
        if (topIndex < 0) {
        cout << "Stack Underflow\n";
        return 0;
        }
        return data[topIndex--];
    }

    int peek() {
        if (topIndex < 0) {
        cout << "Stack is Empty\n";
        return 0;
        }
        return data[topIndex];
    }

    bool isEmpty() {
        return topIndex < 0;
    }
};

int main() {
    IntStack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << " popped from stack\n";
    cout << "Top element is: " << stack.peek() << endl;

    cout << "Elements present in stack: ";
    while (!stack.isEmpty()) {
        cout << stack.peek() << " ";
        stack.pop();
    }
    cout << endl;

    return 0;
}

