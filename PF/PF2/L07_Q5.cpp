#include<iostream>
using namespace std;
int Reverse_Array(int arr[]){
    int n1;
    int j=n1-1;
         for(int i=0;i<j;i++,j--){
                        if(arr[i]>arr[j]){
                                int temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
    }
    cout<<"The Reverse of Given Array is : ";
    for(int i=0;i<n1;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    }
    return 0;
    }
int main(){
    int n1;
  cout<<"Enter The Size Of The First Array : ";
    cin>>n1;
int arr[n1];
 cout<<"Enter The Elements Of The First Array : ";
for(int i=0;i<n1;i++){
    cin>>arr[i];
}
for(int i=0;i<n1;i++){
    cout<<arr[i]<<" "<<endl;;
}
cout<<Reverse_Array(arr);
return 0;
}
