#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
using namespace std;
struct Students{
	int num;
	char Name[50];
	int Roll_No;
	double Marks;
}Data[100];
int num;
void Students_Details(struct Students Data[]){
    ofstream ofs;
    ofs.open("Record.txt");
    for(int i=0;i<Data[100].num;++i){
    ofs<<"Student "<<i+1<<endl<<"Name : "<<Data[i].Name<<endl<<"Roll No : "<<Data[i].Roll_No<<endl<<"Marks : "<<Data[i].Marks<<endl;
}
}
int main(){
	struct Students Data[100];
	int num;
	cout<<"Enter Number Of Students To Store The Data : ";
	cin>>Data[100].num;
	for(int i=0;i<Data[100].num;++i){
    cout<<"Enter Name : ";
    cin>>Data[i].Name;
    cout<<"Enter Roll No : ";
	cin>>Data[i].Roll_No;
	cout<<"Enter Marks : ";
	cin>>Data[i].Marks;
}
    for(int i=0;i<Data[100].num;i++){
	cout<<"Student "<<i+1<<endl<<"Name : "<<Data[i].Name<<endl<<"Roll No : "<<Data[i].Roll_No<<endl<<"Marks : "<<Data[i].Marks<<endl;
}
    Students_Details(Data);
return 0;
}
