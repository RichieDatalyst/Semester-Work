#include<iostream>
using namespace std;
int main(){
    int H;
    cout<<"Enter Height : ";
    cin>>H;
    for(int i=1;i<=H;i++){
        for(int j=1;j<=H;j++){
            cout<<"*";
        }
        cout<<" ";
        cout<<endl;
}
return 0;
}