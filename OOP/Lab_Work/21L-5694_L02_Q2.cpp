#include <iostream>
using namespace std;
inline int ** AllocateMemory(int& rows, int& cols){
    int** matrix = new int* [rows];
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            matrix[i] = new int [cols];
        }
    }
    return matrix;
}
inline int **InputMatrix(int** matrix, const int rows, const int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; ++j){
            cin >> matrix[i][j];
        }
    }
    return matrix;
}
inline void DisplayMatrix(int** matrix, const int& rows, const int& cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
inline int ** DeallocateMemory(int& rows, int& cols){
    int **matrix;
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            delete[]matrix[i];
            delete[]matrix;
        }
    }
    return 0;
}
int main(){
    int rows,cols;
    cout<<"Enter Rows and Cols : ";
    cin>>rows>>cols;
    int ** matrix;
    matrix = AllocateMemory(rows, cols);
    cout << "Input Matrix  \n";
    InputMatrix(matrix, rows, cols);
    cout << "Matrix is \n";
    DisplayMatrix(matrix, rows, cols);
    matrix = DeallocateMemory(rows,cols);
    cout<<"After Deallocation"<<endl;
    DisplayMatrix(matrix, rows, cols);
    return 0;
}


