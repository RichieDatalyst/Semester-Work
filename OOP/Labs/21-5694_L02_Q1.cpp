#include<iostream>
using namespace std;

void populate_array(int** my_array, int m, int n) {
    cout << "Enter elements of the matrix:" << endl;
    for(int i = 0; i < m; i++ ) {
        for(int j = 0; j < n; j++) {
            cin >> my_array[i][j];
        }
    }
}

void disp_array(int** my_array, int m, int n) {
    for(int i = 0; i < m; i++ ) {
        for(int j = 0; j < n; j++) {
            cout << my_array[i][j] << " ";
        }
        cout << endl;
    }
}

int** transpose_array(int** my_array, int m, int n) {
    int** transpose = new int*[n];
    for(int i = 0; i < n; i++) {
        transpose[i] = new int[m];
    }

    for(int i = 0; i < m; i++ ) {
        for(int j = 0; j < n; j++) {
            transpose[j][i] = my_array[i][j];
        }
    }

    cout << "Transpose of Matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return transpose;
}

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    int** my_array = new int*[m];
    for(int i = 0; i < m; i++ ) {
        my_array[i] = new int[n];
    }

    populate_array(my_array, m, n);

    cout << "Original Matrix:" << endl;
    disp_array(my_array, m, n);

    int** transpose = transpose_array(my_array, m, n);

    for(int i = 0; i < m; i++ ) {
        delete[] my_array[i];
    }
    delete[] my_array;

    for(int i = 0; i < n; i++) {
        delete[] transpose[i];
    }
    delete[] transpose;

    return 0;
}
