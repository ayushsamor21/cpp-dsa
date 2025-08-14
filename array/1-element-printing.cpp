#include <iostream>
#include <vector>
using namespace std;

void printArrayElements(const vector<int> &array){
    cout << "----Array Elements----\n";
    for (int i = 0; i < array.size(); i++) {
        cout << "index["<< i <<"]: " << array[i] << endl;
    }
}


int main(){
    int sizeOfArray;
    cout << "Please enter the size of the Array: ";
    cin >> sizeOfArray;

    vector<int> array(sizeOfArray, 0);

    for (int i = 0; i < array.size(); i++) {
        cout << "Please enter the element at index["<< i <<"]: ";
        cin >> array[i];
    }

    printArrayElements(array);
    return 0;
}