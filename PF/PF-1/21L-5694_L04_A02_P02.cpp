#include<iostream>
using namespace std;
int main(){

    int S,NT=1,PT=0,n,counter=0;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    n=n-1;
            cout<<1<<endl;
           while(counter<n){
              S=NT+PT;
              PT=NT;
              NT=S;
              counter++;
            cout<<S<<endl;
   }


    return 0;
}
