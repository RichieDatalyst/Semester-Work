#include<iostream>
using namespace std;
const int cols=100;
void MidRow(int matrix[][cols],int row,int col){
		for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i==row/2){
				cout<<matrix[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
void MidCol(int matrix[][cols],int row,int col){
		for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(j==col/2){
				cout<<matrix[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
int main(){
int row,col;
	cout<<"Enter Rows : ";
	cin>>row;
	cout<<"Enter Columns : ";
	cin>>col;
	int matrix[100][100];
	cout<<"Enter Elements Of The Matrix"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>matrix[i][j];
		}
	}
		cout<<"Elements Of The Matrix"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	MidRow(matrix,row,col);
	MidCol(matrix,row,col);
	return 0;
}
