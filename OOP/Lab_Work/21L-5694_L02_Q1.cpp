#include<iostream>
using namespace std;
inline void  *Set_Intersection(int *setA, int &size1, int *setB, int &size2, int *setC, int &size3) {
    size3=size1+size2;
    int flag = 0;
    cout << "Intersection Is (AnB) : ";
    for (int q = 0; q < size1 ; q++) { 
        //int flag = 0;
        for (int w = 0; w < size2 ; w++) {
            if (setA[q] == setB[w]) {
                flag++;
                setC[q] = setB[w];
            }
        }
}         if(flag > 0)
          for(int i=0; i < size3; i++){
              cout << setC[i]<<" ";
          }
    cout << endl;
    return 0;
}
int main() {
    int size1, size2,size3;
    int* arrA, * arrB, * arrC;
    arrC = new int[size3];
    arrA = new int[size1];
    arrA = new int[size2];
    arrB = new int[size2];
    arrB = new int[size1];
    cout << "Enter The Size Of The First Array : ";
    cin >> size1;
    cout << "Enter The Elements Of The First Array : ";
    for (int i = 0; i < size1; i++) {
        cin >> arrA[i];
    }
    for (int i = 0; i < size1; i++) {
        cout << arrA[i] << " " << endl;;
    }
    cout << "Enter The Size Of The Second Array : ";
    cin >> size2;
    cout << "Enter The Elements Of The Second Array : ";
    for (int j = 0; j < size2; j++) {
        cin >> arrB[j];
    }
    for (int j = 0; j < size2; j++) {
        cout << arrB[j] << " " << endl;
    }
    Set_Intersection(arrA, size1, arrB, size2, arrC, size3);
    return 0;
}
