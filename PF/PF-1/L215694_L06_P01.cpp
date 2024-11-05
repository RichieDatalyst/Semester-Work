#include<iostream>
using namespace std;
void MaxandMin(int a , int b , int c){
      if(a>b&&b>c){
        cout<<"MAX IS : "<<a<<endl
            <<"MIN IS : "<<c<<endl;
}
      if(a<b&&b<c){
        cout<<"MAX IS : "<<c<<endl
            <<"MIN IS : "<<a<<endl;
}
      if(a<b&&b>c){
        cout<<"MAX IS : "<<b<<endl
            <<"MIN IS : "<<c<<endl;
}
      if(a>b&&b<c){
             int tmp=a;
                a=c;
                c=tmp;
        cout<<"MAX IS : "<<c<<endl
            <<"MIN IS : "<<b<<endl;
}
}
int main(){
      int a,b,c,tmp;
      cout<<"ENTER THREE NUMBERS : ";
      cin>>a>>b>>c;
      MaxandMin(a,b,c);
return 0;
}
