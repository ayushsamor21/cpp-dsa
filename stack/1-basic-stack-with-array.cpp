#include <iostream>
using namespace std; 

class IntStack {
    int topIndex, capacity;
    int *data;

    public:
        IntStack(int cap) {
            this->capacity = cap;
            topIndex = -1;
            data = new int[cap];
        }

        ~IntStack() {
            delete[] data;
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
    stack.push(100);
    stack.push(200);
    stack.push(300);

    cout << "the element" << stack.pop() << " popped from stack\n";
    cout << "Top element is: " << stack.peek() << endl;

    cout << "Elements present in stack: ";
    while (!stack.isEmpty()) {
        cout << stack.peek() << " ";
        stack.pop();
    }
    cout << endl;

    return 0;
}

