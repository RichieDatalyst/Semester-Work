#include<iostream>
using namespace std;
const int cols=100;
int MAX,count=0;
void maxColumn(int matrix[][cols],int row,int col){
		for(int i=0;i<row;i++){
		    	 MAX=matrix[0][i];
		    	 count++;	
          for(int j=0;j<col;j++){
          	if(matrix[i][j]>MAX){
          		MAX=matrix[i][j];
     }
 }
 cout<<"Result["<<count<<"]"<<" : "<<"{"<<MAX<<"}";
}
}
int main(){
	int MAX,count=0,rows,column;
	cout<<"Enter Rows : ";
	cin>>rows;
	cout<<"Enter Columns : ";
	cin>>column;
	int matrix[100][100];
	cout<<"Enter Elements Of The Matrix"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			cin>>matrix[i][j];
		}
	}
		cout<<"Elements Of The Matrix"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	maxColumn(matrix,rows,column);
return 0;
}
