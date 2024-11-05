#include<iostream>
using namespace std;
int main() {
    int size;
    int* arr = new int[size];
    cout << "Enter Number Of Size : ";
    cin >> size;
    cout << "Enter Array U : ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    int n;
    int* newarr = new int[n];
    cout << "Enter Number Of Size : ";
    cin >> n;
    cout << "Enter Array A : ";
    for (int i = 0; i < n; i++) {
        cin >> *(newarr + i);
    }
    for (int i = 0; i < n; i++) {
        cout << *(newarr + i) << " ";
    }
    cout << endl;
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < n; j++) {
            if (*(arr + i) == *(newarr + j)) {
                count++;
                break;
            }
        }
    }
    int newsize = size + n - count;
    cout << "Intersection Is (UnA) : ";
    for (int q = 0; q < newsize; q++) {
        for (int w = 0; w < newsize; w++) {
            if (*(arr + q) == *(newarr + w)) {
                bool flag = false;
                for (int l = 0; l < q; l++) {
                    if (*(arr + q) == *(arr + l)) {
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    cout << *(arr + q) << " ";
                }
                break;
            }
        }
    }
    delete[] arr;
    arr = NULL;
    delete[] newarr;
    newarr = NULL;
    return 0;
}