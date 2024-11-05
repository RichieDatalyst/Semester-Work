#include<iostream>
using namespace std;
void Set_Intersection(int arr1[],int arr2[],int n1,int n2){
    int i=0,j=0;
    while(i<n1&&j<n2){
if(arr1[i]<arr2[j]){
    i++;
}
else if(arr1[i]>arr2[j]){
    j++;
}
else{
    cout<<"Intersection Is : "<<arr1[i++]<<" ";
    j++;
}
}
}
int main(){
int n1;
  cout<<"Enter The Size Of The First Array : ";
    cin>>n1;
int arr1[n1];
 cout<<"Enter The Elements Of The First Array : ";
for(int i=0;i<n1;i++){
    cin>>arr1[i];
}
for(int i=0;i<n1;i++){
    cout<<arr1[i]<<" "<<endl;;
}
    int n2;
     cout<<"Enter The Size Of The Second Array : ";
    cin>>n2;
int arr2[n2];
 cout<<"Enter The Elements Of The Second Array : ";
for(int j=0;j<n2;j++){
    cin>>arr2[j];
}
for(int j=0;j<n2;j++){
    cout<<arr2[j]<<" "<<endl;
}
Set_Intersection(arr1,arr2,n1,n2);
return 0;
}