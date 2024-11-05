#include<iostream>
using namespace std;
void histogram(int arr[],int size){
    for(int i=0;i<size;i++){
            cout<<endl;
        cout<<arr[i]<<"\t\t"<<endl;
        for(int k=0;k<2*arr[i];k++){
                cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int size;
   int *arr=new int[size];
   cout<<"Enter Size : ";
   cin>>size;
   for(int i=0;i<size;i++){
    cin>>arr[i];
    cout<<endl;
   }
   histogram(arr,size);
   return 0;
}
