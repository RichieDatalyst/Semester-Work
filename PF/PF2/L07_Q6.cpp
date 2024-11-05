#include<iostream>
using namespace std;
int EvenandOdd(int arr1[],int arr2[],int arr3[]){
int i,j=0,k=0,n;
for(i=0;i<n;i++){
       if(arr1[i]%2==0){
           arr2[j]=arr1[i];
           j++;
       }
       else{
           arr3[k]=arr1[i];
           k++;
       }
}
cout<<"The Even Numbers Are : ";
   for(i=0;i<j;i++){
       cout<<arr2[i]<<" ";
}
   cout<<"The Odd Numbers Are : ";
for(i=0;i<k;i++){
       cout<<arr3[i]<<" ";
}
return 0;
}
int main(){
   int arr1[100],arr2[100],arr3[100];
int i,j=0,k=0,n;
   cout<<"Enter The Size Of The Array : ";
   cin>>n;
   for(i=0;i<n;i++){
       cout<<"Input Elements Of Array : ";
       cin>>arr1[i];
   }
   cout<<EvenandOdd(arr1,arr2,arr3);
   return 0;
}