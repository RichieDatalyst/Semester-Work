#include<iostream>
using namespace std;
int check_palindrome(int Number){
    int P,Sum=0;
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
   
    int main(){
        int P,Value,Number,Sum=0;
        cout<<"ENTER ANY DIGITS : ";
        cin>>Number;
        check_palindrome(Number);
        return 0;
    }
