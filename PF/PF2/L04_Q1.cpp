#include<iostream>
#include<cmath>
using namespace std;
int main(){
     double r1,r2,r3,r4,r5;
     int n1,n2; 
    cout<<"Enter First Number : ";
    cin>>n1;
     cout<<"Enter Second Number : ";
    cin>>n2;
    char op;
    cout<<"Enter Operations From '+','-','*','/','%','P','S' : ";
    cin>>op;
   switch(op){
   case('+'):
    r1=n1+n2;
    cout<<"Answer Is : "<<r1<<endl;
    break;
    case('-'):
    r2=n1-n2;
    cout<<"Answer Is : "<<r2<<endl;
    break;
    case('*'):
    r3=n1*n2;
    cout<<"Answer Is : "<<r3<<endl;
    break;
    case('/'):
    r4=float(n1)/float(n2);
    cout<<"Answer Is : "<<r4<<endl;
    break;
    case('%'):
     r5=n1%n2;
     cout<<"Answer Is : "<<r5<<endl;
    break;
    case('P'):
    cout<<"Power Is : "<<pow(n1,n2)<<endl;
    cout<<"Power Is : "<<pow(n2,n1)<<endl;
    break;
    case('S'):
    cout<<"Square Root Is : "<<sqrt(n1)<<endl;
    cout<<"Square Root Is : "<<sqrt(n2)<<endl;
    break;
    default:
    cout<<"Invalid Operations";
    break;
}
return 0;
}

