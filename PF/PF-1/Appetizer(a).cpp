#include <iostream>
using namespace std;
 void cin_Array(int arr[],int n){
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 }
 int main(){
 int n,arr[n];
 cout<<"ENTER THE SIZE OF ARRAY : ";
 cin>>n;
 cin_Array(arr,n);
 return 0;
 }

