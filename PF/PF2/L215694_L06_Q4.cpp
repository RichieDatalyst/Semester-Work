#include<iostream>
using namespace std;
int IsPrime(int Num){
bool IsPrime=true;
        if(Num==0||Num==1){
            return false;
        }
        if(Num==2){
            return true;
        }
for(int i=2;i<=Num;i++){
    if(Num%i!=0){
        return true;
    }
    else{
        return false;
    }
    if(IsPrime){
    cout<<"Yes It Is Prime";
}
else{
    cout<<"It Is Not Prime";
}
}
}
int main(){
int Num;
cout<<"Enter Any Number : ";
cin>>Num;
cout<<IsPrime(Num);
return 0;
}
