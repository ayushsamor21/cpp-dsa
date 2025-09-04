#include <iostream>

int main() {
    int sizeOfArray;
    bool sorted = true;
    std::cout << "Please enter the size of array: ";
    std::cin >> sizeOfArray;

    int* array = new int[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++) {
        std::cout << "Please enter the element at index["<< i <<"]: ";
        std::cin >> array[i];
    }

    for (int i = 0; i < sizeOfArray - 1; i++) {
        if (array[i] > array[i + 1]){
           sorted = false;
        }
    }

    if (sorted == true) {
        std::cout << "The array is sorted.\n";
    } else {
        std::cout << "The array is not sorted.\n";
    }

    delete[] array;
    return 0;
}
