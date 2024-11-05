#include <iostream>
using namespace std;
int main() {
   int a=1, b=3, c=5;
    int * p;
    int * q;
    int * r;
    p=& a;
    q=& b;
    r=& c;
    cout<< a<<'\t'<<p<<'\t'<<*p<<'\t'<<&p<<'\t'<<&a<<endl;
    cout<<b<<'\t'<<q<<'\t'<<*q<<'\t'<<&q<<'\t'<<&b<<endl;
    cout<< c<<'\t'<<r<<'\t'<<*r<<'\t'<<&r<<'\t'<<&c<<endl;
    return 0;
}
//1       0x7fff9752f8f4  1       0x7fff9752f900  0x7fff9752f8f4
//3       0x7fff9752f8f8  3       0x7fff9752f908  0x7fff9752f8f8
//5       0x7fff9752f8fc  5       0x7fff9752f910  0x7fff9752f8fc