#include<iostream>
using namespace std;
int rectangle(int HT , int WT){
            for(int r = 0 ; r < HT ; r++){
                for(int c = 0 ; c < WT ; c++){
                    cout<<"o ";
    }
                cout<<endl;
      }
    return 0;
}
int main(){
    int HT,WT;
     cout<<"ENTER HEIGHT : ";
     cin>>HT;
     cout<<"ENTER WIDTH : ";
     cin>>WT;
     if(HT<=0||WT<=0){
        cout<<"RECTANGLE PRINTING IS NOT POSSIBLE ";    
     }
     rectangle( HT , WT);
     return 0;
}