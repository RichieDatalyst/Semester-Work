#include<iostream>
using namespace std;
void Sqrt(int Number , int Limit){
     long double left=0;
     long double Right=Number+1;
     int Left;
     while((Right-Left)>Limit){
     long double Mid=(Left+Right)/2;
     if(Mid*Mid>Number){
       Right=Mid;
     }
     else{
        Left=Mid;
    }
   }
   long double Sqrt=(Left+Right)/2;
   cout<<"SQUARE ROOT IS : "<<Sqrt<<endl;
}
int main(){
double Number,Limit;
cout<<"ENTER ANY NUMBER : ";
cin>>Number;
cout<<"ENTER THE LIMIT : ";
cin>>Limit;
while(Number>0){
    Sqrt(Number,Limit);
    cout<<"ENTER ANY NUMBER : ";
    cin>>Number;
    cout<<"ENTER THE LIMIT : ";
    cin>>Limit;
}
return 0;
}
