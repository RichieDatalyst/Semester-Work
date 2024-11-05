#include<iostream>
using namespace std;
int main(){
    int ID=100,Password=200;
    cout<<"Enter Your ID : ";
    cin>>ID;
    switch(ID){
    case 100:
        cout<<"Valid ID"<<endl;
        cout<<"Now Enter The Password : ";
        cin>>Password;
    switch(Password){
        case 200:
        cout<<"Valid Password"<<endl;
        cout<<"Ameer Abdullah";
        break;
    default:
        cout<<"Incorrect Password";
        break;
}
break;
        default:
            cout<<"Incorrect ID";
            break;
    }
}
