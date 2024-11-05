#include <iostream>
using namespace std;
int grow_arr(int *arr,int newSize, int oldSize){
    int *tmp=new int[newSize];
    for(int i=0;i<oldSize;i++){
        tmp[i]=arr[i];
    }
    delete[]arr;
    return 0;
}
int main(){
	int oldSize;
	cout<<"Enter Old Size : ";
    cin>>oldSize;
	int *array=new int[oldSize];
	cout<<"Enter "<<oldSize<<" values : ";
	for(int i=0;i<oldSize;i++){
		cin>>array[i];
	}
	int newSize;
    cout<<"Enter New Size : ";
    cin>>newSize;
	for(int i=0;i<(newSize+oldSize)-1;i++){
		cout<<array[i]<<" ";
	}
	cout<<grow_arr(array,newSize,oldSize);
    return 0;
}
