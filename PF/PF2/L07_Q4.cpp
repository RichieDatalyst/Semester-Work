#include<iostream>
using namespace std;
double FindMedianSortedArrays(int arr1[],int arr2[],int n1,int n2,int median){
    int i=0,j=0;
    int size=arr1[n1]+arr2[n2];
    int arr[size];
    while(i<n1&&j<n2){
if(arr1[i]<arr2[j]){
    cout<<arr1[i++]<<" "<<endl;
}
else if(arr1[i]>arr2[j]){
    cout<<arr2[j++]<<" "<<endl;
}
else{
    cout<<arr1[i++]<<" "<<endl;
    j++;
}
    }
 while(i<n1){
cout<<arr1[i++]<<" "<<endl;
 }
  while(j<n2){
 cout<<arr2[j++]<<" "<<endl;
}

        if(size%2==0){
                median=arr[size/2];
        }
        else{
                median=(arr[size/2]+arr[(size/2)+1])/2;
        }
        cout<<"Median = "<<median<<endl;
}
int main(){
    int median;
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
FindMedianSortedArrays(arr1,arr2,n1,n2,median);
return 0;
}
