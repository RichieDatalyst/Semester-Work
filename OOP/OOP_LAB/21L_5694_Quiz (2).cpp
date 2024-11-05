#include<iostream>
using namespace std;
class Array{
	int array[5];
	public:
		Array(){
			array[5]=-1;
		}
		void input(){
			for(int i=0;i<5;i++){
				cin>>array[i];
			}
		}
		void display(){
			for(int i=0;i<5;i++){
				cout<<array[i]<<" ";
			}
		}
		int operator==(const Array &arr){
			for(int i=0;i<5;i++){
			if(this->array[i]==arr.array[i]){
				return 1;
			}
			else{
				return 0;
			}
		}
	}

};
   int main(){
   	Array arr1;
   	Array arr2;
   	cout<<"Enter Elements For Array 1 : ";
   	arr1.input();
   	cout<<"Array 1 : ";
   	arr1.display();
   	cout<<endl;
   	cout<<"Enter Elements For Array 2 : ";
   	arr2.input();
   	cout<<"Array 2 : ";
   	arr2.display();
   	cout<<endl;
    if(arr1==arr2){
				cout<<"Both Arrays Are Equal";
			}
			else{
				cout<<"Both Arrays Are Different";
			}
	}
