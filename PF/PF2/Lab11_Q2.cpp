#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char arr[50];
	cin.getline(arr,50);
	cin.ignore();
		int str=strlen(arr);
	char ch;
	cout<<"Enter Character To Find The Frequency : ";
	cin>>ch;
	int count=0;
	for(int i=0;i<str;i++){
		if(arr[i]==ch){
			count++;
		}
	}
	cout<<"Your Character Occured "<<count<< " Times";
	return 0;
}
