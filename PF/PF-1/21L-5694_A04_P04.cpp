#include<iostream>
using namespace std;
    int Factorial(int Number,int Factorial=1);
    int main(){
    long long n,Number,Factorial=1;
       cout<<"ENTER A VALUE TO CALCULATE THE FACTORIAL : ";
       cin>>Number;
       n=Number;

            if(Number<0){
             cout<<"INVALID INPUT"<<endl;
             return 0;
         }

            while(Number>0){
            Factorial=Number*Factorial;
            Number--;
}
    cout<<"ANSWER OF "<<n<<"! IS "<<Factorial<<endl;
    return 0;
}