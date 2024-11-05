#include<iostream>
using namespace std;
int main(){
int month;
double Total_Charges,cost,Total_Cost,Adult=40.75,Child=16.91,Senior=25.62;
cout<<"Enter Number of Months : ";
cin>>month;
char category;
cout<<"Which Membership Category You Want?"<<endl<<"------------------------------------"<<endl<<"A for Adult = $40.75"<<endl<<"C for Child = $16.91"<<endl<<"S for Senior = $25.62"<<endl;
cin>>category;
if(category!='A'&&category!='C'&&category!='S'){
    cout<<"Invalid Input";
    return 0;
}
if(category=='A'){
Total_Charges=(Adult*month);
if(Total_Charges>700){
    cost=Total_Charges-(Total_Charges*0.15);
}
else if(Total_Charges>450){
    cost=Total_Charges-(Total_Charges*0.10);
}
else if(Total_Charges>200){
    cost=Total_Charges-(Total_Charges*0.20);
}
}
if(category=='S'){
Total_Charges=(Senior*month);
if(Total_Charges>600){
    cost=Total_Charges-(Total_Charges*0.50);
}
else if(Total_Charges>350){
    cost=Total_Charges-(Total_Charges*0.35);
}
}
if(category=='C'){
Total_Charges=(Child*month);
if(category=='C'&&Total_Charges>300){
    cost=Total_Charges-(Total_Charges*0.25);
}
}
cout<<"Membership Charges Before Discount : $"<<Total_Charges<<endl;
cout<<"Membership Charges After Discount : $"<<cost<<endl;
return 0;
  }

