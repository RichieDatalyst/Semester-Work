#include<iostream>
using namespace std;
int main()
{
double choice;
double TWINKIE_COST=3.50;
double change=choice-TWINKIE_COST;
cout<<"ENTER 1 FOR DOLLAR"<<endl;
cout<<"ENTER 2 FOR QUATER"<<endl;
cout<<"ENTER 3 FOR NICKEL"<<endl;
cout<<"ENTER 4 FOR DIME"<<endl;
while(TWINKIE_COST>=0){
cin>>choice;
if(choice==1){
TWINKIE_COST=TWINKIE_COST-1;
cout<<"YOU REMAINING TO HAVE A DEEP-FRIED TWINKIE "<<TWINKIE_COST<<endl;
}
else if(choice==2){
TWINKIE_COST-=0.25;
cout<<"YOU REMAINING TO HAVE A DEEP-FRIED TWINKIE "<<TWINKIE_COST<<endl;
}
else if(choice==3){
TWINKIE_COST-=0.1;
cout<<"YOU REMAINING TO HAVE A DEEP-FRIED TWINKIE "<<TWINKIE_COST<<endl;
}
else if(choice==4){
TWINKIE_COST-=0.05;
}
}
cout<<"ENJOY YOUR DEEP-FRIED TWINKIE."<<endl;
return 0;
}