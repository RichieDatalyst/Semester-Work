#include<iostream>
using namespace std;
class Operation{
private:
	int a;
	int b;
public:
	Operation(){
		a = 0;
		b = 0;
		}
	Operation(int a , int b){
		this->a = a;
		this->b = b;
		}
	void setA(int a){
		this->a = a;
		}
	void setB(int b){
		this->b = b;
		}
	int getA(){
		return a;
		}
	int getB(){
		return b;
		}
	inline void sum(){
		cout << a + b << endl;
		}
	inline void difference(){
		cout << a - b << endl;
		}
	inline void product(){
		cout << a * b << endl;
		}
	inline void division(){
		cout << float(a / b) << endl;
		}
};
	int main(){
		Operation op;
		op.setA(19);
		op.setB(12);
		op.getA();
		op.getB();
	    op.sum();
		op.difference();
		op.product();
		op.division();
		return 0;
		}


	