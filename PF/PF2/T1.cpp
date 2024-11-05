#include<iostream>
using namespace std;
 int main(){
    long long int Number,P,Sum=0;
        cout<<"ENTER ANY DIGITS : ";
        cin>>Number;
        P=Number;
        while(Number>0){
        Sum=(Sum*10)+(Number%10);
        Number=Number/10;
    }
        if(P==Sum){
            cout<<P<<" IS A PALINDROME"<<endl;
        }
        else{
            cout<<P<<" IS NOT A PALINDROME"<<endl;
        }
        return 0;
    }
