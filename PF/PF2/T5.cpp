#include <iostream>
using namespace std;
int main(){
    int num,t;
    cout<<"Enter Number From 1-10 : ";
    cin>>num;
    for(int i=1;i<11;i++){
        t=num*i;
        cout<<num<<" * "<<i<<" = "<<t<<endl;
    }
    return 0;
}
