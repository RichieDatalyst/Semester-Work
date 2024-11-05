#include<iostream>
using namespace std;
class Phone{
	private:
		int areacode;
		int exchange;
		int number;
		public:
			Phone(){
				areacode=0;
				exchange=0;
				number=0;
			}
			void setareacode(int ac){
				areacode=ac;
			}
			void setexchange(int exc){
			    exchange=exc;
			}
			void setnumber(int num){
				number=num;
			}
			int getareacode(){
				return areacode;
			}
			int getexchange(){
				return exchange;
			}
			int getnumber(){
				return number;
			}
			void input(){
				cout<<"Enter Area Code : ";
				cin>>areacode;
				cout<<"Enter Exchange : ";
				cin>>exchange;
				cout<<"Enter Number : ";
				cin>>number;
			}
			void print(){
				cout<<"Area Code , Exchange , Number : "<<"("<<areacode<<") "<<exchange<<" - "<<number;
				cout<<endl;
			}
};
int main(){
 Phone p1;
 Phone p2;
 p1.setareacode(212);
 p1.setexchange(767);
 p1.setnumber(8900);
 p1.getareacode();
 p1.getexchange();
 p1.getnumber();
 p1.print();
 p2.input();
 p2.print();
	return 0;
}
