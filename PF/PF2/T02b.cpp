#include<iostream>
using namespace std;
int main(){
    int H;
    cout<<"Enter Height : ";
    cin>>H;
    for(int i=1;i<=H;i++){
        for(int j=1;j<=H;j++){
            if(i==1||i==H||j==1||j==H){
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