#include <iostream>
using namespace std;

int maxsize(int size1, int size2){
    if(size1 > size2){
        return size1;
    }
    return size2;
}

void inputPolynomial(int *&coeff, int *&expo, int &size){
    cout << "Enter Number Of Terms For Polynomial : ";
    cin >> size;
    coeff = new int[size];
    expo = new int[size];
    cout << "Enter Coefficients : ";
    for(int i = 0; i < size; i++){
        cin >> coeff[i];
    }
    cout << "Enter Exponential Power : ";
    for(int i = 0; i < size; i++){
        cin >> expo[i];
        if(i > 0 && expo[i] < expo[i+1]){
            cout << "Enter Exponential Powers Again : ";
            cin >> expo[i];
        }
    }
}

void outputPolynomial(int *coeff, int *expo, int size){
    for(int i = 0; i < size ; i++){
        cout << coeff[i] << "X^" << expo[i] << "+";
    }
    cout << endl;
}

void addPolynomial(int *coeff1, int *coeff2, int size1, int size2, int *&sum, int &size){
    size = maxsize(size1, size2);
    sum = new int[size];
    for(int i = 0; i < size ; i++){
        sum[i] = 0;
        if(i < size1){
            sum[i] += coeff1[i];
        }
        if(i < size2){
            sum[i] += coeff2[i];
        }
    }
}

void mulPolynomial(int *coeff1, int *coeff2, int size1, int size2, int *&mul, int &size){
    size = size1 + size2 - 1;
    mul = new int[size];
   for(int i = 0; i < size; i++){
        mul[i] = 0;
    }
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            mul[i] += coeff1[i] * coeff2[j];
        }
    }
}


int main(){
    int *coeff1, *coeff2, *expo1, *expo2, *sum, *mul;
    int size1, size2, size;
    inputPolynomial(coeff1, expo1, size1);
    inputPolynomial(coeff2, expo2, size2);
    cout << "FIRST POLYNOMIAL" << endl;
    outputPolynomial(coeff1, expo1, size1);
    cout << "SECOND POLYNOMIAL" << endl;
    outputPolynomial(coeff2, expo2, size2);
    addPolynomial(coeff1, coeff2, size1, size2, sum, size);
    cout << "After Adding Two Polynomials" << endl;
    outputPolynomial(sum, expo1, size);
    mulPolynomial(coeff1, coeff2, size1, size2, mul, size);
    cout << "After Multiplying Two Polynomials" << endl;
    outputPolynomial(mul, expo1, size);
    delete[] coeff1;
    delete[] coeff2;
    delete[] expo1;
    delete[] expo2;
    delete[] sum;
    delete[] mul;
    return 0;
}
