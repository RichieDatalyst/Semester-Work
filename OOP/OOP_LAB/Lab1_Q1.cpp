#include<iostream>
using namespace std;
int main(){
int x,y;
x=3; y=4;
int * p;
int * q;
p=&x;
q=&y;
cout<<x<<'\t'<<p<<'\t'<<*p<<'\t'<<&p<<'\t'<<&x<<endl;
cout<<y<<'\t'<<q<<'\t'<<*q<<'\t'<<&q<<'\t'<<&y<<endl;
}
// a memory created of variable x and it stores the value 3.
//address of x stored in p.
//value at address p is 3.
//a memory p is created and it gives address of pointer p.
//a memory x is created and it gives the address of x.

// a memory created of variable y and it stores the value 4.
//address of y stored in q.
//value at address q is 4;
//a memory q is created and it gives address of pointer q.
//a memory y is created and it gives the address of y.


