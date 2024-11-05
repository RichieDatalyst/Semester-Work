#include<iostream>
using namespace std;
class Box{
private:
	int length;
	int breadth;
	int height;
	static int objectCount;
public:
	Box(){
		length = 0;
		breadth = 0;
		height = 0;
		objectCount++;
		}
	 Box(int length , int breadth , int height){
		 this->length = length;
		 this->breadth = breadth;
		 this->height = height;
		 objectCount ++;
		 }
	 void setLength(int length){
		 this->length = length;
		 }
	 void setBreadth(int Breadth){
		 this->breadth = breadth;
		 }
	 void setHeight(int height){
		 this->height = height;
		 }
	 int getLength(){
		 return length;
		 }
	 int getBreadth(){
		 return breadth;
		 }
	 int getHeight(){
		 return height;
		 }
     double Volume(){
		 return length * breadth * height;
		 }
	 double Area(){
		 return 2 * (length * breadth + length * height + breadth * height);
		 }
      static int getCount(){
		  return objectCount;
		  }
	};
	int Box :: objectCount = 0;
int main(){
	Box b1(3 , 2 , 2) , b2(4 , 3 , 1);
	cout << Box::getCount() << endl;
	cout << b1.Volume() << endl;
	cout << b1.Area() << endl;
	cout << b2.Volume() << endl;
	cout << b2.Area() << endl;
	return 0;
	}