#include<iostream>
using namespace std;
int DisplaySeries(int Number , int Rows){
 int r=Rows;
      for(int i=Number ; i>=1 ; i--){
      for(int c=1 ; c<=r ; c++){
        cout<<Number<<" * ";
        Number++;
            if (Number>9){
             Number=0;
    }
    }
    r--;
    cout<<endl;
    }
  return 0;
}
int main(){
       int Number,Rows;
       cout<<"ENTER THE NUMBER : ";
       cin>>Number;
       cout<<"ENTER THE NUMBER OF ROWS : ";
       cin>>Rows;
       DisplaySeries(Number,Rows);
       cout<<Number<<" * ";
return 0;
}