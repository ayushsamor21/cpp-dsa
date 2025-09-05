#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, columns;
    cout << "Please enter the number of rows: ";
    cin >> rows;

    cout << "Please enter the number of columns: ";
    cin >> columns;

    vector<vector<int> > matrix1(rows, vector<int> (columns));
    vector<vector<int> > matrix2(rows, vector<int> (columns));
    vector<vector<int> > matrix3(rows, vector<int> (columns));

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