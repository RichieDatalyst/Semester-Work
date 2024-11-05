#include<iostream>
using namespace std;
void digitMul(int Number){
int i=1;
     while(Number>0){
        i=i*(Number%10);
        Number=Number/10;
     }
     cout<<"MULTIPLE OF INDIVIDUAL DIGITS : "<<i;
     }
int main(){
int Number;
cout<<"ENTER THE DIGITS : ";
cin>>Number;
digitMul(Number);
return 0;
}
    //i=1;
    //Nmber=123;
    //123>0;
    //i=1*(123%10)=3;
    //Number=123/10=12;
    //i=3*(12%10)=6;
    //Number=1/10=0;

