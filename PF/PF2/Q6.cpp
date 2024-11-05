#include<iostream>
using namespace std;
int main(){
double marks;
cout<<"Enter Marks : ";
cin>>marks;
if(marks>=90&&marks<=100){
    cout<<"A+";
}
else if(marks>=80&&marks<=89){
    cout<<"A";
}
else if(marks>=70&&marks<=79){
    cout<<"B";
}
else if(marks>=60&&marks<=69){
    cout<<"C";
}
else if(marks>=50&&marks<=59){
    cout<<"D";
}
else if(marks>=00&&marks<=49){
    cout<<"F";
}
else{
    cout<<"Error";
    return 0;
}
    return 0;
}
