#include<iostream>
using namespace std;
class ComplexNumber
{
private:
	int real;
	int imaginary;
public:
	ComplexNumber(); //for default constructor
	ComplexNumber(int, int); //with default arguments
	~ComplexNumber(); //Does Nothing.
	void Input();
	void Output();
	bool IsEqual(ComplexNumber);
	ComplexNumber Conjugate();
	// Adding two complex numbers ( a + bi ) and ( c + di ) yields ( (a+b) + (c+d)i )
	ComplexNumber  operator+ (const ComplexNumber& num);
	//Subtracting two complex numbers (a + bi) and (c + di) yields ((a-b) + (c-d)i).
	ComplexNumber  operator- (const ComplexNumber& num);
	//Multiplying two complex numbers(a + bi)and(c + di) yields ((ac-bd) + (ad+bc)i).
	ComplexNumber  operator* (const ComplexNumber& num);
	//Increment and decrement operators should only add 1 or subtract 1 from real part
	ComplexNumber& operator ++(); // pre-increment 
	ComplexNumber& operator --(); // pre-decrement 
	ComplexNumber  operator ++(int); // post-increment 
	ComplexNumber  operator --(int); // post-decrement
	bool operator>=(const ComplexNumber& num);
	bool operator<=(const ComplexNumber& num);
	bool operator!=(const ComplexNumber& num);
};
ComplexNumber::ComplexNumber() {
	real = 0;
	imaginary = 0;
}
ComplexNumber::ComplexNumber(int real, int imaginary) {
	this->real = real;
	this->imaginary = imaginary;
}
ComplexNumber::~ComplexNumber() {
}
void ComplexNumber::Input() {
	cout << "Enter Real Part : ";
	cin >> real;
	cout << "Enter Imaginary Part : ";
	cin >> imaginary;
}
void ComplexNumber::Output() {
	cout << real << " + " << imaginary << "i" << endl;

}
bool ComplexNumber::IsEqual(ComplexNumber) {
	ComplexNumber cn;
	if (real == cn.real && imaginary == cn.imaginary) {
		return true;
	}
	else {
		return false;
	}
}
ComplexNumber ComplexNumber::Conjugate() {
	imaginary = -1 * imaginary;
}
ComplexNumber ComplexNumber::operator+ (const ComplexNumber& num) {
	ComplexNumber Add;
	Add.real = real + num.real;
	Add.imaginary = imaginary + num.imaginary;
	return Add;
}
ComplexNumber ComplexNumber::operator- (const ComplexNumber& num) {
	ComplexNumber Sub;
	Sub.real = real - num.real;
	Sub.imaginary = imaginary - num.imaginary;
	return Sub;
}
ComplexNumber ComplexNumber::operator* (const ComplexNumber& num) {
	ComplexNumber Mul;
	Mul.real = (real * num.real) - (imaginary * num.imaginary);
	Mul.imaginary = (real * num.imaginary) - (imaginary * num.real);
	return Mul;
}
ComplexNumber& ComplexNumber::  operator ++() {
	++real;
}
ComplexNumber& ComplexNumber::  operator --() {
	--real;
}
ComplexNumber ComplexNumber:: operator ++(int) {
	ComplexNumber cmp;
	cmp.real = real++;
	return cmp;
}
ComplexNumber ComplexNumber:: operator --(int) {
	ComplexNumber cmp;
	cmp.real = real--;
	return cmp;
}

bool ComplexNumber::operator>=(const ComplexNumber& num) {
	if (real >= num.real && imaginary >= num.imaginary) {
		return true;
	}
	else {
		return false;
	}
}
bool ComplexNumber::operator<=(const ComplexNumber& num) {
	if (real <= num.real && imaginary <= num.imaginary) {
		return true;
	}
	else {
		return false;
	}
}

bool ComplexNumber::operator!=(const ComplexNumber& num) {
	if (real != num.real && imaginary != num.imaginary) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	ComplexNumber n1, n2, add, sub, mul;
	cout << "Enter Complex Number 1" << endl;
	n1.Input();
	cout << "Enter Complex Number 2" << endl;
	n2.Input();
	cout << "To Display Complex Numbers" << endl;
	n1.Output();
	n2.Output();
	if (n1.IsEqual(n2)) {
		cout << "Both Complex Numbers Are Equal" << endl;
	}
	else {
		cout << "Both Complex Numbers Are Not Equal" << endl;
	}
	cout << "Conjugates Of Complex Numbers" << endl;
	n1.Conjugate();
	n2.Conjugate();
	n1.Output();
	n2.Output();
	add = n1 + n2;
	cout << "After Adding" << endl;
	add.Output();
	sub = n1 - n2;
	cout << "After Subtracting" << endl;
	sub.Output();
	mul = n1 * n2;
	cout << "After Multiplying" << endl;
	mul.Output();
	++n1;
	++n2;
	cout << "Pre-Increment" << endl;
	n1.Output();
	n2.Output();
	--n1;
	--n2;
	cout << "Pre-Deccrement" << endl;
	n1.Output();
	n2.Output();
	n1++;
	n2++;
	cout << "Post-Increment" << endl;
	n1.Output();
	n2.Output();
	n1--;
	n2--;
	cout << "Post-Deccrement" << endl;
	n1.Output();
	n2.Output();
	if (n1 >= n2) {
		cout << "Complex Number 1 Is Greater Than Or Equal To Complex Number 2" << endl;
	}
	else {
		cout << "Complex Number 2 Is Greater Than Or Equal To Complex Number 1" << endl;
	}
	if (n1 <= n2) {
		cout << "Complex Number 1 Is Lesser Than Or Equal To Complex Number 2" << endl;
	}
	else {
		cout << "Complex Number 1 Is Greater Than Or Equal To Complex Number 2" << endl;
	}
	if (n1 != n2) {
		cout << "Complex Number 1 Is Not Equal To Complex Number 2" << endl;
	}
	else {
		cout << "Complex Number 1 Is Equal To Complex Number 2" << endl;
	}
	return 0;
}


