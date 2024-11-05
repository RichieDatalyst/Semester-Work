#include<iostream>
using namespace std;
bool flag=false;
void Upper(int matrix[][50],int row,int col){
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
    else{
        cout<<"Not a Upper Triangle";
    }
}
int main(){
	int matrix[50][50],row,col;
	cout<<"Enter Row : ";
	cin>>row;
	cout<<"Enter Column : ";
	cin>>col;
	cout<<"Enter Matrix"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>matrix[i][j];
		}
	}
	cout<<"Matrix"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	Upper(matrix,row,col);
	return 0;
}
