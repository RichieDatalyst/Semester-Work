#include <iostream>
using namespace std;
 void cout_Array(int arr[],int n){
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 for(int i=0;i<n;i++){
     cout<<arr[i];
 }
 }
 int main(){
 int i,n,arr[n];
 cout<<"ENTER THE SIZE OF ARRAY : ";
 cin>>n;
 cout<<arr[n];
 cout_Array(arr,n);
 return 0;
 }
