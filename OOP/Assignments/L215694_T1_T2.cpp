#include<iostream>
using namespace std;
class Time{
private:
    int hours;
    int mins;
    int secs;
public:
    Time(){
    hours=0;
    mins=0;
    secs=0;
    }
    Time(int h,int m,int s){
    hours=h;
    mins=m;
    secs=s;
    }
    Time operator ++(){
     ++secs;
    if(secs>=60){
        ++mins;
        secs-=60;
    }
    ++mins;
        if(mins>=60){
        ++hours;
        mins-=60;
    }
    return Time(hours,mins,secs);
    }
     Time operator++( int ){
         Time T(hours,mins,secs);
             ++secs;
    if(secs>=60){
        ++mins;
        secs-=60;
    }
    ++mins;
        if(mins>=60){
        ++hours;
        mins-=60;
    }
    return T;
     }
     Time operator --(){
     --secs;
    if(secs>=60){
        --mins;
        secs-=60;
    }
    --mins;
        if(mins>=60){
        --hours;
        mins-=60;
    }
    return Time(hours,mins,secs);
    }
     Time operator--( int ){
         Time T(hours,mins,secs);
             --secs;
    if(secs>=60){
        --mins;
        secs-=60;
    }
    --mins;
        if(mins>=60){
        --hours;
        mins-=60;
    }
    return T;
     }
     Time operator - (const Time &ti){
     Time t;
          t.secs=secs-ti.secs;
    if(ti.secs>=secs){
        --mins;
        secs+=60;
    }
        if(ti.mins>=mins){
        --hours;
        mins+=60;
    }
       t.mins=mins-ti.mins;
       t.hours = hours-ti.hours;
     return t;
     }
     Time operator *(float f){
     Time mul;
     mul.hours=hours*f;
     mul.mins=mins*f;
     mul.secs=secs*f;
     return mul;
     }
     void display(){
     cout<<hours<<" : "<<mins<<" : "<<secs<<endl;

     }
};
int main(){
Time T1(9,87,36);
Time T2(4,43,23);
Time o;
Time r;
   ++T1;
   T1.display();

   T1++;
   T1.display();

   --T1;
   T1.display();

   T1--;
   T1.display();
   o=T1-T2;
   cout<<"Difference Between Two Time Values"<<endl;
   o.display();
   r=T1*3;
   cout<<"Multiple Of Time By A Float Value"<<endl;
   r.display();
   return 0;
}
