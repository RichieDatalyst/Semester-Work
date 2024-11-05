#include<iostream>
using namespace std;
class square{
private:
    float side;
    float a;
    float p;
public:
    square perimeter(){
     p=4*side;
     return *this;
    }
    square area(){
    a=side*side;
     return *this;
    }
    void setside(float s){
    side=s;
    }
    float getside(){
    return side;
    }
    void display(){
    cout<<"Area Of The Square : "<<a<<endl;
    cout<<"Perimeter Of The Square : "<<p<<endl;
    }
};
int main(){
square sq;
sq.setside(9.9);
sq.area().perimeter();
sq.perimeter().area();
sq.display();
return 0;
}
