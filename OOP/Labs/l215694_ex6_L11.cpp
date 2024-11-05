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
};

class Circle : public Shape {
protected:
float radius; 
public:
Circle(string c, float r) : Shape(c), radius(r) {}
void getArea() {
cout << "Total Circle Area : " << 3.142 * radius * radius << endl;
cout << "Color Of Circle : " << color << endl;
}
};

class Sphere : public Circle {
    public:
    Sphere(string c, float r) : Circle(c, r) {}
    float Volume() {
        cout << "Volume : ";
        return 1.333 * 3.142 * radius * radius * radius;
        cout << "Color Of Sphere : " << color << endl;
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

void checkShape(Shape* S) {
    // Print color and area of the shape
    cout << S->color << endl;
    S->getArea();

    // Check if the shape is a Sphere by using dynamic_cast
    Sphere* spherePtr = dynamic_cast<Sphere*>(S);
    if (spherePtr != nullptr) {
        // If the shape is a Sphere, print its volume
        cout << spherePtr->Volume() << endl;
    }
}

int main() {
Triangle t1("Red", 1.0, 9.0);
Circle c1("Blue", 2.0);
Rectangle r1("Orange", 6.0, 2.0);
Sphere s1("Green", 4);
checkShape(&t1);
checkShape(&c1);
checkShape(&r1);
checkShape(&s1);
return 0;
}