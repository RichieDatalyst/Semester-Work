#include <iostream>
using namespace std;
int main(){
    double Net_Salary,Salary,Year;
    cout<<"Enter Salary : ";
    cin>>Salary;
    cout<<"Enter Year Of Service : ";
    cin>>Year;
    if(Year>5){
        Net_Salary=Salary+(Salary*0.1);
    }
    if(Year<5){
        Net_Salary=Salary;
    }
    if(Year<0){
        cout<<"Error";
        return 0;
    }
    cout<<"Net Salary Is : "<<Net_Salary;
    return 0;
}