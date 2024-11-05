#include <iostream>
using namespace std;
char ** AllocateMemory(int& rows, int& cols){
    char** matrix = new char* [rows];
    for(int i=0; i<rows; i++){
            matrix[i] = new char [cols];
        }
    return matrix;
}
void InputMatrix(char** matrix, const int rows, const int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; ++j){
            cin >> matrix[i][j];
        }
    }
}
void DisplayMatrix(char** matrix, const int& rows, const int& cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void CheckMatrix(char** matrix, char*& character, char*& integers, char*&special ,const int& rows, const int& cols, int& countchar, int& countint, int& countspecial){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] >= 'A' && matrix[i][j] <= 'Z' || matrix[i][j] >= 'a' && matrix[i][j] <= 'z' ){
                countchar++;
            }
            else if(matrix[i][j] >= 48 && matrix[i][j] <= 57){
                countint++;
            }
            else if(matrix[i][j] >= 33 && matrix[i][j] <=47 || matrix[i][j] >= 58 && matrix[i][j] <=64 ){
                countspecial++;
            }
        }
    }
    cout << "COUNT CHAR = " << countchar << endl;
    cout << "COUNT INTEGERS = " << countint << endl;
    cout << "COUNT SPECIAL = " << countspecial << endl;
    character = new char[countchar];
    integers = new char[countint];
    special = new char [countspecial];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] >= 'A' && matrix[i][j] <= 'Z' || matrix[i][j] >= 'a' && matrix[i][j] <= 'z' ){
                character[j] = matrix[i][j];
            }
            else if(matrix[i][j] >= 48 && matrix[i][j] <= 57){
                integers[j] = matrix[i][j];
            }
            else if(matrix[i][j] >= 33 && matrix[i][j] <=47 || matrix[i][j] >= 58 && matrix[i][j] <=64 ){
                special[j] = matrix[i][j];
            }
        }
    }
}
int main(){
    char* character;
    char* integers;
    char* special;
    int countchar = 0;
    int countint = 0;
    int countspecial = 0;
    int rows, cols;
    cout << "Enter Rows : " ;
    cin >> rows;
    cout << "Enter Columns : ";
    cin >> cols;
    char ** matrix;
    matrix = AllocateMemory(rows, cols);
    cout << "Input Matrix  \n";
    InputMatrix(matrix, rows, cols);
    cout << "Matrix is \n";
    DisplayMatrix(matrix, rows, cols);
    CheckMatrix(matrix,character, integers, special ,rows, cols, countchar, countint, countspecial);
    cout << "Characters are : \n";
    for(int i=0; i<countchar; i++){
        cout << character[i] << " ";
    }
    cout << endl;
    cout << "Integers are : \n";
    for(int j=0; j<countint; j++){
        cout << integers[j] << " ";
    }
    cout << endl;
    cout << "Special Characters are : \n";
    for(int k=0; k<countspecial; k++){
        cout << special[k] << " ";
    }
    return 0;
}