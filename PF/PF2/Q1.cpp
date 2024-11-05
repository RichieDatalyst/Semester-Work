#include<iostream>
using namespace std;
int main(){
double Amount,Cost,Total_Cost;
cout<<"Enter Amount : ";
cin>>Total_Cost;
Cost=Total_Cost*50;
if(Cost>600){
    Amount=Cost-(Cost*0.30);
}
if(Cost<600){
    Amount=Total_Cost*50;
}
if(Cost<0){
    cout<<"Error";
    return 0;
}
cout<<"Total Cost = "<<Amount;
    return 0;
}
