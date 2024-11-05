#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3,n4,n5;
    cout<<"ENTER FIRST NUMBER : ";
    cin>>n1;
    cout<<"ENTER SECOND NUMBER : ";
    cin>>n2;
    cout<<"ENTER THIRD NUMBER : ";
    cin>>n3;
    cout<<"ENTER FOURTH NUMBER : ";
    cin>>n4;
    cout<<"ENTER FIFTH NUMBER : ";
    cin>>n5;
    if(n1>n2&&n3>n4&&n5>n4){
        cout<<"IT IS A ZIG_ZAG SEQUENCE"<<endl;
    }
        if(n1<n2&&n3<n4&&n5<n4){
                cout<<"IT IS A ZAG_ZIG SEQUENCE"<<endl;
        }
        else if(n1<n2&&n3>n4&&n5<n4){
        cout<<"IT IS NEITHER"<<endl;
        }
        else{
         cout<<"IT IS NEITHER"<<endl;
        }
return 0;
}
