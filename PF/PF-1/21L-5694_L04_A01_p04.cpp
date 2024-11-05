#include<iostream>
using namespace std;
int main(){
       int HT;
    cout<<"ENTER VALUE : ";
    cin>>HT;
      for(int i = 1; i <= HT; i++){
      for(int r = 1; r <= HT; r++){

        if(r==i||r==1||i==HT){
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
