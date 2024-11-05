#include<iostream>
using namespace std;
void Addition(int a=10 , int b=-17){
    int Sum;
     Sum=a+b;
     cout<<"THE SUM OF "<<a<<" AND "<<b<<" IS : "<<Sum<<endl;
}
void Multiplication(int a=10 , int b=-17){
    int Mul;
     Mul=a*b;
     cout<<"THE MULTIPLICATION OF "<<a<<" AND "<<b<<" IS : "<<Mul<<endl;
}
void Table(int a=10){
    int T;
    int i=1;
    while(i<11){
    T=a*i;
    cout<<a<<"*"<<i<<"="<<T<<endl;
    i++;
}
}
void Square(int a=10){
    int SQR;
     SQR=a*a;
     cout<<"THE SQUARE OF "<<a<<" IS : "<<SQR<<endl;
}    
int main(){
int a=10 , b=-17;
Addition(a,b);
Multiplication(a,b);
Table(a);
Square(a);
return 0;
}
