#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> stackVector;
    int element;
    int numberOfElement;

    // push_back(push) : append element at back
    // pop_back(pop)  : remove the top element
    // back (peek)
    // empty(isEmpty)


    // stackVector.push_back(10);
    // stackVector.push_back(20);
    // stackVector.push_back(30);
    // stackVector.push_back(40);

    cout << "Please enter the number of elements: ";
    cin >> numberOfElement;

    for (int i = 0; i < numberOfElement; i++) {
        cout << "Please enter the element at position[" << i <<"]: ";
        cin >> element;
        stackVector.push_back(element);
    }


    cout << stackVector.back() << " popped from stack\n";
    stackVector.pop_back();

    cout << "----Elements in Vector Stack----\n";
    while (!stackVector.empty()) {
        cout << stackVector.back() << " ";
        stackVector.pop_back();
    }

    return 0;
}

