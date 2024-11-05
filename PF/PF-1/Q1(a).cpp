#include <iostream>
using namespace std;
void Digit_Frequency(int Numbers[],int N,int F[]){
    int i=0,x=0,y=0;
    while(i<N){
            i++;
        if(Numbers[i]>=-10||Numbers[i]<=10){
            while(x<N){
                    x++;
                if(Numbers[i]==Numbers[x]){
                    y++;
                }
            }
            F[i]=y;
            cout<<"FREQUENCY OF "<<Numbers[i]<<" IS "<<F[i]<<" TIMES "<<endl;
            y=0;
        }
        else
            cout<<"INVALID RESPONSE"<<endl;
    }
}
int main(){
    int i,y=0,t;
    int m[100],n[100];
    cin>>t;
    for(i=0;i<=t;i++){
        cin>>m[i];
    }
    Digit_Frequency(m,t,n);
    return 0;
}
