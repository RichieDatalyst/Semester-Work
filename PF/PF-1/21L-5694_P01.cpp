#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
            if( a*a==b*b+c*c){
                cout<<a<<endl;
                cout<<b<<endl;
                cout<<c<<endl;
                cout<<"Pythagorean"<<endl;
            }
       else
         if( a*a!=b*b+c*c){
            cout<<" Not Pythagorean"<<endl;
        }
   else 
    cout<<"THE END"<<endl;

    return 0;
}