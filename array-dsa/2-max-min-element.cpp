#include <iostream>
#include <vector>
using namespace std;

int maxElement(const vector<int> &array) {
    int maxElement = array[0];
    for (int i = 1; i < array.size(); i++){
        if (maxElement < array[i]) {
            maxElement = array[i];
        }
    }
    return maxElement;
}

int minElement(const vector<int> &array) {
    int minElement = array[0];
    for (int i = 1; i < array.size(); i++){
        if (minElement > array[i]) {
            minElement = array[i];
        }
    }
    return minElement;
}

int main() {
    int sizeOfArray;
    cout << "Please enter the size of the Array: ";
    cin >> sizeOfArray;

    vector<int> array(sizeOfArray, 0);

    for (int i = 0; i < array.size(); i++) {
        cout << "Please enter the element at index["<< i <<"]: ";
        cin >> array[i];
    }

    int max = maxElement(array);
    cout << "The maximum element in array: "<< max << endl;
    
    int min = minElement(array);
    cout << "The minimum element in array: "<< min << endl;
    return 0;
}