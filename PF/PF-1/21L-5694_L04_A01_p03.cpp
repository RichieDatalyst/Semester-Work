#include<iostream>
using namespace std;
int main(){
       int HT;
    cout<<"ENTER VALUE : ";
    cin>>HT;
      for(int i = 1; i <= HT; i++){
      for(int r = 1; r <= HT; r++){
       if(r<=HT-i){
        cout<<" ";
       }     
       else{
        cout<<"*";
       }
    }
      cout<<endl;
    }

  return 0;
}
