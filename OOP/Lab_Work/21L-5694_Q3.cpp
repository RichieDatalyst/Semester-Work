#include<iostream>
using namespace std;
int main() {
	int num1, num2, sum;
	int* xptr, * yptr, * sumptr;
	num1 = 5;
	num2 = 7;
	sum = 0;
	xptr = 0;
	yptr = 0;
	sumptr = 0;
	xptr = &num1;
	yptr = &num2;
	sumptr = &sum;//address of sum is stored in sumptr.
	sum = *xptr + *yptr;//values of num1 & num2 are stored at pointers xptr & yptr.
	cout << "Num1 : " << num1 << endl << "Num2 : " << num2 << endl; // memory is created of num1 & num2 and values are stored in respective created variables of integer type.
	cout << "Address of Num1 : " << &num1 << endl << "Address of Num2 : " << &num2 << endl;//(&)operator means storing address of respective variables.
	cout << "*xptr : " << *xptr << endl << "*yptr : " << *yptr << endl;//dereference operator means stores the value at respective variables.
	cout << "*sumptr : " << *sumptr << endl;//gives the value at sum stored in *sumptr.
	cout << "xptr : " << xptr << endl << "yptr : " << yptr << endl;//gives the addresses of num1 & num2.
}
