#include <iostream>
using namespace std;
int** AllocateMemory(int& rows, int& cols) {
    cout << "Enter Rows and Cols :";
    cin >> rows >> cols;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i] = new int[cols];
        }
    }
    return matrix;
}
//Advantage : passing rows and cols by reference will allow to modify the values at the execution time.
void InitializeMatrix(int** matrix, const int rows, const int cols) {
    matrix = { 0 };
}
//By designating a parameter as const, you guarantee that the function cannot unintentionally or accidently change the parameter's value, guaranteeing safety and avoiding alterations to the matrix's dimensions.
void DisplayMatrix(int** matrix, const int& rows, const int& cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void DeallocateMemory(int** matrix, const int& rows) {
    for (int i = 0; i < rows; i++) {
        delete[]matrix[i];
    }
    delete[]matrix;
}
int main() {
    int** matrix, rows, cols;
    matrix = AllocateMemory(rows, cols);
    InitializeMatrix(matrix, rows, cols);
    cout << "Matrix is \n";
    DisplayMatrix(matrix, rows, cols);
    DeallocateMemory(matrix, rows);
    return 0;
}