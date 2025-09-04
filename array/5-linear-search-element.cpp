#include <iostream>
#include <vector>
using namespace std;

void printArrayElements(const vector<int> &array) {
    cout << "----Array Elements----\n";
    for (int i = 0; i < array.size(); i++) {
        cout << "the element at index["<< i << "]: " << array[i] << endl;
    }
}

void searchElement(vector<int> &array) {
    int search;
    bool isPresent = false;
    cout << "Please enter the element to search: ";
    cin >> search;
    for (int i = 0; i < array.size(); i++) {
        if (search == array[i]) {
            cout << "The element is present at index["<< i <<"]: " << array[i] << endl;
            isPresent = true;
            break;
        }
    }
    if (!isPresent) {
        cout << "The element is not present!!\n";
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
    searchElement(array);
    return 0;
}