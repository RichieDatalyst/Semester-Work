#include<iostream>
using namespace std;
int MySwap(int a , int b){
   int T;
   T=a;
   a=b;
   b=T;
   return 0;
}
int main(){
   int a,b;
   cout<<"ENTER THE FIRST NUMBER : ";
   cin>>a;
   cout<<"ENTER THE SECOND NUMBER : ";
   cin>>b;
   MySwap(a,b);
   cout<<b<<endl;
   cout<<a<<endl;
   return 0;
}
