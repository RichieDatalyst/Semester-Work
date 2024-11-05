#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Enter Age of 1 : ";
    cin>>A;
    cout<<"Enter Age of 2 : ";
    cin>>B;
    cout<<"Enter Age of 3 : ";
    cin>>C;
    if(A>B&&B<C){
        cout<<"A is Oldest and B is Youngest";
    }
     if(A>B&&B>C){
        cout<<"A is Oldest and C is Youngest";
    }
     if(A<B&&B<C){
        cout<<"A is Youngest and C is Oldest";
    }
     if(A<B&&B>C){
        cout<<"B is Oldest and C is Youngest";
    }
    return 0;
}