#include <iostream>
using namespace std;

int* InputArray(int& size) {
    cout << "Enter Size : ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    return arr;
}

void OutputArray(const int* myArray, const int& size) {
    cout << "Array after Compression: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
}

int* CompressArray(int* originalArr, int& size) {
    int k = 0;
    int count = size - 1;
    for (int i = 0; i < count; i++) {
        if (originalArr[i] == originalArr[i + 1]) {
            k++;
        }
    }
    int newSize = size - k;
    int* newArr = new int[newSize];
    for (int i = 0, l = 0; i < size; i++) {
        if (originalArr[i] != originalArr[i + 1]) {
            newArr[l] = originalArr[i];
            l++;
        }
    }
    delete[] originalArr;
    originalArr = NULL;
    size = newSize;
    return newArr;
}

int main() {
    int size;
    int* arr = InputArray(size);
    int* compressedArr = CompressArray(arr, size);
    OutputArray(compressedArr, size);
    delete[] compressedArr;
    compressedArr = NULL;
    return 0;
}
