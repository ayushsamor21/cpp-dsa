#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Please enter the number of rows: ";
    cin >> rows;

    cout << "Please enter the number of columns: ";
    cin >> columns;

    int matrix1[100][100], matrix2[100][100], matrix3[100][100];
    // some version the array element should be known in compile time

    cout << "--Enter elements of matrix 1--\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Please enter element at index["<< i <<"],["<< j <<"]: ";
            cin >> matrix1[i][j];
        }
    }
 
    cout << "--Enter elements of matrix 2--\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Please enter element at index["<< i <<"],["<< j <<"]: ";
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "--Matrix 3--\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "the element at index["<< i <<"]["<< j <<"]: " << matrix3[i][j]<< endl;
        }
    }
    return 0;
}