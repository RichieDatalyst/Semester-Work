#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n1, n2, T;
    int* arr = new int[n1];
    int* arr2 = new int[n2];
    cout << "Enter The Size Of The Array 1 : ";
    cin >> n1;
    cout << "Enter The Elements Of The Array 1 : ";
    for (int i = 0; i < n1; i++) {
        cin >> *(arr + i);
    }
    for (int i = 0; i < n1; i++) {
        for (int j = i + 1; j < n1; j++) {
            if (*(arr + i) > *(arr + j)) {
                T = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = T;
            }
        }
    }
    cout << "Sorted Array In Ascending Order" << endl;
    for (int i = 0; i < n1; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    cout << "Enter The Size Of The Array 2 : ";
    cin >> n2;
    cout << "Enter The Elements Of The Array 2 : ";
    for (int i = 0; i < n2; i++) {
        cin >> *(arr2 + i);
    }
    for (int i = 0; i < n2; i++) {
        for (int j = i + 1; j < n2; j++) {
            if (*(arr2 + i) < *(arr2 + j)) {
                T = *(arr2 + i);
                *(arr2 + i) = *(arr2 + j);
                *(arr2 + j) = T;
            }
        }
    }
    cout << "Sorted Array In Descending Order" << endl;
    for (int i = 0; i < n2; i++) {
        cout << *(arr2 + i) << " ";
    }
    cout << endl;
    int n3 = n1 + n2;
    int* newarr = new int[n3];
    for (int i = 0; i < n1; i++) {
        *(newarr + i) = *(arr + i);
    }
    int c = n1;
    for (int i = 0; i < n2; i++) {
        *(newarr + c) = *(arr2 + i);
        c++;
    }
    sort(newarr, newarr + n3);
    cout << "Merged Array" << endl;
    for (int i = 0; i < n3; i++) {
        cout << *(newarr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    arr = NULL;
    delete[] arr2;
    arr2 = NULL;
    delete[] newarr;
    newarr = NULL;
    return 0;
}



