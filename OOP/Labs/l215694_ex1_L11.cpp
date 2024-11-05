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
void getArea() {}
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
};

int main() {
Triangle t1("Red", 1.0, 9.0);
Circle c1("Blue", 2.0);
Rectangle r1("Orange", 6.0, 2.0);
t1.getArea();
cout << t1.color;
c1.getArea();
r1.getArea();
Shape *sptr = &t1;
Shape &sref = r1;
sptr->getArea();
cout << sptr->color;
cout << sref.color;
sref.getArea();
return 0;
}