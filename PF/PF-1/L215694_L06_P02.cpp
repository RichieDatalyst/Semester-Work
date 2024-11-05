#include<iostream>
using namespace std;
int isittriangle(int Number,int T=0,int Sum=0){
    while(T<Number){
	  Sum=Sum+T;
	  T++;
	  if(Sum==Number){
	   cout<<"IT IS A TRIANGLE";
	   return 0;
	  }
	 }
	 if(Sum==T){
	  cout<<"IT IS NOT A TRIANGLE";
	 }
	 return Number;
}
int main(){
	 int Number,T=0,Sum=0;
	 cout<<"ENTER THE NUMBER : ";
	 cin>>Number;
	 isittriangle(Number,T,Sum);
	 return 0;
}
