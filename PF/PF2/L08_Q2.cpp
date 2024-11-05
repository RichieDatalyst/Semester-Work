#include <iostream>
using namespace std;
int Binary_Search(int arr[],int Left,int Right,int Key){
	int n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            int T=arr[i];
            arr[i]=arr[j];
            arr[j]=T;
            }
          }
        }
        cout<<"Sorted Array"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<endl;
        }
    Left=0;
    Right=n;
    while(Left<=Right){
        int mid=(Left+Right)/2;
        if(arr[mid]==Key){
            return 1;
        }
        else if(arr[mid]>Key){
            Right=mid-1;
        }
        else if(arr[mid]<Key){
            Left=mid+1;
        }
    }
    return 0;
}

int main(){
    int n,Left,Right;
    cout<<"Enter The Size Of The Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements Of The Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements Of The Array Are"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    int Key;
    cout<<"Enter The Key : ";
    cin>>Key;
    cout<<Binary_Search(arr,Left,Right,Key);
    return 0;
}
