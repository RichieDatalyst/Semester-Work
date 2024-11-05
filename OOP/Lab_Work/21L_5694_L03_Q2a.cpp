#include<iostream>
#include<cstring>
using namespace std;
void GetCharacterCount(char* myString, char c){
    myString = new char;
    cout<<"Enter String : ";
    cin>>myString;
	int str = strlen(myString);
	cout<<"Enter Character To Find The Frequency : ";
	cin>>c;
	int count=0;
	for(int i=0;i<str;i++){
		if(myString[i]==c){
			count++;
		}
	}
	cout<<"Your Character Occured "<<count<< " Times";
	delete[] myString;
}
int main(){
    char *myString;
    char c;
    GetCharacterCount(myString,c);
	return 0;
}