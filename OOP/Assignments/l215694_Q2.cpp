#include<iostream>
using namespace std;
void rshift(int *a,int *b,int *c){
int temp;
temp=*a;
*a=*b;
*b=*c;
*c=temp;
}
int main(){
    int A,B,C;
    cout<<"Enter Value 1 : ";
    cin>>A;
    cout<<"Enter Value 2 : ";
    cin>>B;
    cout<<"Enter Value 3 : ";
    cin>>C;
    cout<<"Before Shift : "<<A<<" "<<B<<" "<<C<<endl;
    rshift(&A,&B,&C);
    cout<<"After Shift : "<<A<<" "<<B<<" "<<C<<endl;
return 0;
}
