#include<iostream>
using namespace std;
class Instrument{
	public:
		virtual void MakeSound(){
			cout<<"Instrument Playing"<<endl;
		};
};
class Piano:public Instrument{
	void MakeSound(){
			cout<<"Piano Playing"<<endl;
		};
};
class Flute:public Instrument{
	void MakeSound(){
			cout<<"Flute Playing"<<endl;
		};
};
int main(){
	Piano p;
	Flute f;
	Instrument *inst1=&p;
	Instrument *inst2=&f;
	inst1->MakeSound();
	inst2->MakeSound();
	return 0;
}
