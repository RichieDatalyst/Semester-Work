#include<iostream>
using namespace std;
void DigitSum(int Num){
    int Mul=1,Sum=0;
while(Num>0){
Mul=Mul*(Num%10);
Sum=Sum+(Num%10);
Num=Num/10;
}
cout<<"Multiple Of Given Digits : "<<Mul<<endl;
cout<<"Sum Of Given Digits : "<<Sum<<endl;
}
int main(){
int Num,Mul=1,Sum=0;
cout<<"Enter Any Number : ";
cin>>Num;
DigitSum(Num);
return 0;
}
