#include<iostream>
using namespace std;
int main(){
    
   int number1,number2,number3;
   cout<<"ENTER THREE NUMBERS"<<endl;
    
   
            if(number1<number2&&number2>number3){
              cout<<"ENTER FIRST NUMBER"<<endl;
              cin>>number1;
              cout<<"ENTER SECOND NUMBER"<<endl;
              cin>>number2;
              cout<<"ENTER THIRD NUMBER"<<endl;
              cin>>number3;
              cout<<"SMALLEST TO LARGER"<<endl<<number2<<":"<<number3<<":"<<number1<<endl;
   }
            else if(number1>number2&&number2<number3){
              cout<<"ENTER FIRST NUMBER"<<endl;
              cin>>number1;
              cout<<"ENTER SECOND NUMBER"<<endl;
              cin>>number2;
              cout<<"ENTER THIRD NUMBER"<<endl;
              cin>>number3;
              cout<<"SMALLEST TO LARGER"<<endl<<number3<<":"<<number1<<":"<<number2<<endl;
              
   }
            else if(number1<number2&&number2<number3){
              cout<<"ENTER FIRST NUMBER"<<endl;
              cin>>number1;
              cout<<"ENTER SECOND NUMBER"<<endl;
              cin>>number2;
              cout<<"ENTER THIRD NUMBER"<<endl;
              cin>>number3;
              cout<<"SMALLEST TO LARGER"<<endl<<number3<<":"<<number2<<":"<<number1<<endl;
   }
           else if(number1>number2&&number2>number3){  
              cout<<"ENTER FIRST NUMBER"<<endl;
              cin>>number1;
              cout<<"ENTER SECOND NUMBER"<<endl;
              cin>>number2;
              cout<<"ENTER THIRD NUMBER"<<endl;
              cin>>number3;
              cout<<"SMALLEST TO LARGER"<<endl<<number1<<":"<<number2<<":"<<number3<<endl;
            
   }
    
    return 0;
}