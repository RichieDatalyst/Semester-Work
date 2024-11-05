#include<iostream>
using namespace std;
void fillArray(int**& arr, int& rows, int& cols) {
    cout << "Enter The Size Of Rows : ";
    cin >> rows;
    arr = new int* [rows];
    int data;
    for (int i = 0; i < rows; i++) {
        cout << "Enter The Columns(Number Of Elements) For Row#" << i << " : ";
        cin >> cols;
        for (int j = 0; j < cols; j++) {
            cin >> data;
            *(arr + i) = new int[cols];
            if (data < 0) {
                cout << "Data Must Be Positive.\n Enter Again : ";
                cin >> data;
            }
            *(*(arr + i) + j) = data;
        }
    }
}
int* twoDimToOneDim(int** arr, int rows, int cols, int& size) {
    size = rows * cols;
    int* newarr = new int[size];
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(newarr + index++) = *(*(arr + i) + j);
        }
    }
    return newarr;
}
void SortArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                int T = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = T;
            }
        }
    }
}
void showarr(const int* arr, int size) {
    cout << "Contents Of Sorted 1-D Array : ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
int main() {
    int** arr, rows, cols;
    fillArray(arr, rows, cols);
    int size;
    int* newarr = twoDimToOneDim(arr, rows, cols, size);
    SortArr(newarr, size);
    showarr(newarr, size);

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] newarr;

    return 0;
}
