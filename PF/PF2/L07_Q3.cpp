#include<iostream>
using namespace std;
int Two_Sum(int arr1[],int n1,int Key){
    int m=0,n=n1;
    int Index,index;
    for(int m=0;m<n1-1;m++){
for(int n=m+1;n<n1;n++) {
            if (arr1[m]+arr1[n]==Key){
                    Index=m;
                    index=n;
                cout<<"Sum Indices : "<<"("<<Index<<","<<index<<")"<<endl;
            }
}
    }
    return 0;
}

int main(){
int n1;
  cout<<"Enter The Size Of The Array : ";
    cin>>n1;
int arr1[n1];
 cout<<"Enter The Elements Of The Array : ";
for(int i=0;i<n1;i++){
    cin>>arr1[i];
}
for(int i=0;i<n1;i++){
    cout<<arr1[i]<<" "<<endl;;
}
int Key;
cout<<"Enter The Target : ";
cin>>Key;
cout<<Two_Sum(arr1,n1,Key);
return 0;
}