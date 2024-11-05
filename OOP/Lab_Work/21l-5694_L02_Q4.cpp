#include <iostream>
using namespace std;
int ** AllocateMemory(int& rows, int& cols){
    int** matrix = new int* [rows];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i] = new int [cols];
        }
    }
    return matrix;
}
void InputMatrix(int** matrix, const int rows, const int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; ++j){
            cin >> matrix[i][j];
        }
    }
}
void DisplayMatrix(int** matrix, const int& rows, const int& cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void GetDiagnol(int **matrix, int &rows, int &cols){
    cout<<"Main Diagnol"<<endl;
  	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(i == j){
			cout << matrix[i][j] << " ";
		}
		}
	}
}
int main(){
    int rows, cols;
    cout << "Enter Rows and Cols :" ;
    cin >> rows >> cols;
    int ** matrix;
    matrix = AllocateMemory(rows, cols);
    cout << "Input Matrix  \n";
    InputMatrix(matrix, rows, cols);
    cout << "Matrix is \n";
    DisplayMatrix(matrix, rows, cols);
    GetDiagnol(matrix,rows,cols);
    return 0;
}
