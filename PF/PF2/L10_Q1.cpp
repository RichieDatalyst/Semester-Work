#include <iostream>
#include <fstream>
using namespace std;
void FileInput(int M1[][6],int M2[][6],int &r1 , int &r2,int &c1,int &c2){
ifstream ifs;
ifs.open("Matrix.txt");
    if(ifs){
    ifs>>r1;
    ifs>>c1;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            ifs>>M1[i][j];
        }
    }
    ifs>>r2;
    ifs>>c2;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            ifs>>M2[i][j];
        }
    }
}
else{
    cout<<"ERROR!!! FILE NOT OPENED";
}
}
void Print1(int M1[][6],int r,int c){
      cout<<r<<" "<<c<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            cout<<" "<<M1[i][j];
        }
        cout<<endl;
}
}
void Print2(int M2[][6],int r,int c){
      cout<<r<<" "<<c<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            cout<<" "<<M2[i][j];
        }
        cout<<endl;
    }
}
    void Print3(int M3[][6],int r,int c){
      cout<<r<<" "<<c<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){

            cout<<" "<<M3[i][j];
        }
        cout<<endl;
    }
}
void Add(int M1[][6],int M2[][6],int M3[][6],int r1,int r2,int c1,int c2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
            	 if((r1==r2) && (c1==c2)){
                M3[i][j]=M1[i][j]+M2[i][j];
            }
             else{
        cout<<"ADDITION NOT POSSIBLE";
    }
        }
     }
            for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
            	cout<<M3[i][j]<<" ";
            }
            cout<<endl;
        }
}
void Multiply(int M1[][6],int r1,int c1,int M2[][6],int r2,int c2,int M3[][6]){
ofstream ofs;
ofs.open("Result.txt");
for(int i=0;i<r1;i++){
	for(int j=0;j<c2;j++){
		M3[i][j]=0;
		for(int k=0;k<c1;k++){
		M3[i][j]+=M1[i][k]*M2[k][j];
	}
  }
}
for(int i=0;i<r1;i++){
	for(int j=0;j<c2;j++){
		cout<<M3[i][j]<<" ";
		ofs<<M3[i][j]<<" ";
	}
	cout<<endl;
}
}
int main(){
    int M1[6][6],M2[6][6],M3[6][6],R1,C1=0,R2,C2=0;
    char ch;
while(1){
	cout<<"******Welcome To The Menu******"<<endl;
	cout<<"Q------Exit The Program"<<endl;
	cout<<"A------Allocate Memory"<<endl;
    cout<<"P------Print Matrices"<<endl;
    cout<<"S------Addition Of Matrices"<<endl;
    cout<<"M------Multiplicaton Of Matrices"<<endl;
	cin>>ch;
	switch(ch){
        case ('Q'):
         exit(0);
		 break;  
        case ('A'):
	  FileInput(M1,M2,R1,R2,C1,C2);
   break;       
        case ('P'):
             Print1(M1,R1,C1);
             Print2(M2,R2,C2);
            break;
        case ('S'):
              Add(M1,M2,M3,R1,R2,C1,C2);
            break;
        case ('M'):
        Multiply(M1,R1,C1,M2,R2,C2,M3);
            break;
        default:
            cout<<"Invalid Options"<<endl;
}
}
return 0;
    }

