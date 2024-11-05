#include<iostream>
using namespace std;
void Set_Union(int arr1[],int arr2[],int n1,int n2){
int flag;
    cout<<"Union Is : ";
     for(int y=0;y<n1;y++){
    cout<<arr1[y]<<" ";
  }
  for(int z=0;z<n2;z++){
    flag=0;
    for(int y=0;y<n1;y++){
      if(arr1[y]==arr2[z]){
        flag=1;
        break;
      }
    }
    if(flag!=1){
      cout<<arr2[z]<<" ";
    }
  }
  cout<<endl;
}
  int main(){
int n1,n2;
int *arr1,*arr2;
arr1=new int[n1];
arr1=new int[n2];
arr2=new int[n2];
arr2=new int[n1];
  cout<<"Enter The Size Of The First Array : ";
    cin>>n1;
 cout<<"Enter The Elements Of The First Array : ";
for(int i=0;i<n1;i++){
    cin>>arr1[i];
}
for(int i=0;i<n1;i++){
    cout<<arr1[i]<<" "<<endl;;
}
     cout<<"Enter The Size Of The Second Array : ";
    cin>>n2;
 cout<<"Enter The Elements Of The Second Array : ";
for(int j=0;j<n2;j++){
    cin>>arr2[j];
}
for(int j=0;j<n2;j++){
    cout<<arr2[j]<<" "<<endl;
}
Set_Union(arr1,arr2,n1,n2);
return 0;
}
