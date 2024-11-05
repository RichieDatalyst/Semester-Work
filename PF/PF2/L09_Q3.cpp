#include<iostream>
using namespace std;
bool flag=false;
void Lower(int matrix[][4],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
	      if(i<j&&matrix[i][j]==0){
	      	flag=true;
		  }
		}
	}
	if(flag==true){
	cout<<"Lower Triangle";
}
}
void Upper(int matrix[][4],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
           if(i>j&&matrix[i][j]==0){
		   flag=true;		   
		  }  
		}
    }
    if(flag==true){
	cout<<"Upper Triangle";
}
}
void NoLowerUpper(int matrix[][4],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
           if(i==j&&i<j&&i>j){
		   flag=true;		   
		   cout<<matrix[i][j];
		  }  
		}
    }
    if(flag==true){
	cout<<"Not Upper & Lower Triangle";
}
}
int main(){
	int matrix[4][4],row=4,col=4;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>matrix[i][j];
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
  }
	Lower(matrix,row,col);
	Upper(matrix,row,col);
	NoLowerUpper(matrix,row,col);
	return 0;
}
