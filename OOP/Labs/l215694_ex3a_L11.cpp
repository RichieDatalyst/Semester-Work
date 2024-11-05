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
virtual float getArea() {
    return 0.0;
}
};

class Circle : public Shape {
private:
float radius; 
public:
Circle(string c, float r) : Shape(c), radius(r) {}
float getArea() {
    float area = 3.142 * radius * radius;
cout << "Total Circle Area : " << area << endl;
cout << "Color Of Circle : " << color << endl;
return area;
}
};

class Rectangle : public Shape {
private:
float length, width; 
public:
Rectangle(string c, float l, float w) :  Shape(c), length(l), width(w) {}
float getArea() {
    float area = length * width;
cout << "Total Rectangle Area : " << area << endl;
cout << "Color Of Rectangle : " << color << endl;
return area;
}
};

class Triangle : public Shape {
private:
float breadth, height;
public:
Triangle(string c, float br, float h) : Shape(c), breadth(br), height(h) {}
float getArea() {
    float area = 0.5 * breadth * height;
cout << "Total Triangle Area : " << area << endl;
cout << "Color Of Triangle : " << color << endl;
return area;
}
};
float sumArea(Triangle& s1, Circle& s2) {
    return s1.getArea() + s2.getArea();
}
int main() {
Triangle t1("Red", 1.0, 9.0);
Circle c1("Blue", 2.0);
Rectangle r1("Orange", 6.0, 2.0);
/*t1.getArea();
cout << t1.color;
c1.getArea();
r1.getArea();
Shape *sptr = &t1;
Shape &sref = r1;
sptr->getArea();
cout << sptr->color;
cout << endl;
cout << sref.color;
cout << endl;
sref.getArea();*/
Shape s1("Purple");
cout << sumArea(t1, c1);
return 0;
}