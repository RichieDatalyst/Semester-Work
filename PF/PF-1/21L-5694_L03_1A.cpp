#include <iostream>
using namespace std;
int main()
{
double Sum,Average,n;
int Counter=0;
    while (Counter<=n){
    cout<<"Please Enter a Number";
    cin>>n;
    Sum+=n;
    Average=Sum/n;
    Counter++;
}
    cout<<"Sum of the n numbers is :"<<Sum<<endl;
    cout<<"Average of the n numbers is :"<<Average<<endl;
    if(n<=0){
    cout<<"Larger number"<<n<<endl;
    }        
    
return 0;
}