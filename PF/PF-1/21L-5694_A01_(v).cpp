#include<iostream>
using namespace std;
int main(){
    int Length,Breadth,Height,Area;
        cout<<"CALCULATING TOTAL AREA OF ALL WALLS AND THE ROOF OF A CUBOID SHAPED ROOM"<<endl;

        cout<<"ENTER VALUE OF THE LENGTH"<<endl;
        cin>>Length;
        cout<<"ENTER VALUE OF THE BREADTH"<<endl;
        cin>>Breadth;
        cout<<"ENTER VALUE OF THE HEIGHT"<<endl;
        cin>>Height;
        Area=2*Height*Length+2*Height*Breadth;
        cout<<"TOTAL AREA :"<<Area<<endl;

    return 0;
}    