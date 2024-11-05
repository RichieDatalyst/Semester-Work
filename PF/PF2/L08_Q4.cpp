#include<iostream>
#include<climits>
using namespace std;
void ThirdMin(int arr[],int n){
	int Max_1 = arr[0];
    for(int i=0;i<n;i++)
        if(arr[i]<Max_1)
            Max_1=arr[i];
    int Max_2=INT_MAX;
    for(int i=0;i<n;i++)
        if(arr[i]<Max_2&&arr[i]>Max_1)
            Max_2=arr[i];
    int Max_3=INT_MAX;
    for(int i=0;i<n;i++)
        if(arr[i]<Max_3&&arr[i]>Max_2)
            Max_3=arr[i];  
    cout<<"The Third Smallest Element Is : "<<Max_3<<endl;
}
void ThirdMax(int arr[],int n){
	 int Max_1 = arr[0];
    for(int i=0;i<n;i++)
        if(arr[i]>Max_1)
            Max_1=arr[i];
    int Max_2=INT_MIN;
    for(int i=0;i<n;i++)
        if(arr[i]>Max_2&&arr[i]<Max_1)
            Max_2=arr[i];
    int Max_3=INT_MIN;
    for(int i=0;i<n;i++)
        if(arr[i]>Max_3&&arr[i]<Max_2)
            Max_3=arr[i];  
    cout<<"The Third Largest Element Is : "<<Max_3<<endl;
}
int main(){
	 int n;
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
    ThirdMin(arr,n);
    ThirdMax(arr,n);
    return 0;
}
