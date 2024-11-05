#include<iostream>
using namespace std;
int n,T;
void Asc(int *arr,int n){
		for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(arr+i)>*(arr+j)){
             T=*(arr+i);
            *(arr+i)=*(arr+j);
            *(arr+j)=T;
            }
          }
        }
          cout<<"Sorted Array In Ascending Order"<<endl;
        for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
}
int main(){
	 int n,T;
	 int *arr=new int[n];
	   cout<<"Enter The Size Of The Array : ";
    cin>>n;
    cout<<"Enter The Elements Of The Array : ";
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    cout<<"Elements Of The Array Are"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" "<<endl;
    }
        	Asc(arr,n);  
return 0;
    }
  

