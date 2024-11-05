#include<iostream>
using namespace std;
int main(){
	char alpha;
	cout<<"ENTER YOUR NAME INITIALS : ";
	cin>>alpha;
	if(alpha>=65&&alpha<=90){
		cout<<int(alpha);
	}
	return 0;
}