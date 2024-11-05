#include<iostream>
using namespace std;
    int Factorial(int Number){
    long long n,Factorial=1;
    n=Number;
            while(Number>0){
            Factorial=Number*Factorial;
            Number--;
}
         cout<<"ANSWER OF "<<n<<"! IS "<<Factorial<<endl;
return 0;
}
int main(){
       int Number;
       cout<<"ENTER THE VALUES TO CALCULATE THE FACTORIAL : ";
       cin>>Number;
       while(Number>=0){
       cout<<Factorial(Number)<<endl;
       cin>>Number;
}
return 0;
}