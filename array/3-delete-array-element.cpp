#include <iostream>
#include <vector>
using namespace std;

void printArrayElements(const vector<int> &array) {
    cout << "---- Original Array Elements----\n";
    for (int i = 0; i < array.size(); i++) {
        cout << "the element at index["<< i << "]: " << array[i] << endl;
    }
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

    int targetIndex;
    cout << "Please enter the target Index: ";
    cin >> targetIndex;

    if (targetIndex >= 0 && targetIndex <= array.size()) {
        array.erase(array.begin() + targetIndex);
        cout << "Deleted successfully !!";
    } else {
        cout << "Failed !!";
    }

    printArrayElements(array);
    return 0;
}