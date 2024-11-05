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
//Triangle t1("Red", 1.0, 9.0);
//Circle c1("Blue", 2.0);
//Rectangle r1("Orange", 6.0, 2.0);
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
//Shape s1("Purple");
//cout << sumArea(t1, c1);
return 0;
}