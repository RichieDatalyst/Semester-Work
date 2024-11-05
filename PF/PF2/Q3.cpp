
#include <iostream>
using namespace std;
int main(){
    int Month,Days;
    cout<<"Enter Number of Month between 1-12 : ";
    cin>>Month;
if(Month==1||Month==3||Month==5||Month==7||Month==8||Month==10||Month==12){
    cout<<"DAYS ARE = 31";
}
else if(Month==2){
    cout<<"DAYS ARE 28/29";
}
else if(Month==4||Month==6||Month==9||Month==11){
    cout<<"DAYS ARE : 30";
}
else{
    cout<<"ERROR : ENTER NUMBER OF MONTHS BETWEEN 1-12";
}
    return 0;
}