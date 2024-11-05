#include<iostream>
using namespace std;
void Set_Intersection(int arr1[], int arr2[], int n1, int n2) {
    cout << "Intersection Is (AnB) : ";
    for (int q = 0; q < n1 ; q++) {
        int flag = 0;
        for (int w = 0; w < n2 ; w++) {
            if (arr1[q] == arr2[w]) {
                flag++;
            }
        }
        if (flag > 0) {
            cout << arr1[q] << " ";
        }
    }
    cout << endl;

}
int main() {
    int n1, n2;
    int* arr1, * arr2;
    arr1 = new int[n1];
    arr1 = new int[n2];
    arr2 = new int[n2];
    arr2 = new int[n1];
    cout << "Enter The Size Of The First Array : ";
    cin >> n1;
    cout << "Enter The Elements Of The First Array : ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " " << endl;;
    }
    cout << "Enter The Size Of The Second Array : ";
    cin >> n2;
    cout << "Enter The Elements Of The Second Array : ";
    for (int j = 0; j < n2; j++) {
        cin >> arr2[j];
    }
    for (int j = 0; j < n2; j++) {
        cout << arr2[j] << " " << endl;
    }
    Set_Intersection(arr1, arr2, n1, n2);
    return 0;
}
