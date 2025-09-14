#include <iostream>
#include <vector>
using namespace std;

int main(){
    int capacity, value;
    cout << "Please enter the size of stack: ";
    cin >> capacity;

    vector<int> intStack;

    for (int i = 0; i < capacity; i++){
        cout << "Please enter the element of stack: ";
        cin >> value;
        intStack.push_back(value);
    }

    cout << intStack.back() << " popped from stack\n"; // access the top element
    intStack.pop_back(); // remove the top element

    cout << "Top element is: " << intStack.back() << endl;

    cout << "Elements present in stack: ";
    while (!intStack.empty()) {
        cout << intStack.back() << " ";
        intStack.pop_back();
    }

    return 0;
}