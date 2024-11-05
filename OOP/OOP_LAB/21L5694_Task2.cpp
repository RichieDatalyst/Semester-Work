#include<iostream>
using namespace std;
class LocalPhone{
	protected:
		long long int phno;
		public:
		void input(){
			cout<<"Enter Phone Number : ";
			cin>>phno;
		}	
		void display(){
			cout<<"Phone Number : "<<phno<<endl;
		}
};
class NatPhone : public LocalPhone{
	protected:
		int citycode;
		public:
			void input(){
				LocalPhone::input();
				cout<<"Enter City Code : ";
				cin>>citycode;
			}
			void display(){
				LocalPhone::display();
				cout<<"City Code : "<<citycode<<endl;
			}
};
class IntPhone : public NatPhone{
	private:
		int countryCode;
		public:
			void input(){
				NatPhone::input();
			cout<<"Enter Country Code : ";
			cin>>countryCode;
		}
		void display(){
			NatPhone::display();
			cout<<"Country Code : "<<countryCode<<endl;
		}
};
int main(){
	IntPhone obj;
	obj.input();
	obj.display();
	return 0;
}
