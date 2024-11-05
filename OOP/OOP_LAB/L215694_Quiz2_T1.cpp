#include<iostream>
using namespace std;
class location{
	private:
	float longitude;
	float latitude;
	public:
		location(){
			longitude=0;
			latitude=0;
		}
		location(float longitude,float latitude){
		this->longitude=longitude;
		this->latitude=latitude;
		}
		void setlongitude(float lon){
			longitude=lon;
		}
		void setlatitude(float lat){
			latitude=lat;
		}
		float getlongitude(){
			return longitude;
		}
			float getlatitude(){
			return latitude;
		}
};
class Salesperson{
	private:
		int id;
		string name;
		location loc;
		public:
			Salesperson(){
				id=0;
				name=" ";
			}
			Salesperson(int id,string name,location loc){
			this->id=id;
			this->name=name;
			this->loc=loc;
			}
			void setid(int ID){
				id=ID;
			}
			void setname(string nam){
				name=nam;
			}
			void setlocation(float longitude,float latitude){
			loc.setlongitude(longitude);
			loc.setlatitude(latitude);
			}
			int getid(){
				return id;
			}
			string getname(){
				return name;
			}
			location getlocation(){
                 return loc;

         }
			void display(){
				cout<<"Id Of Sales Person : "<<id<<endl;
				cout<<"Name Of Sales Person : "<<name<<endl;
                cout<<"Location Of Sales Person : "<<"("<<loc.getlongitude()<<" , "<<loc.getlatitude()<<")"<<endl;
			}
};
int main(){
	Salesperson s;
	s.setid(10);
	s.setname("Alex James");
	s.setlocation(56694.6,45621.4);
	s.display();
	return 0;
}


















