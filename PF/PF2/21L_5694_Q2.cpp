#include<iostream>
using namespace std;
#include<algorithm>
int n,k,min=0;
void CyclicRotate(int arr[],int n,int k){
	for(int j=1;j<=k;j++){
		int i;
		int x=arr[n-1];
		for(i=n-1;i>=1;i--)
			arr[i]=arr[i-1];	
	    arr[i]=x;
	}
	for(int i=0;i<n;i++){
      	cout<<arr[i]<<" ";
	  }
}
void AyclicRotate(int arr[],int n,int k){
	for(int j=1;j<=k;j++){
		int x=arr[0];
		for(int i=0;i<n-1;i++){
			arr[i]=arr[i+1];
		}
	arr[n-1]=x;
}
      for(int i=0;i<n;i++){
      	cout<<arr[i]<<" ";
	  }
}
int MaxAbsDiff(int arr1[],int arr2[],int n1,int n2){
int Max;
	Max=max(Max,abs(arr1[n1]-arr2[n2]));
return Max;
}
int main(){
	int k,c,c1,c2,c3,c4;
	int n1;
  cout<<"Enter The Size Of The First Array : ";
    cin>>n1;
     while(n1<5){
    cout<<"Too Small Size Of An Array"<<endl<<"Re-enter The Size : ";
	cin>>n1;	
	}
int arr1[n1];
 cout<<"Enter The Elements Of The First Array : ";
for(int i=0;i<n1;i++){
    cin>>arr1[i];
}
for(int i=0;i<n1;i++){
    cout<<arr1[i]<<" "<<endl;
}
   int n2;
     cout<<"Enter The Size Of The Second Array : ";
    cin>>n2;
    while(n2<5){
    cout<<"Too Small Size Of An Array"<<endl<<"Re-enter The Size : ";
	cin>>n2;	
	}
int arr2[n2];
 cout<<"Enter The Elements Of The Second Array : ";
for(int j=0;j<n2;j++){
    cin>>arr2[j];
}
for(int j=0;j<n2;j++){
    cout<<arr2[j]<<" "<<endl;
}
cout<<"Enter The Factor For The Arrays To Be Rotated : ";
cin>>k;
while(k<0){
	cout<<"Error"<<endl<<"Re-enter The Factor : ";
	cin>>k;
}
c1=MaxAbsDiff(arr1,arr2,n1,n2);
cout<<"Case 1 : "<<c1<<endl;
c2=MaxAbsDiff(arr1,arr2,n1,n2);
cout<<"Case 2 : "<<c2<<endl;
CyclicRotate(arr1,n1,n1-3);
CyclicRotate(arr2,n2,n2);
c3=MaxAbsDiff(arr1,arr2,n1,n2);
cout<<"Case 3 : "<<c3<<endl;
CyclicRotate(arr1,n1,n1);
AyclicRotate(arr2,n2,n2-4);
c4=MaxAbsDiff(arr1,arr2,n1,n2);
cout<<"Case 4 : "<<c4<<endl;
CyclicRotate(arr1,n1,n1-3);
AyclicRotate(arr2,n2,n2-4);
c=max(c1,max(c2,max(c3,c4)));
cout<<"Max : "<<c<<endl;
return 0;
}

