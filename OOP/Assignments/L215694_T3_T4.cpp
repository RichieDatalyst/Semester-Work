#include<iostream>
#include<cstring>
using namespace std;
class Faculty{
    private:
  char *name;
  int code;
  char *department;
  int years;
  int salary;
  public:
  Faculty(){
      name=new char[15];
      code=0;
      department=new char[15];
      years=0;
      salary=0;
      delete[] name;
      delete[] department;
  }
   Faculty &operator =(const Faculty &F){
   name=F.name;
    code=F.code;
   department=F.department;
    years=F.years;
    salary=F.salary;
    return *this;
   }
  friend ostream &operator <<(ostream &out,Faculty f1);
  friend istream &operator >>(istream &in,Faculty &f1);
};
ostream &operator <<(ostream &out,Faculty f1){
    out<<f1.name<<endl;
    out<<f1.code<<endl;
    out<<f1.department<<endl;
    out<<f1.years<<endl;
    out<<f1.salary<<endl;
    return out;
}
istream &operator >>(istream &in,Faculty &f1){
    cout<<"Enter Faculty Name : ";
    in>>f1.name;
    cout<<"Enter Faculty Code : ";
    in>>f1.code;
    cout<<"Enter Faculty Department : ";
    in>>f1.department;
    cout<<"Enter Experience in Years : ";
    in>>f1.years;
    cout<<"Enter Salary : ";
    in>>f1.salary;
    return in;
}
int main(){
    Faculty f1;
    cout<<"Enter Details For The Faculty"<<endl;
    cin>>f1;
    cout<<"Details For The Faculty 1"<<endl;
    cout<<f1;
    Faculty f2=f1;
    cout<<"Details For The Faculty 2"<<endl;
    cout<<f2;
    return 0;
}
