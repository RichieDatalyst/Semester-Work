#include<iostream>
using namespace std;
int main(){

    int Year1,Year2,n,d,t,m;
    cout<<"INPUT OF YEAR 1:"<<endl;
    cin>>Year1;
    cout<<"INPUT OF YEAR 2:"<<endl;
    cin>>Year2;
    cout<<"COMPUTING NUMBER OF LEAP YEARS BETWEEN TWO GIVEN YEARS"<<endl;

        if(n%4==0){
            d=Year2-Year1;
            n=d;
            t=n/4;
            m=t-1;
            cout<<"NUMBER OF LEAP YEARS BETWEEN TWO GIVEN YEARS ARE:"<<t<<endl;
        }      
 

    return 0;
}    