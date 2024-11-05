#include<iostream>
using namespace std;
int main(){
    double Borrow_Amount,Interest_Rate,Monthly_Payment,I,Interest,Principal_Amount,i=0;
    cout<<"Enter The Borrow Amount : ";
    cin>>Borrow_Amount;
    cout<<"Enter The Interest Rate Per Year : ";
    cin>>Interest_Rate;
    cout<<"Enter The Monthly Payment : ";
    cin>>Monthly_Payment;
    I=Interest_Rate/12;
    while(Borrow_Amount>0){
        Interest=Borrow_Amount*(I/100);
        Principal_Amount=Monthly_Payment-Interest;
        Borrow_Amount=Borrow_Amount-Principal_Amount;
        i++;
    }
    cout<<"Number Of Months To Repay The Loan : "<<i;
    if(Monthly_Payment<Interest){
        cout<<"Monthly Payment Is Too Low";
    }
    return 0;
}