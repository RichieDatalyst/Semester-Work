#include<iostream>
using namespace std;
int *shrink_arr(int *arr,int newSize){
	int *tmp=new int[newSize];
	for(int i=0;i<newSize;i++){
		tmp[i]=arr[i];
	}
	delete[] arr;
	arr=tmp;
	return arr;
}
int main(){
	int size=10;
	int *array=new int[size];
	cout<<"Enter "<<size<<" values : ";
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	int *shrink=shrink_arr(array,5);
	for(int i=0;i<5;i++){
		cout<< shrink[i]<<" ";
	}
	return 0;
}