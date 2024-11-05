#include<iostream>
#include<string>
using namespace std;
class Person {
  protected:
  int id;
  char name[50];
  int age;
  public:
  Person() {
      name[0] = '\0';
      id = 0;
      age = 0;
      cout << "In Constructor Of Class Person" << endl;
  }
  void input() {}
  void print() {
      cout << "------------Person Information------------" << endl;
      cout << "Name : " << name << endl;
  }
  ~Person() {
      cout << "In Destructor Of Class Person" << endl;
  }
};
class Student : public Person {
    protected:
    float cgpa;
    char rollnum[10];
    public:
    Student() {
    rollnum[0] = '\0';
    cout << "In Constructor Of Class Student" << endl;
    }
    void input() {
        Person::input();
        cout << "Enter ID : ";
        cin >> id;
        cout << "Enter Name : ";
        cin.ignore();
        cin.get(name, 50);
        cout << "Enter CGPA : ";
        cin >> cgpa;
        cout << "Enter Roll Number : ";
        cin.ignore();
        cin.get(rollnum, 10);
        cout << "Enter Age : ";
        cin >> age;
    }
    void print() {
        Person::print();
        cout << name << " is " << age << " years old , his cgpa is " << cgpa << " and roll number is " << rollnum << endl; 
    }
    ~Student() {
        cout << "In Destructor Of Class Student" << endl;
    }
};
class Graduate : public Student {
    private:
    string thesis_topic;
    string supervisorname;
    public:
    Graduate() {
        thesis_topic = "";
        supervisorname = "";
        cout << "In Constructor Of Class Graduate" << endl;
    }
    void input() {
        Student::input();
        cout << "Enter Thesis Topic : ";
        cin >> thesis_topic;
        cout << "Enter SuperVisor Name : ";
        cin >> supervisorname;
    }
    void print() {
        Student::print();
    cout << name << " is a graduate student , his cgpa is " << cgpa << " and roll number is " << rollnum << " and his thesis topic is " << thesis_topic << " under supervision of " << supervisorname << endl;    
    }
    ~Graduate() {
    cout << "In Constructor Of Class UnderGraduate" << endl;
    }
};
class UnderGraduate : public Graduate {
    private:
    string fyp_name;
    public:
    UnderGraduate() {
        fyp_name = "";
        cout << "In Constructor Of Class UnderGraduate" << endl;
    }
    void input () {
        Graduate::input();
        cout << "Enter Final Year Project Name : ";
        cin >> fyp_name;
    }
    void print() {
        Graduate::print();
    cout << name << " is an undergraduate student , his cgpa is " << cgpa  << " and roll number is " << rollnum <<  " and his final year project is titled " << fyp_name <<endl;
    }
    ~UnderGraduate() {
         cout << "In Destructor Of Class UnderGraduate" << endl;
    }
};
int main() {
    UnderGraduate ug;
    Graduate g;
    ug.input();
    g.input();
    ug.print();
    g.print();
    Student* s1 = new UnderGraduate();
    Student* s2 = new Graduate();
    s1->input();
    s1->print();
    s2->input();
    s2->print();
    Person* p1 = new UnderGraduate();
    p1->print();
    return 0;
}
