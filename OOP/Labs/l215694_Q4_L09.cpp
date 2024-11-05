#include<iostream>
#include<string>
using namespace std;
class Person {
  public:
		string first_name;
		string last_name;
  protected:
  int age;
  public:
  Person() {
      first_name = "";
      last_name = "";
      age = 0;
  }
  void input() {}
  void print() {
      cout << "------------Person Information------------" << endl;
      cout << "Name : " << first_name << " " << last_name << endl;
  }
};
class Student : public Person {
    protected:
    float cgpa;
    public:
    Student() {
    cgpa = 0.0;
    }
    void input() {
        Person::input();
        cout << "Enter First Name : ";
        cin >> first_name;
        cout << "Enter Last Name : ";
        cin >> last_name;
        cout << "Enter CGPA : ";
        cin >> cgpa;
        cout << "Enter Age : ";
        cin >> age;
    }
    void print() {
        Person::print();
        cout << first_name << " " << last_name << " is " << age << " years old , his cgpa is " << cgpa << endl; 
    }
};
class Faculty : public Person {
	private:
		int course_count;
		int txt_ext;
		public:
		Faculty() {
        course_count = 0;
        txt_ext = 0;
    }	
    void input() {
        Person::input();
        cout << "Enter Number Of Courses : ";
        cin >> course_count;
        cout << "Enter Telephone Extension : ";
        cin >> txt_ext;
    }
    void print() {
        Person::print();
        cout << "Courses count " << course_count << " Telephone Extension " << txt_ext << endl; 
    }
};
class Graduate : public Student {
    private:
    string thesis_topic;
    public:
    Graduate() {
        thesis_topic = "";
    }
    void input() {
        Student::input();
        cout << "Enter Thesis Topic : ";
        cin >> thesis_topic;
    }
    void print() {
        Student::print();
    cout << first_name << " " << last_name << " is a graduate student , his cgpa is " << cgpa << " and his thesis topic is " << thesis_topic << endl;    
    }
};
class UnderGraduate : public Graduate {
    private:
    string fyp_name;
    public:
    UnderGraduate() {
        fyp_name = "";
    }
    void input () {
        Graduate::input();
        cout << "Enter Final Year Project Name : ";
        cin >> fyp_name;
    }
    void print() {
        Graduate::print();
    cout << first_name << " " << last_name << " is an undergraduate student , his cgpa is " << cgpa << " and his final year project is titled " << fyp_name <<endl;
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
    Faculty f1;
    f1.input();
    f1.print();
    return 0;
}
