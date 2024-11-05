#include <iostream>
using namespace std;
int main(){
    double num,Amount,Average,Sum=0;
    cout<<"Enter Total Number Of Books : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        cout<<"Enter Amount For Each Book : ";
        cin>>Amount;
        Sum+=Amount;
        Average=Sum/num;
    }
    cout<<"Average Cost Per Book : "<<Average;
    return 0;
}
