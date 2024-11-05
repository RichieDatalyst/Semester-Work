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
virtual void getArea() {}
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
int const count = 5;
Shape* shapesArray[count];
char ch;
for (int i = 0; i < count;) {
        cout << "Press" << endl << "1 for a triangle" << endl << "2 for a rectangle" << endl <<  "3 for a circle" << endl;
        cout << "Enter Choice : ";
        cin >> ch;
        switch(ch) {
            case '1': {
                float breadth, height;
                string color;
                cout << "Enter base of the triangle : ";
                cin >> breadth;
                cout << "Enter height of the triangle : ";
                cin >> height;
                cout << "Enter color of the triangle : ";
                cin >> color;
                shapesArray[i] = new Triangle(color, breadth, height);
                i++;
                break;
            }
            case '2': {
                float length, width;
                string color;
                cout << "Enter length of the rectangle : ";
                cin >> length;
                cout << "Enter width of the rectangle : ";
                cin >> width;
                cout << "Enter color of the rectangle : ";
                cin >> color;
                shapesArray[i] = new Rectangle(color, length, width);
                i++;
                break;
            }
            case '3': {
                float radius;
                string color;
                cout << "Enter radius of the circle : " ;
                cin >> radius;
                cout << "Enter color of the circle : ";
                cin >> color;
                shapesArray[i] = new Circle(color, radius);
                i++;
                break;
            }
            default:
                cout << "Invalid input. Enter again" << endl << endl;
                break;
        }
    }
    cout << "Areas of the shapes" << endl;
    for (int i = 0; i < count; i++) {
        shapesArray[i]->getArea();
    }
    for (int i = 0; i < count; i++) {
        delete shapesArray[i];
    }
    Shape *s1= new Triangle("Red", 1.0, 9.0);// constructor of triangle invoked
    delete s1; //identify which destructor in invoked
    // without using virtual keyword in base class destructor does not show destructor call for derived class
    // Now using virtual keyword
    // it shows destructor for derived classes also
return 0;
}