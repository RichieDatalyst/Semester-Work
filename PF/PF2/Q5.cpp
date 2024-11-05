#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n1,n2;
double r1,r2,r3,r4,r5;
cout<<"Enter First Number : ";
cin>>n1;
cout<<"Enter Second Number : ";
cin>>n2;
char op;
cout<<"Enter Any Operator From '+' , '-' , '*' , '/' , '%' , 'P' , 'S' : ";
cin>>op;
if(op=='+'){
    r1=n1+n2;
    cout<<"Answer Is : "<<r1<<endl;
}
else if(op=='-'){
    r2=n1-n2;
cout<<"Answer Is : "<<r2<<endl;
}
else if(op=='*'){
    r3=n1*n2;
    cout<<"Answer Is : "<<r3<<endl;
}
else if(op=='/'){
    r4=float(n1)/float(n2);
cout<<"Answer Is : "<<r4<<endl;
}
else if(op=='%'){
    r5=n1%n2;
cout<<"Answer Is : "<<r5<<endl;
}
else if(op=='P'){
    cout<<"Power Is : "<<pow(n1,n2)<<endl;
    cout<<"Power Is : "<<pow(n2,n1)<<endl;
}
else if(op=='S'){
    cout<<"Square Root Is : "<<sqrt(n1)<<endl;
    cout<<"Square Root Is : "<<sqrt(n2)<<endl;
}
else{
    cout<<"Invalid Operations";
    return 0;
}
    return 0;
}
