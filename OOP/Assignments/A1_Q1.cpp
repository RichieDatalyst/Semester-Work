#include<iostream>
using namespace std;
int seclarg(int *arr,int size){
	int l1,s1;
  if(arr[0]<arr[1]){ 
      l1=arr[1];
      s1=arr[0];
   }
   else{ 
      l1=arr[0];
      s1=arr[1];
   }
   for (int i=2;i<size;i++) {
      if (arr[i]>l1) {
         s1=l1;
         l1=arr[i];
      }
      else if(arr[i]>s1&&arr[i]!=l1) {
         s1=arr[i];
      }
   }
   cout<<"Second Largest Element In Array Is : "<<s1<<endl;
   return 0;
 }
int main(){
	int size;
	cout << "Enter the size of array : ";
	cin>>size;
	cout<<endl;
	int *arr=new int(size);
	cout << "Enter " <<size<< " elements : ";
	for (int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cout << "You entered : ";
	for (int i=0;i<size;i++) {
		cout<<arr[i]<< " ";
	}
	cout<<endl;
	cout<<seclarg(arr,size);
	delete[]arr;
	return 0;
}

