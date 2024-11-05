#include<iostream>
using namespace std;
class Shape {
  protected:
  float length, breadth, height;
  public:
  Shape() {}
  Shape(float l, float b, float h) {
      length = l;
      breadth = b;
      height = h;
  }
   float getArea() { 
       return 0; 
   }
};
class Painting {
    public:
    float cost;
    float getCost() {
        cost = 70;
        return cost;
    }
};
class Square : public Shape, public Painting {
  private:
  float sarea;
  public:
  float getArea() {
      sarea = length * length;
      return sarea;
  }
  void sinput() {
      cout << "Enter Dimensions For Square : ";
      cin >> length;   
  }
  void sshow() {
      getArea();  
      getCost();
      cout << "Total Square Area : " << sarea << endl;
      cout << "Total Paint Cost : "  << "$" << sarea * cost << endl;
  }
};
class Rectangle : public Shape, public Painting {
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
      getCost();
      cout << "Total Rectangle Area : " <<  rarea << endl;
      cout << "Total Paint Cost : " << "$" << rarea * cost << endl;
  }
};
class Triangle : public Shape, public Painting {
      private:
      float tarea;
      public:
      float getArea() {
      tarea = 0.5 * breadth * height;
      return  tarea;
  }
      void tinput() {
      cout << "Enter Dimensions For Triangle : ";
      cin >> breadth;
      cin >> height;  
  }
  void tshow() {
      getArea();  
      getCost();
      cout << "Total Triangle Area : " <<  tarea << endl;
      cout << "Total Paint Cost : " << "$" << tarea * cost << endl;
  }
};
int main() {
Square s1;
Rectangle r1;
Triangle t1;
s1.sinput();
r1.rinput();
t1.tinput();
s1.sshow();
r1.rshow();
t1.tshow();
    return 0;
}
