#include<iostream>
using namespace std;
int main(){
       int HT;
    cout<<"ENTER VALUE : ";
    cin>>HT;
      for(int i = HT; i >= 1; i--){
      for(int r = 1; r <= i; r++){
        cout<<""<<i;
        cout<<" ";
       }
       cout<<endl;
    }
  return 0;
}



