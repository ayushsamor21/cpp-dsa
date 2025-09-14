#include <iostream>
#include <string>
using namespace std;

class Stack {
    int topIndex;
    int capacity;
    int* arr;

public:
    // Constructor
    Stack(int capacity) {
        this->capacity = capacity;
        topIndex = -1;
        arr = new int[capacity];
    }

    // Copy constructor for deep copy
    Stack(const Stack& other) {
        this->capacity = other.capacity;
        this->topIndex = other.topIndex;
        arr = new int[capacity];
        for (int i = 0; i <= topIndex; i++) {
            arr[i] = other.arr[i];
        }
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
        arr[++topIndex] = value;
        return true;
    }

    int pop() {
        if (topIndex < 0) {
            cout << "Stack underflow\n";
            return 0;
        }
        return arr[topIndex--];
    }

    int peek() {
        if (topIndex < 0) {
            cout << "Stack is empty\n";
            return 0;
        }
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex < 0;
    }
};

int main() {
    string checkPalindrome;
    cout << "Please enter the string: ";
    cin >> checkPalindrome;

    int sizeOfString = checkPalindrome.size();
    Stack s1(sizeOfString);

    // Push all characters into stack s1
    for (int i = 0; i < sizeOfString; i++) {
        s1.push(checkPalindrome[i]);
    }

    // Make a copy of s1 to reverse it
    Stack temp = s1;
    Stack s2(sizeOfString);

    while (!temp.isEmpty()) {
        s2.push(temp.pop());
    }

    // Check palindrome
    bool isPalindrome = true;
    while (!s1.isEmpty() && !s2.isEmpty()) {
        if (s1.pop() != s2.pop()) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << checkPalindrome << " is a palindrome.\n";
    else
        cout << checkPalindrome << " is not a palindrome.\n";

    return 0;
}
