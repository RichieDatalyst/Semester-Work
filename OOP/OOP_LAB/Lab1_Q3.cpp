#include<iostream> 
using namespace std;
int main(){
float a,b;
cout<<"Enter 1st Number : ";
cin>>a;
cout<<"Enter 2nd Number : ";
cin>>b;
float * f;
float * g;
f=&a;
g=&b;
float l=f+g;
float * k;
k=&l;
cout<<"Sum : "<<*k;
}
