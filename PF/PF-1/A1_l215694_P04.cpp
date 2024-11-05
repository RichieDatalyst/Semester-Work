#include<iostream>
using namespace std;
void i_am_joking(int Num){
int Sum=0;
         if(Num==0){
            Num=Sum;
            Sum=0;
}
while (Num>0||Sum>9){
            Sum=Sum+(Num%10);
            Num=Num/10;
}
 cout<<Sum;
}
int main(){
int Num;
cout<<"ENTER THE DIGITS : ";
cin>>Num;
i_am_joking(Num);
return 0;
}
