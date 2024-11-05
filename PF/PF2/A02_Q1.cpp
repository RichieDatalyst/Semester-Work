#include <iostream>
#include<Windows.h>
using namespace std;
void Hourglass(int Time,int pos,char chr){
  for(int i=0;i<Time;i++){
    for(int j=0;j<i;j++)
      cout<<" ";
      cout<<"\\";
    for(int k=((Time-i)*2)-1;k>0;k--){
      if(i>=pos)
       cout<<chr;
      else 
	  cout<<" ";
    }
    cout<<"/";
    cout<<endl;
  }
  for(int i=Time-1;i>=0;i--){
    for(int k=0;k<i;k++)
      cout<<" ";
      cout<<"/";
    for(int k=((Time-i)*2)-1;k>0;k--){
        if((((Time-i)*2)-1)/2==k-1||i<pos){
        Sleep(1000);
        cout << chr;
    }
        else
		 cout<<" ";
    }
    cout<<"\\";
    cout<<endl;
  }
}
int main(){
      int Time;
  char chr;
   cout<<"Enter Total Time : ";
   cin>>Time;
    while(Time<=0){
   	 cout<<"Enter Total Time : ";
   cin>>Time;
   }
   cout<<"Enter character to represent sand in the hourglass : ";
   cin>>chr;
   int pos=0;
  while(pos!=Time+1){  
    pos++;
  }
   Hourglass(Time,pos,chr);
  return 0;
}
