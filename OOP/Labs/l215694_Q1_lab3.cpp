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
				cout<<"Default Constructor Called"<<endl;
			}
			void print(){
				cout<<"dd/mm/yyyy Format : "<<Day<<"/"<<Month<<"/"<<Year<<endl;
			}
			Date(int day, int month, int year){
			    Day = day;
			    Month = month;
			    Year = year;
			    cout<<"Overloaded Function Called"<<endl;
			}
				void input(){
				cout<<"Enter Day : ";
				cin>>Day;
				cout<<"Enter Month : ";
				cin>>Month;
				cout<<"Enter Year : ";
				cin>>Year;
			}
			void setDay(int d){
				Day = d;
			}
			void setMonth(int m){
				Month = m;
			}
			void setYear(int y){
				Year = y;
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
};
int main(){
 Date date1;
 date1.print();
 date1.input();
 date1.print();
 Date xmasDay;
 xmasDay.print();
 xmasDay.setDay(25);
 xmasDay.setMonth(12);
 xmasDay.setYear(2018);
 xmasDay.getDay();
 xmasDay.getMonth();
 xmasDay.getYear();
 xmasDay.print();
	return 0;
}
//In Exercise#2 it prints default constructor called.
//In Exercise#3 it prints date 1/1/1926 which is default constructor data and we can pass values to the constructor to initialize data of an object at time of creation.