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
			~Date(){
			    cout<<"Destructor Called"<<endl;
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
			int operator > (const Date &Date1){
			    if(this->Day > Date1.Day && this->Month > Date1.Month && this->Year > Date1.Year){
			        return 1;
			    }
			    return 0;
			}
			int operator < (const Date &Date2){
			    if(this->Day < Date2.Day && this->Month < Date2.Month && this->Year < Date2.Year){
			        return -1;
			}
			return 0;
		}
		    int operator == (const Date &Date3){
			    if(this->Day == Date3.Day && this->Month == Date3.Month && this->Year == Date3.Year){
			        return 0;
			    }
			    return 0;
			}
			Date operator ++(){
			    ++Month;
			    return Date(Day,Month,Year);
			}
};
int main(){
 Date date1;
 date1.print();
 Date independanceday(14,8,1947);
 independanceday.print();
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
 Date temp;
 temp = xmasDay;
 temp.print();
 if(date1 > independanceday){
     cout<<"Left Hand Side Object Is Greater Than Right Hand Side Object"<<endl;
 }
 else if(date1 < independanceday){
     cout<<"Left Hand Side Object Is Smaller Than Right Hand Side Object"<<endl;
 }
 else {
     cout<<"Left Hand Side Object Is Equal To Right Hand Side Object"<<endl;
}
 cout<<"Increment Function"<<endl;
 ++date1;
 date1.print();
	return 0;
}






//In Exercise#2 it prints default constructor called.
//In Exercise#3 it prints date 1/1/1926 which is default constructor data and we can pass values to the constructor to initialize data of an object at time of creation.