#include<iostream>
using namespace std;
class Matrix {
private:
	int numRows;
	int numCols;
	int** matrix;
public:
	Matrix() {
		numRows = 0;
		numCols = 0;
		matrix = NULL;
	}
	Matrix(int numRows, int numCols) {
		this->numRows = numRows;
		this->numCols = numCols;
		matrix = new int* [numRows];
		for (int i = 0; i < numRows; i++) {
			matrix[i] = new int[numCols];
		}
	}
	~Matrix() {
		for (int i = 0; i < numRows; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
	}
	int getnumRows()const {
		return numRows;
	}
	int getnumCols()const {
		return numCols;
	}
	friend istream& operator >>(istream& in, Matrix& mat);
	friend ostream& operator <<(ostream& out, Matrix& mat);
	Matrix operator-() {
		Matrix m5(numRows, numCols);
		for (int i = 0; i < numRows; i++) {
			for (int j = 0; j < numCols; j++) {
				m5.matrix[i][j] = -matrix[i][j];
			}
		}
		return m5;
	}
	Matrix operator+(const Matrix& m);
	Matrix operator-(const Matrix& m);
	Matrix operator*(const Matrix& m)const {
		Matrix mul(numRows, m.numCols);
		 if (numCols != m.numRows) {
					cout << "Error : Invalid Matrix Multiplication" << endl;
	                exit(1);
				}
		     for (int i = 0; i < numRows; i++) {
                for (int j = 0; j < m.numCols; j++) {
                mul.matrix[i][j] = 0;
                for (int k = 0; k < numCols; k++) {
                    mul.matrix[i][j] += this->matrix[i][k] * m.matrix[k][j];
                }
            }
        }
        return mul;
    }
        	int* operator[](int i) {
		if (i > numRows || i > numCols || i < 0) {
			cout << "Index Out Of Bounds" << endl;
			return matrix[0];
		}
		return matrix[i];
	}
	Matrix(Matrix& obj) {
		numRows = obj.numRows;
		numCols = obj.numCols;
		matrix = new int* [numRows];
		for (int i = 0; i < numRows; i++) {
			matrix[i] = new int[numCols];
		}
		for (int i = 0; i < numRows; i++) {
			for (int j = 0; j < numCols; j++) {
				matrix[i][j] = obj.matrix[i][j];
			}
		}
	}
	void operator=(const Matrix& M) {
		numRows = M.numRows;
		numCols = M.numCols;
		matrix = new int* [numRows];
		for (int i = 0; i < numRows; i++) {
			matrix[i] = new int[numCols];
		}
		for (int i = 0; i < numRows; i++) {
			for (int j = 0; j < numCols; j++) {
				matrix[i][j] = M.matrix[i][j];
			}
		}
	}
};

	Matrix Matrix::operator+(const Matrix& m) {
		Matrix Add(numRows, numCols);
		for (int i = 0; i < numRows; i++) {
			for (int j = 0; j < numCols; j++) {
			    if (numRows != m.numRows || numCols != m.numCols || numRows != m.numCols || numCols != m.numRows) {
					break;
				}
				Add.matrix[i][j] = this->matrix[i][j] + m.matrix[i][j];
			}
		}
		return Add;
	}
	Matrix Matrix::operator-(const Matrix& m) {
		Matrix Sub(numRows, numCols);
		for (int i = 0; i < numRows; i++) {
			for (int j = 0; j < numCols; j++) {
			    if (numRows != m.numRows || numCols != m.numCols || numRows != m.numCols || numCols != m.numRows) {
					break;
				}
				Sub.matrix[i][j] = this->matrix[i][j] - m.matrix[i][j];
			}
		}
		return Sub;
	}
istream& operator >>(istream& in, Matrix& mat) {
	cout << "Enter Matrix Values" << endl;
	for (int i = 0; i < mat.numRows; i++) {
		for (int j = 0; j < mat.numCols; j++) {
			in >> mat.matrix[i][j];
		}
	}
	return in;
}
ostream& operator <<(ostream& out, Matrix& mat) {
	cout << "Matrix Is" << endl;
	for (int i = 0; i < mat.numRows; i++) {
		for (int j = 0; j < mat.numCols; j++) {
			out << mat.matrix[i][j] << " ";
		}
		cout << endl;
	}
	return out;
}
int main() {
	int numRows, numCols;
	Matrix m1(3,2), m2(2,3), m3, m4, m6, m7, m8;
	numRows = m1.getnumRows();
	numCols = m1.getnumCols();
	numRows = m2.getnumRows();
	numCols = m2.getnumCols();
	cout << "For Matrix 1" << endl;
	cin >> m1;
	cout << m1;
	cout << "For Matrix 2" << endl;
	cin >> m2;
	cout << m2;
	m3 = m1;
	m6 = -m1;
	cout << "Unary Minus(-) operator" << endl;
	cout << m6;
	m6 = -m2;
	cout << "Unary Minus(-) operator" << endl;
	cout << m6;
	cout << "Value Of Matrix[0][0] : " << m1[0][0] << endl;
	cout << "Value Of Matrix[-3][-1] : " << m1[-3][-1] << endl;
	cout << "Value Of Matrix[1][0] : " << m2[1][0] << endl;
	cout << "Value Of Matrix[4][1] : " << m2[4][1] << endl;
	cout << "After Deep Copy" << endl;
	cout << m3;
	cout << "Addition Of Matrices" << endl;
	m4 = m1 + m2;
	cout << m4;
	cout << "Subtraction Of Matrices" << endl;
	m7 = m1 - m2;
	cout << m7;
	cout << "Multiplication Of Matrices" << endl;
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numCols; j++) {
		    m8 = m1 * m2;
		}
	}
	cout << m8;
	return 0;
}