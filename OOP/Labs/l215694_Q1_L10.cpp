#include<iostream>
using namespace std;
class Shape {
protected:
float length, breadth, height, radius;
public:
Shape() {}
Shape(float l, float b, float h, float r) {
length = l;
breadth = b;
height = h;
radius = r;
}
virtual float getArea() {
return 0;
}
virtual void cinput() {}
virtual void cshow() {}
virtual void rinput() {}
virtual void rshow() {}
virtual void tinput() {}
virtual void tshow() {}
};
class Circle : public Shape {
private:
float carea;
public:
float getArea() {
carea = 3.142 * radius * radius;
return carea;
}
void cinput() {
cout << "Enter Dimensions For Circle : ";
cin >> radius;
}
void cshow() {
getArea();
cout << "Total Circle Area : " << carea << endl;
}
};
class Rectangle : public Shape {
private:
float rarea;
public:
float getArea() {
rarea = breadth * length;
return rarea;
}
void rinput() {
cout << "Enter Dimensions For Rectangle : ";
cin >> length;
cin >> breadth;
}
void rshow() {
getArea();
cout << "Total Rectangle Area : " << rarea << endl;
}
};
class Triangle : public Shape {
private:
float tarea;
public:
float getArea() {
tarea = 0.5 * breadth * height;
return tarea;
}
void tinput() {
cout << "Enter Dimensions For Triangle : ";
cin >> breadth;
cin >> height;
}
void tshow() {
getArea();
cout << "Total Triangle Area : " << tarea << endl;
}
};
int main() {
Shape* s1;
Shape* s2;
Shape* s3;
Circle c1;
Rectangle r1;
Triangle t1;
s1 = &c1;
s2 = &r1;
s3 = &t1;
s1->cinput();
s1->cshow();
s2->rinput();
s2->rshow();
s3->tinput();
s3->tshow();
return 0;
}