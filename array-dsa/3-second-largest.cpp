#include <iostream>
#include <vector>
using namespace std;

void secondLargest(const std::vector<int>& array) {
    if (array.size() < 2) {
        std::cout << "The vector must contain at least two elements." << std::endl;
        return;
    }

    int maxElement = array[0];
    int secondMax = array[0];

    for (int i = 0; i < array.size(); ++i) {
        if (array[i] > maxElement) {
            secondMax = maxElement;
            maxElement = array[i];
        } else if (secondMax < array[i]) {
            secondMax = array[i];
        }
    }
    cout << "The second largest element: "<< secondMax << endl;
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

    secondLargest(array);
    return 0;
}