#include<iostream>
using namespace std;
void PrintTriangle(int Number){
         for(int r=1;r<=Number;r++){
            for(int c=r;c<=Number;c++){
                if(r==1||c==Number||c==r){
                cout<<"*";
}
            else{
            cout<<" ";
}
}
            cout<<endl;
}
}
int main(){
    int Number;
    cout<<"ENTER ANY NUMBER : ";
    cin>>Number;
   PrintTriangle(Number);
   if(Number<=0){
    cout<<"TERMINATION HAS OCCURRED"<<endl;
   }
return 0;
}
