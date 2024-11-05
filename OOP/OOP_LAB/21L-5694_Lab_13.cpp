/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Q1
/*a)137.5
b)Negative number of items : -55.
Number of items must be non-negative.
c)Negative unit cost : -4.5 .
Unit cost must be non-negative.
d)Negative number of items : -10.
Number of items must be non-negative.
Negative unit cost : -2.5.
Unit cost must be non-negative.*/

//Q2
#include<iostream>
using namespace std;
class divisionbyzero{
	string message;
	public:
//default constructor
		divisionbyzero(){
			message="Division by zero";
			
		}
//parameterized constructor
		divisionbyzero(string message){
			this->message=message;
		}
		string what(){
			return this->message;
		}
		
};
int main(){
	double dividend;
	double divisor;
	int q;
	divisionbyzero obj;
	try{
		cout<<"Enter Dividend : ";
		cin>>dividend;
cout<<endl;
		cout<<"Enter Divisor : ";
		cin>>divisor;
cout<<endl;
		q=dividend/divisor;
		if(divisor==0){
			throw obj;
		}
		else{
			cout<<"Quotient : "<<q;
		}
	}
	catch(divisionbyzero obj){
		cout<<"catch block: "<<obj.what()<<endl;
	}
}
