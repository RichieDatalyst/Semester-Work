#include<iostream>
using namespace std;
int PrimeOrNot(int Number,int L=2){
     while(L<=Number/2){
     L++;
          if(Number%L==0){
          return 0;
}
}
return 1;
}
int main(){
int Limit1,Limit2;
    cout<<"ENTER THE FIRST LIMIT : ";
    cin>>Limit1;
    cout<<"ENTER THE SECOND LIMIT : ";
    cin>>Limit2;
    cout<<"THE PRIME NUMBERS BETWEEN "<<Limit1<<" AND "<<Limit2<<" ARE : ";
int L=Limit1+1;
        while(L<Limit2){
        L++;
            if(PrimeOrNot(L)){
            cout<<" "<<L;
}
}
return 0;
}
