#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter The Character : ";        
	cin>>ch;
	char * i;
	i=&ch;
	int a=ch;
	cout<<"Character "<<*i<<" has ASCII "<<a;
}
