#include<iostream>
using namespace std;
class Shape {
public:
string color;
public:
Shape() {}
Shape(string c) {
    color = c;
}
virtual void getArea() {};
virtual ~Shape(){ cout << "~shape() called."<<endl; }
};

class Circle : public Shape {
private:
float radius; 
public:
Circle(string c, float r) : Shape(c), radius(r) {}
void getArea() {
cout << "Total Circle Area : " << 3.142 * radius * radius << endl;
cout << "Color Of Circle : " << color << endl;
}
~Circle() { cout << "~ circle () called."<<endl; }
};

class Rectangle : public Shape {
private:
float length, width; 
public:
Rectangle(string c, float l, float w) :  Shape(c), length(l), width(w) {}
void getArea() {
cout << "Total Rectangle Area : " << length * width << endl;
cout << "Color Of Rectangle : " << color << endl;
}
~Rectangle(){ cout << "~rectangle() called."<<endl; }
};

class Triangle : public Shape {
private:
float breadth, height;
public:
Triangle(string c, float br, float h) : Shape(c), breadth(br), height(h) {}
void getArea() {
cout << "Total Triangle Area : " << 0.5 * breadth * height << endl;
cout << "Color Of Triangle : " << color << endl;
}
~Triangle(){ cout << "~ triangle () called."<<endl; }
};
/*float sumArea(Triangle& s1, Circle& s2) {
    return s1.getArea() + s2.getArea();
}*/
int main() {
Shape S1("red");
//Yes.we can create and object of type shape.
S1.getArea();
//by making base class getArea function pure virtual following exception occurs
//error: cannot declare variable ‘S1’ to be of abstract type ‘Shape’
return 0;
}