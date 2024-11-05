#include<iostream>
using namespace std;
class Time{
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time(){
		hours = 0;
		minutes  = 0;
		seconds = 0;
		}
	Time(int hours , int minutes , int seconds){
		this->hours = hours;
		this->minutes = minutes;
		this->seconds = seconds;
		}
	void setHours(int hours){
		if(hours > 24 || hours < 0){
				cout << "Invalid" <<endl;
		}
		else{
			this->hours = hours;
			}
	}
	void setMinutes(int minutes){
		if(minutes > 59 || minutes < 0){
			cout << "Invalid" <<endl;
		}
		else{
			this->minutes = minutes;
			}
	}
	void setSeconds(int seconds){
		if(seconds > 59 || seconds < 0){
			cout << "Invalid" <<endl;
		}
		else{
		this->seconds = seconds;
			}
	}
		int getHours(){
			return hours;
			}
		int getMinutes(){
			return minutes;
			}
		int getSeconds(){
			return seconds;
			}
		int getCurrentTime(){
			cout << hours << ":" << minutes << ":" << seconds << endl;
			return 0;
			}
	};
	int main(){
		Time t1 , t2;
		t1.setHours(15);
		t1.setMinutes(37);
		t1.setSeconds(25);
		t1.getHours();
		t1.getMinutes();
		t1.getSeconds();
		t2.setHours(26);
		t2.setMinutes(67);
		t2.setSeconds(75);
		t2.getHours();
		t2.getMinutes();
		t2.getSeconds();
		t1.getCurrentTime();
		t2.getCurrentTime();
		return 0;
		}