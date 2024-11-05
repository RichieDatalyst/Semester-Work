#include "Car.h" 
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
