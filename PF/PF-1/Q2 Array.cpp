#include <iostream>
using namespace std;
int arr[10][10];
int main(){
	int r,c;
	cout<<"Enter Rows : ";
	cin>>r;
	cout<<"Enter Columns : ";
	cin>>c;
	if(r<=10&&c<=10){
		cout<<"ENTER ELEMENTS TO BE REVERSED"<<endl;
		int i=0,j=0;
		while(i<=10){
		i++;
        while(j<=10){
        j++;
			cin>>arr[i][j];
			}
		}
	}
	else
	return 0;
	int T;
	int t=c-1;
	int i=0;
	while(i<=10){
	i++;
		t=c-1;
			for(int j=0;j<t;j++){
			T=arr[i][j];
			arr[i][j]=arr[i][t];
			arr[i][t]=T;
			t--;
			}
		}

		for(int i=0;i<=10&&i!=r;i++){
			for(int j=0;j<=10&&j!=c;j++){
			cout<<arr[i][t];
			}
			cout<<endl;
		}
	return 0;
}