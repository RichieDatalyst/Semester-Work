#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
	 for(int i=0;i<n;i++){
	 	int Prev_Pos=arr[i];
	 	int j=i-1;
	while(arr[j]>Prev_Pos&&j>=0){
		arr[j+1]=arr[j];
		j--;
	}
arr[j+1]=Prev_Pos;
}
           for(int i=0;i<n;i++){
		   cout<<"Insertion Sort"<<arr[i]<<" "<<endl;      
}
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
   InsertionSort(arr,n);
    return 0;
}
