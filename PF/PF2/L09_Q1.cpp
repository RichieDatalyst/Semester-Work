#include<iostream>
using namespace std;
void Input(int data[][3],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>data[i][j];
		}
	}
}
void Output(int data[][3],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<data[i][j]<<" ";
		}
		cout<<endl;
  }
}
int main(){
	int data[3][3],row=3,col=3;
	Input(data,row,col);
	Output(data,row,col);
	return 0;
}
