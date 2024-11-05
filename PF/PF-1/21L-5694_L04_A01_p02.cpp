#include<iostream>
using namespace std;
int main(){
       int HT;
    cout<<"ENTER VALUE : ";
    cin>>HT;
      for(int i = 1; i <= HT; i++){
      for(int r = 1; r <= HT; r++){
        if(i==1||i==HT||r==1||r==HT){
            cout<<"*";
   
       }     
       else{
        cout<<" ";
       }
    }
      cout<<endl;
    }

  return 0;
}
