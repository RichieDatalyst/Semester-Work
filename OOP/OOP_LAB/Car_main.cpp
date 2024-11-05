#include<iostream>
#include<cstring>
#include "Car.h"
using namespace std;
			int main(){
            Car Car1;
            Car1.input();
			Car Car2(17,"Maroon","Shelby",2535000,1300,93);
			Car Car3(20,"Scarlet","Rosey",3970000,1700,113);
			cout<<"CAR 1"<<endl;
			Car1.print();
			cout<<"CAR 2"<<endl;
            Car2.print();
            cout<<"CAR 3"<<endl;
            Car3.print();
	        return 0;
}


