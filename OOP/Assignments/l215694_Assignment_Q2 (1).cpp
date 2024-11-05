#include <iostream>
#include <algorithm>
using namespace std;

class myPolynomial {
private:
    float* coeffArray;
    float* degreeArray;
    int terms;

public:
    myPolynomial() {
        coeffArray = nullptr;
        degreeArray = nullptr;
        terms = 0;
    }

    myPolynomial(float* coeffArray, float* degreeArray, int terms) {
        this->coeffArray = new float[terms];
        this->degreeArray = new float[terms];
        for (int i = 0; i < terms; i++) {
            this->coeffArray[i] = coeffArray[i];
            this->degreeArray[i] = degreeArray[i];
        }
        this->terms = terms;
    }

    myPolynomial(const myPolynomial& obj) {
        this->coeffArray = new float[obj.terms];
        this->degreeArray = new float[obj.terms];
        for (int i = 0; i < obj.terms; i++) {
            this->coeffArray[i] = obj.coeffArray[i];
            this->degreeArray[i] = obj.degreeArray[i];
        }
        this->terms = obj.terms;
    }

    ~myPolynomial() {
        delete[] coeffArray;
        delete[] degreeArray;
        coeffArray = nullptr;
        degreeArray = nullptr;
    }

    void input() {
        cout << "Enter Number Of Terms For Polynomial : ";
        cin >> terms;
        coeffArray = new float[terms];
        degreeArray = new float[terms];
        cout << "Enter Coefficients : ";
        for (int i = 0; i < terms; i++) {
            cin >> *(coeffArray + i);
        }
        cout << "Enter Exponential Power : ";
        for (int i = 0; i < terms; i++) {
            cin >> *(degreeArray + i);
        }
        for (int i = 1; i < terms; i++) {
            while (*(degreeArray + i) == *(degreeArray + i - 1)) {
                cout << "No Duplicates Allowed" << endl;
                cout << "Enter Exponential Power Again : ";
                cin >> *(degreeArray + i);
            }
        }

        float temp;
        for (int i = 0; i < terms; i++) {
            for (int j = i + 1; j < terms; j++) {
                if (*(degreeArray + i) < *(degreeArray + j)) {
                    temp = *(degreeArray + i);
                    *(degreeArray + i) = *(degreeArray + j);
                    *(degreeArray + j) = temp;
                }
            }
        }
    }

    void print() {
        for (int i = 0; i < terms; i++) {
            cout << *(coeffArray + i) << "X^" << *(degreeArray + i);
            if (i < terms - 1) {
                cout << " + ";
            }
        }
        cout << endl;
    }

    myPolynomial operator +(const myPolynomial& obj) {
        myPolynomial sum(*this);
        int size = max(terms, obj.terms);

        for (int i = 0; i < size; i++) {
            if (i >= terms) {
                sum.coeffArray[i] = obj.coeffArray[i];
                sum.degreeArray[i] = obj.degreeArray[i];
            }
            else if (i < obj.terms) {
                sum.coeffArray[i] += obj.coeffArray[i];
            }
        }
        sum.terms = size;
        return sum;
    }

    myPolynomial operator -(const myPolynomial& obj) {
        myPolynomial diff(*this);
        int size = max(terms, obj.terms);

        for (int i = 0; i < size; i++) {
            if (i >= terms) {
                diff.coeffArray[i] = -obj.coeffArray[i];
                diff.degreeArray[i] = obj.degreeArray[i];
            }
            else if (i < obj.terms) {
                diff.coeffArray[i] -= obj.coeffArray[i];
            }
        }
        diff.terms = size;
        return diff;
    }

    myPolynomial operator *(const myPolynomial& obj) {
        int size = terms + obj.terms - 1;
        float* newCoeffArray = new float[size];
        float* newDegreeArray = new float[size];

        for (int i = 0; i < size; i++) {
            newCoeffArray[i] = 0.0;
            newDegreeArray[i] = 0.0;
        }

        for (int i = 0; i < terms; i++) {
            for (int j = 0; j < obj.terms; j++) {
                newCoeffArray[i + j] += coeffArray[i] * obj.coeffArray[j];
                newDegreeArray[i + j] = degreeArray[i] + obj.degreeArray[j];
            }
        }

        myPolynomial mul(newCoeffArray, newDegreeArray, size);
        delete[] newCoeffArray;
        delete[] newDegreeArray;
        return mul;
    }

    void operator =(const myPolynomial& obj) {
        if (this == &obj) {
            return;
        }
        delete[] coeffArray;
        delete[] degreeArray;
        this->coeffArray = new float[obj.terms];
        this->degreeArray = new float[obj.terms];
        for (int i = 0; i < obj.terms; i++) {
            this->coeffArray[i] = obj.coeffArray[i];
            this->degreeArray[i] = obj.degreeArray[i];
        }
        this->terms = obj.terms;
    }

    bool operator ==(const myPolynomial& obj) {
        if (terms != obj.terms) {
            return false;
        }
        for (int i = 0; i < terms; i++) {
            if (coeffArray[i] != obj.coeffArray[i] || degreeArray[i] != obj.degreeArray[i]) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    myPolynomial a, b, c, d, e;
    char ch;
    while (true) {

        cout << "Press I For Input " << endl << "Press A For Addition" << endl << "Press S For Subtraction" << endl << "Press M For Multiplication" << endl << "Press C For Comparison" << endl << "Press P For Print" << endl << "Press E For Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch) {
        case 'I':
            a.input();
            b.input();
            break;
        case 'A':
            c = a + b;
            cout << "After Adding Two Polynomials" << endl;
            c.print();
            break;
        case 'S':
            d = a - b;
            cout << "After Subtracting Two Polynomials" << endl;
            d.print();
            break;
        case 'M':
            e = a * b;
            cout << "After Multiplying Two Polynomials" << endl;
            e.print();
            break;
        case 'C':
            if (a == b) {
                cout << "Same Polynomials" << endl;
            }
            else {
                cout << "Different Polynomials" << endl;
            }
            break;
        case 'P':
            cout << "Polynomial a" << endl;
            a.print();
            cout << "Polynomial b" << endl;
            b.print();
            cout << "Polynomial c" << endl;
            c.print();
            cout << "Polynomial d" << endl;
            d.print();
            cout << "Polynomial e" << endl;
            e.print();
            break;
        case 'E':
            exit(0);
            break;
        default:
            cout << "Error! Press Required Alphabet" << endl;
            break;
        }
    }
    return 0;
}
