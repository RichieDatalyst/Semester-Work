#include<iostream>
#include<cstring>
using namespace std;
class Employee{
    private:
  char name[20];
  char designation[20];
  long long int id;
  int age;
  string salary;
  public:
  Employee(char nam=' ',char desig=' ',long long int Id=0,int Age=0,string Salary=" "){
      name[20]=nam;
      designation[20]=desig;
      id=Id;
      age=Age;
      salary=Salary;
  }
  friend ostream &operator <<(ostream &out,Employee e1);
  friend istream &operator >>(istream &in,Employee &e1);
};
ostream &operator <<(ostream &out,Employee e1){
    out<<e1.name<<endl;
    out<<e1.designation<<endl;
    out<<e1.id<<endl;
    out<<e1.age<<endl;
    out<<e1.salary<<endl;
    return out;
}
istream &operator >>(istream &in,Employee &e1){
    cout<<"Enter Name : ";
    in>>e1.name;
    cout<<"Enter Designation : ";
    in>>e1.designation;  
    cout<<"Enter Id : ";
    in>>e1.id;  
    cout<<"Enter Age : ";
    in>>e1.age;  
    cout<<"Enter Salary : "; 
    cin.ignore();
    getline(in,e1.salary);  
    return in;
}
int main(){
    Employee e1;
    cout<<"Enter Details For The Employee"<<endl;
    cin>>e1;
    cout<<"Details For The Employee"<<endl;
    cout<<e1;
    return 0;
}
