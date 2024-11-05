#include <iostream>
using namespace std;
class Student {
    string name;
    int studentid;
    public:
     Student(const string& name, int studentid) : name(name), studentid(studentid) {
         this->name = name;
         this->studentid = studentid;
     }
     string getName() const {
         return name;
     }
     int getStudentId() const {
         return studentid;
     }
};
class Course {
    string courseName;
    Student* students[2];
    int count;
    public:
     Course(const string& courseName) : courseName(courseName) {
         this->courseName = courseName;
     }
     void addStudent(Student* student) {
         if (count < 2) {
                 students[count] = student;
                 count++;
             }
     }
     void displayStudents() const {
         cout << courseName << endl;
         for(int i = 0; i < count; i++) {
         cout << students[i]->getName() << " " << students[i]->getStudentId() << endl;
         }
     }
};
int main() {
Student student1("John Smith", 12345);
Student student2("Jane Doe", 54321);
Course mathCourse("Mathematics");
mathCourse.addStudent(&student1);
mathCourse.addStudent(&student2);
mathCourse.displayStudents();
return 0;
}