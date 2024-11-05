#include<iostream>
using namespace std;
int a=10,b=-17,Sum,Mul,Mag,Sq;
void  Addition(int a, int b){
Sum=a+b;
cout<<"The Sum Of "<<a<<" And "<<b<<" Is "<<Sum<<endl;
}
void Multiplication(int a, int b){
Mul=a*b;
cout<<"The Multiplication Of "<<a<<" And "<<b<<" Is "<<Mul<<endl;
}
void Square(int a){
Sq=a*a;
}
int main(){
int a=10,b=-17,Sum,Mul,Mag,Sq;
Addition(a,b);
Multiplication(a,b);
Square(a);
return 0;
}
