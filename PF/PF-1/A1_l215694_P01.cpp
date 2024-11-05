#include<iostream>
using namespace std;
string isOdd(int Number){
      if (Number%2==0){
        return "False";
      }
         if (Number%2!=0){
            return "True";
         }
}
int main(){
int Number;
cout<<"ENTER THE NUMBER : ";
cin>>Number;
cout<<isOdd(Number)<<endl;
return 0;
}
