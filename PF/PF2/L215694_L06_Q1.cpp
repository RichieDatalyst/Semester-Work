#include<iostream>
using namespace std;
int a=10,b=-17,Sum,Mul,Mag,Sq;
int Addition(int a, int b){
Sum=a+b;
return Sum;
}
int Multiplication(int a, int b){
Mul=a*b;
return Mul;
}
int Magnitude(int a){
Mag=a;
return Mag;
}
int Square(int a){
Sq=a*a;
return Sq;
}
int main(){
int a=10,b=-17,Sum,Mul,Mag,Sq;
cout<<"The Sum Of "<<a<<" And "<<b<<" Is "<<Addition(a,b)<<endl;
cout<<"The Multiplication Of "<<a<<" And "<<b<<" Is "<<Multiplication(a,b)<<endl;
cout<<"The Magnitude Of "<<a<<" Is "<<Magnitude(a)<<endl;
cout<<"The Square Of "<<a<<" Is "<<Square(a)<<endl;
return 0;
}
