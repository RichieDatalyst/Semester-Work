#include<iostream>
#include<cstring>
using namespace std;
class Date{
	private:
		int Day;
		int Month;
		int Year;
		
		public:
			Date(){
				Day=1;
				Month=1;
				Year=1926;
			}
			void setDay(int day){
				Day=day;
			}
			void setMonth(int month){
				Month=month;
			}
			void setYear(int year){
				Year=year;
			}
			int getDay(){
				return Day;
			}
			int getMonth(){
				return Month;
			}
			int getYear(){
				return Year;
			}
			void input(){
				cout<<"Enter Day : ";
				cin>>Day;
				cout<<"Enter Month : ";
				cin>>Month;
				cout<<"Enter Year : ";
				cin>>Year;
			}
			void print(){
				cout<<"Day : "<<Day<<endl;
				cout<<"Month : "<<Month<<endl;
				cout<<"Year : "<<Year<<endl;
			}
};
int main(){
 Date date1;
 Date xmasDay;
 xmasDay.setDay(25);
 xmasDay.setMonth(12);
 xmasDay.setYear(2020);
 xmasDay.getDay();
 xmasDay.getMonth();
 xmasDay.getYear();
 xmasDay.print();
 date1.input();
 date1.print();
	return 0;
}
