#include<iostream>
#include<cstring>
using namespace std;
class Car{
	private:
		int carModel;
		string carColor;
		string carInventor;
		long long int carPrice;
		int carEngineSize;
		int carEnginePower;
			public:
		Car(int carmodel=0,string carcolor=" ",string carinventor=" ", long long int carprice=0, int carenginesize=0, int carenginepower=0){
		 carModel=carmodel;
		 carColor=carcolor;
		 carInventor=carinventor;
		 carPrice=carprice;
		 carEngineSize=carenginesize;
		 carEnginePower=carenginepower;
			}
				void input(){
				cout<<"Enter Car Model : ";
				cin>>carModel;
				cout<<"Enter Car Color : ";
				cin>>carColor;
				cout<<"Enter Car Inventor : ";
				cin>>carInventor;
				cout<<"Enter Car Price : ";
				cin>>carPrice;
				cout<<"Enter Car Engine Size : ";
				cin>>carEngineSize;
				cout<<"Enter Car Engine Power : ";
				cin>>carEnginePower;
			}
			void print(){
				cout<<"Car Model : "<<carModel<<endl;
				cout<<"Car Color : "<<carColor<<endl;
				cout<<"Car Inventor : "<<carInventor<<endl;
				cout<<"Car Price : "<<carPrice<<endl;
				cout<<"Car Engine Size : "<<carEngineSize<<"cc"<<endl;
				cout<<"Car Engine Power : "<<carEnginePower<<"hp"<<endl;
			}
};
