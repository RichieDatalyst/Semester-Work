#include <iostream>
using namespace std;
int main(){
    double n,t,Previous_Term=0,Next_Term=1;
    cout<<"Enter Number For Fibonacci Series : ";
    cin>>n;
    cout<<1<<" ";
    for(int i=2;i<=n;i++){
        t=Previous_Term+Next_Term;
        Previous_Term=Next_Term;
        Next_Term=t;
        cout<<t<<" ";
    }
    return 0;
}
