#include<iostream>
using namespace std;
int main(){
    int Number,Num=0,Sum=0,Average,Maximum,Minimum;
    cout<<"ENTER SEQUENCE OF NUMBERS"<<endl;
    cin>>Number;
    Maximum=Number;
    Minimum=Number;
    Num++;
        while(Number>=0){
        Sum=Sum+Number;
        Average=Sum/Num;
           if(Number>Maximum){
            Maximum=Number;
        }
             if(Number<Minimum){
             Minimum=Number;
        }
          cin>>Number;
          Num++;
    }
    cout<<"SUM IS : "<<Sum<<endl;
    cout<<"AVERAGE IS : "<<Average<<endl;
    cout<<"MAXIMUM NUMBER IS : "<<Maximum<<endl;
    cout<<"MINIMUM  NUMBER IS : "<<Minimum<<endl;
return 0;
}
