#include<iostream>
using namespace std;
int CatsandMouse(int CatA , int CatB , int Mouse , int x , int y , int z , int a , int b , int c){
      x=CatA-Mouse;
      y=CatB-Mouse;
      if(x<y){
      cout<<"CAT A CATCHES THE MOUSE FIRST "<<endl;
return 1;
}
else{
    cout<<"CAT B CATCHES THE MOUSE FIRST "<<endl;
return -1;
}
      z=CatA-Mouse;
      a=CatB-Mouse;
      if(z<a){
      cout<<"CAT A CATCHES THE MOUSE FIRST "<<endl;
return 1;
}
else{
    cout<<"CAT B CATCHES THE MOUSE FIRST "<<endl;
return -1;
}
      b=CatA-Mouse;
      c=CatB-Mouse;
      if(b==c){
      cout<<"BOTH CATS FIGHT AND THE MOUSE ESCAPES "<<endl;
}
return 0;
}
int main(){
int CatA,CatB,Mouse,x,y,z,a,b,c;
cout<<"ENTER POSITION FOR CAT_A : ";
cin>>CatA;
cout<<"ENTER POSITION FOR CAT_B : ";
cin>>CatB;
cout<<"ENTER POSITION FOR MOUSE : ";
cin>>Mouse;
cout<<CatsandMouse(CatA,CatB,Mouse,x,y,z,a,b,c);
return 0;
}