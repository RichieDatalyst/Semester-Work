#include<iostream>
using namespace std;
int main(){
    double F,H,G,Total_Bill,Tax;
    int Deal,A,B,L,C,D,W;
    char deal;
    cout<<"Deal A for $39.99"<<endl<<"Deal B for $59.99"<<endl<<"Deal C for $69.99"<<endl<<"Which deal customer wants : ";
    cin>>deal;
    cout<<"1 Chicken Piece is for $2"<<endl<<"How many Chicken Piece do you want : ";
    cin>>C;
    A=C*2;
    cout<<"1 Dinner Roll is for $3"<<endl<<"How many Dinner Roll do you want : ";
    cin>>D;
    B=D*3;
    cout<<"1 Hot Wing is for $1"<<endl<<"How many Hot Wings do you want : ";
    cin>>W;
    L=W*1;
    if(deal!='A'&&deal!='B'&&deal!='C'){
        cout<<"Invalid Entry Of Deals";
        return 0;
    }
    if(deal=='A'){
        cout<<"How many Deals A do you want : ";
        cin>>Deal;
        F=Deal*39.99;
        Total_Bill=F+A+B+L;
        Tax=Total_Bill+(Total_Bill*0.16);
    }
   else if(deal=='B'){
    cout<<"How many Deals B do you want : ";
        cin>>Deal;
        H=Deal*59.99;
       Total_Bill=H+A+B+L;
       Tax=Total_Bill+(Total_Bill*0.16);
}
      else if(deal=='C'){
    cout<<"How many Deals C do you want : ";
        cin>>Deal;
        G=Deal*69.99;
        Total_Bill=G+A+B+L;
        Tax=Total_Bill+(Total_Bill*0.16);
}
       cout<<"Customer's Total Bill Before Tax : $"<<Total_Bill<<endl;
       cout<<"Customer's Total Bill After Tax : $"<<Tax<<endl;
    return 0;
}