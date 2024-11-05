#include<iostream>
using namespace std;
void swap(int &num1,int &num2){
	int T=num1;
	num1=num2;
	num2=T;
}
int main(){
	int n1,n2;
	cout<<"Enter First Number : ";
	cin>>n1;
	cout<<"Enter Second Number : ";
	cin>>n2;
	cout<<"Before  Swapping : "<<n1<<" and "<<n2<<endl;
	swap(n1,n2);
	cout<<"After Swapping : "<<n1<<" and "<<n2<<endl;
	return 0;
}
