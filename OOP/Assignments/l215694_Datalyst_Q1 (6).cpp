#include <iostream>
using namespace std;
int main() {
	int rows, cols;
	cout << "Enter Rows and Cols : ";
	cin >> rows >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> *(*(arr + i) + j);
		}
	}
	cout << "Array" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << *(*(arr + i) + j) << " ";
		}
		cout << endl;
	}
	int k = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (*(*(arr + i) + j) == 0) {
				k++;
			}
		}
	}
	int** newarr = new int* [rows];
	for (int i = 0, l = 0; i < rows; i++) {
		*(newarr + i) = new int[k];
	}
	int* tmp = new int[rows];
	for (int i = 0; i < rows; i++) {
		int newSize = 0;
		for (int j = 0; j < cols; j++) {
			if (*(*(arr + i) + j) != 0) {
				*(*(newarr + i) + newSize) = *(*(arr + i) + j);
				newSize++;
			}
		}
		tmp[i] = newSize;
	}
	cout << "After Removing Zeroes" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < tmp[i]; j++) {
			cout << *(*(newarr + i) + j) << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
		delete[]newarr[i];
	}
	delete[]arr;
	delete[]newarr;
	delete[]tmp;
	arr = NULL;
	newarr = NULL;
	tmp = NULL;
	return 0;
}

