#include<iostream>
#include<cmath>
using namespace std;
class EquilateralTriangle{
	private:
		float a;          //length of one side
		float Perimeter; //to calculate circumference
		float area;     //to calculate area
		public:
			void setTriangle(float Length){
				a=Length;
				area=(sqrt(3)/4)*a*a;
				Perimeter=3*a;
			}
			friend void PrintResults(EquilateralTriangle);
};
void PrintResults(EquilateralTriangle et1){
	cout<<"Perimeter Of Equilateral Triangle : "<<et1.Perimeter<<endl;
	cout<<"Area Of Equilateral Triangle : "<<et1.area<<endl;
}
int main(){
//	float Length;
	EquilateralTriangle et;
	et.setTriangle(3);
//	cout<<"Enter Length : ";
//	cin>>Length;
	PrintResults(et);
	return 0;
}
