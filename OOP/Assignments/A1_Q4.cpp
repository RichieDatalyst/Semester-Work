#include<iostream>
using namespace std;
const int cols=100;
int MIN,count=0;
int *minCol_wise(int **matrix,int rows,int col){
	int *mnc=new int[col];
		for(int i=0;i<rows;i++){
		    	 MIN=matrix[0][i];	
          for(int j=0;j<col;j++){
          	if(matrix[i][j]<MIN){
          		MIN=matrix[i][j];
     }
     mnc[i]=MIN;
 }
}
return mnc;
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
 Min=minCol_wise(matrix,rows,column);
 cout<<"Minimun Elements From Each Column"<<endl;
 for (int i=0;i<column;i++) {
		cout<<Min[i]<< " ";
	}
return 0;
}

