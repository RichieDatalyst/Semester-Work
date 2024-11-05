#include<iostream>
using namespace std;
int main(){
             int n;
            cout<<"ENTER ANY AMOUNT : ";
            cin>>n;
              int o=n/100;
              int u=n%100; 
              int i=u/50;
              int v=u%50;
              int x=v/10;
              int g=v%10;
              int p=g/1;
              cout<<o<<"*100"<<endl; 
              cout<<i<<"*50"<<endl;
              cout<<x<<"*10"<<endl;
              cout<<p<<"*1"<<endl;         
    return 0;
}