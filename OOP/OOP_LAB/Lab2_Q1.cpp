#include <iostream>
#include <cstring>
using namespace std;
int main(){
int size;
char key;
cout<< "Enter the size of array : ";
cin>> size;
cin.ignore();
char* arr;
arr = new char[size];
size = strlen(arr);
cout << "Enter the Array elements : ";
cin.getline(arr,size);
cout << "Enter the encryption key : ";
cout<<endl;
cin >> key;
for(int i=0;i<size;i++){
	if((*arr)=='a'||(*arr)=='z'){
		*arr+=26;
	}
	if(*arr==' '){
		*arr='j';
		arr++;
	}
	size=key/24;
	*arr=*arr-size;
	if((*arr)<'a'){
		*arr+=26;
	}
	if(*arr<97&&(*arr)>90){
		*arr+=26;
	}
	arr++;
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
}
return 0;
}

