#include<iostream>
using namespace std;
int P,Sum=0;
void AllocateSection(int Roll_Number,int Marks){
    P=Marks;
while(Marks>0){
        Sum=(Sum*10)+(Marks%10);
        Marks=Marks/10;
}
    if(P==Sum){
        cout<<"Roll Number "<<Roll_Number<<" Has Been Allocated Section BS-A"<<endl;
    }
        else if(P!=Sum){
        cout<<"Roll Number "<<Roll_Number<<" Has Been Allocated Section BS-B"<<endl;
    }
        else{
        cout<<"Roll Number "<<Roll_Number<<" Has Been Allocated Section BS-C"<<endl;
    }
}
int main(){
    int Roll_Number,Marks,P,Sum=0;
    cout<<"Enter The Roll Number : ";
    cin>>Roll_Number;
    cout<<"Enter The Intermediate Marks : ";
    cin>>Marks;
    AllocateSection(Roll_Number,Marks);
    return 0;
}