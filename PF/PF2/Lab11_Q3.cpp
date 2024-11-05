#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string arr;
	string tmp="";
	cout<<"Enter a String : ";
	getline(cin,arr);
	cin.ignore();
	for(int i=0;i<arr.size();i++){
		if((arr[i]=='\0')||(arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z')){
			tmp+=arr[i];
		}
	}
	cout<<"Your Output : "<<tmp;
	return 0;
}

