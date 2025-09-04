#include <iostream>
#include <vector>
using namespace std;

void printArrayElements(const vector<int> &array) {
    cout << "----Array Elements----\n";
    for (int i = 0; i < array.size(); i++) {
        cout << "the element at index["<< i << "]: " << array[i] << endl;
    }
}

void updateArrayElements(vector<int> &array) {
    int newElement, targetIndex;
    cout << "Please enter the target index: ";
    cin >> targetIndex;

    cout << "Please enter the new element: ";
    cin >> newElement;

    for (int i = 0; i < array.size(); i++) {
        if (targetIndex == i) {
            array[i] = newElement;
        }
    }
    printArrayElements(array);
}

int main() {
    int sizeOfArray;
    cout << "Please enter the size of array: ";
    cin >> sizeOfArray;

    vector<int> array(sizeOfArray, 0);

    for (int i = 0; i < array.size(); i++) {
        cout << "Please enter the element at index["<< i <<"] : ";
        cin >> array[i];
    }
    printArrayElements(array);
    updateArrayElements(array);
    return 0;
}