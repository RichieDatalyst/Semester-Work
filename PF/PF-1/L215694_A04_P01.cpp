#include<iostream>
using namespace std;
int Euclidian_GCD(int m , int n){
int Remainder;
        if(m<0||n<0){
        m=m*-1;
        n=n*-1;
}
        Remainder=m%n;
        while(Remainder>0){
        m=n;
        n=Remainder;
        Remainder=m%n;
        }
        return n;
}
int main(){
long long m,n,Remainder;
     cout<<"ENTER TWO INTEGERS : ";
     cin>>m>>n;
     cout<<"GCD OF "<<m<<" AND "<<"GCD OF "<<n<<" IS : "<<Euclidian_GCD(n,m%n);
return 0;
}
