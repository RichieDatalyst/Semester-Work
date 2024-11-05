#include<iostream>
using namespace std;
void counter_clockwiserotation(int data[][5]){
	for(int i=0;i<5;i++){
for(int j=0;j<5;j++){	
  if(i==0){
   	int temp=data[0][4];
    data[0][4]=data[0][3];
    data[0][3]=temp;
    int tem=data[0][3];
     data[0][3]=data[0][2];
     data[0][2]=tem;
     int tmp=data[0][2];
      data[0][2]=data[0][1];
      data[0][1]=tmp;
      int x=data[0][1];
       data[0][1]=data[0][0];
       data[0][0]=x;
   }
   else if(j==0){
	int temp=data[0][0];
    data[0][0]=data[1][0];
    data[1][0]=temp;
    int tem=data[1][0];
     data[1][0]=data[2][0];
     data[2][0]=tem;
     int tmp=data[2][0];
      data[2][0]=data[3][0];
      data[3][0]=tmp;
      int x=data[3][0];
       data[3][0]=data[4][0];
       data[4][0]=x;
  }
}
}
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){	
  if(i==4){
   	int temp=data[4][0];
    data[4][0]=data[4][1];
    data[4][1]=temp;
    int tem=data[4][1];
     data[4][1]=data[4][2];
     data[4][2]=tem;
     int tmp=data[4][2];
      data[4][2]=data[4][3];
      data[4][3]=tmp;
      int x=data[4][3];
       data[4][3]=data[4][4];
       data[4][4]=x;
  }
   else if(j==4){
    	int temp=data[4][4];
    data[4][4]=data[3][4];
    data[3][4]=temp;
    int tem=data[3][4];
     data[3][4]=data[2][4];
     data[2][4]=tem;
     int tmp=data[2][4];
      data[2][4]=data[1][4];
      data[1][4]=tmp;
      int x=data[1][4];
       data[1][4]=data[0][4];
       data[0][4]=x;
   } 
}
}
cout<<"After Rotation"<<endl;
for (int i=0; i<5; i++){
for (int j=0; j<5; j++){
cout<<data[i][j]<<" ";
}
cout<<endl;
}
}
int main(){
int data[5][5] = { { 1,-2,4,5,89 },{ 3,7,0,10,20 },{ -5,8,6,90,11 },{ 200,2,99,11,3 },{56,39,22,31,4 } };
for (int i=0; i<5; i++){
for (int j=0; j<5; j++){
cout<<data[i][j]<<" ";
}
cout<<endl;
}
  counter_clockwiserotation(data);
  return 0;
}
  
