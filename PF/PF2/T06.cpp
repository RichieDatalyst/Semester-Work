#include <iostream>
using namespace std;
int main(){
    int Sum=0,S=0,Add;
    for(int i=0;i<=100;i=i+2){
        if(i%2==0){
            Add=S+i;
            Sum+=i;
        }
        cout<<"First 100 Even Numbers : "<<Add<<endl;
    }
    cout<<"Sum Of First 100 Even Numbers : "<<Sum<<endl;
    return 0;
}