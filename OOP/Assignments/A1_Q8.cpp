#include<iostream>
using namespace std;
int main(){
	long  value1=200000;
	long value2;
    long *longptr;
	longptr=&value1;
	cout<<"value1 : "<<*longptr<<endl;
	longptr=&value2;
	cout<<"value2 : "<<*longptr<<endl;
	cout<<"Address of value1 : "<<&value1<<endl;
	cout<<"Address stored in longptr : "<<longptr<<endl; //NO
	return 0;
}
