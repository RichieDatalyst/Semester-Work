#include<iostream>
using namespace std;
int Calc(int Number1 , int Number2){
int Sum,Multiplication,Division,Subtraction;
    Sum=Number1+Number2;
    int S=Sum;
        Multiplication=Number1*Number2;
        int M=Multiplication;
          Division=Number1/Number2;
          int D=Division;
            Subtraction=Number1-Number2;
            int Sub=Subtraction;
   cout<<"SUM OF "<<Number1<<"+"<<Number2<<" IS : "<<S<<endl;
       cout<<"MULTIPLICATION OF "<<Number1<<"*"<<Number2<<" IS : "<<M<<endl;
           cout<<"DIVISION OF "<<Number1<<"/"<<Number2<<" IS : "<<D<<endl;
              cout<<"SUBTRACTION OF "<<Number1<<"-"<<Number2<<" IS : "<<Sub<<endl;
return 0;
}
int main(){
int Sum,Multiplication,Division,Subtraction,Number1,Number2,S,M,D,Sub;
cout<<"ENTER THE FIRST NUMBER : ";
cin>>Number1;
cout<<"ENTER THE SECOND NUMBER : ";
cin>>Number2;
Calc(Number1 , Number2);
return 0;
}
