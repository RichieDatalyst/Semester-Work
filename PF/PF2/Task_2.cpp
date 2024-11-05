#include<iostream>
using namespace std;
int main(){
    double Balance,Fees,Fee,Service_Fees,Amount=10;
    int Checks;
    cout<<"Enter Initial Balance : ";
    cin>>Balance;
    cout<<"Enter Number of Checks : ";
    cin>>Checks;
   if(Balance<400){
   Fees=Amount+15;
    }
     if(Balance<0){
     cout<<"SORRY : The Account is Overdrawn";
        return 0;
    }
       if(Checks<=20){
       Fee=(Checks*0.10)+Amount;
    }
        if(Checks>=20&&Checks<=39){
        Fee=(Checks*0.08)+Amount;
    }
         if(Checks>=40&&Checks<=59){
         Fee=(Checks*0.06)+Amount;
    }
           if(Checks>=60){
           Fee=(Checks*0.04)+Amount;
    }
            else if(Checks<0){
            cout<<"Please Enter Valid Check";
                return 0;
    }
    Service_Fees=Fees+Fee;
    cout<<"Bank's Service Fee : $"<<Service_Fees;
return 0;
}
