#include <iostream>
using namespace std;
int main() {
float a,b;
cout<<"Enter 1st Number : ";
cin>>a;
cout<<"Enter 2nd Number : ";
cin>>b;
float * f;
float * g;
f=&a;
g=&b;
float l=*f+*g;
float q=*f-*g;
float w=*f*(*g);
float e=*f*(*f);
float r=*g*(*g);
float * k;
float * m;
float * n;
float * o;
float * z;
k=&l;
m=&q;
n=&w;
o=&e;
z=&r;
cout<<"Sum : "<<*k<<endl;
cout<<"Difference : "<<*m<<endl;
cout<<"Product : "<<*n<<endl;
cout<<"Square : "<<*o<<endl;
cout<<"Square : "<<*z<<endl;
    return 0;
}
