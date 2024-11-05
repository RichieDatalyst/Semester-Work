#include<iostream>
using namespace std;
const int cols=100;
int MIN,count=0;
int *minRow_wise(int **matrix,int rows,int col){
	int *mnr=new int[col];
		for(int i=0;i<rows;i++){
		    	 MIN=matrix[i][0];	
          for(int j=0;j<col;j++){
          	if(matrix[i][j]<MIN){
          		MIN=matrix[i][j];
     }
     mnr[i]=MIN;
 }
}
return mnr;
}
int main(){
	int *Min,rows,column;
	int **matrix=new int*[rows];
	cout<<"Enter Rows : ";
	cin>>rows;
	cout<<"Enter Columns : ";
	cin>>column;
	cout<<"Enter Elements Of The Matrix"<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			matrix[i]=new int[j];
		}
	}
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
 Min=minRow_wise(matrix,rows,column);
 cout<<"Minimun Elements From Each Column"<<endl;
 for (int i=0;i<column;i++) {
		cout<<Min[i]<< " ";
	}
return 0;
}
