#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
using namespace std;
struct Dates{
	int day;
	string month;
	int year;
}MyDate1,MyDate2;
//MyDate1.day;
//MyDate1.month;
//MyDate1.year;
//MyDate2.day;
//MyDate2.month;
//MyDate2.year;
void MyDates(struct Dates Mydate1,struct Dates MyDate2){
ofstream ofs;
    ofs.open("Display.txt");
    if((MyDate1.day==MyDate2.day)&&(MyDate1.month==MyDate2.month)&&(MyDate1.year==MyDate2.year)){
	cout<<"Dates Are Equal"<<endl;
	ofs<<"Dates Are Equal"<<endl;
}
else{
    cout<<"Dates Are Not Equal"<<endl;
	ofs<<"Dates Are Not Equal"<<endl;	
}
}
int main(){
	struct Dates MyDate1,MyDate2;
    cout<<"Enter First Date : ";
    cin>>MyDate1.day>>MyDate1.month>>MyDate1.year;
    cout<<"Enter Second Date : ";
    cin>>MyDate2.day>>MyDate2.month>>MyDate2.year;
    MyDates(MyDate1,MyDate2);
return 0;
}
