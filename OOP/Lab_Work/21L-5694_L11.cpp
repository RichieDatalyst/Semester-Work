#include <iostream> 
#include <string> 
using namespace std;
class Faculty {
    public:
    virtual void print() = 0;
    int get_id() {
        return 111;
    }
};
class Administrator : public virtual Faculty {
    public:
     void print() {
        cout << "This Is Administrator Class" << endl;
    }
};
class Teacher : public virtual Faculty {
    public:
     void print() {
        cout << "This Is Teacher Class" << endl;
    }
};
class AdministratorTeacher : public Administrator, public Teacher {
    public:
    void print() {
        cout << "This Is AdministratorTeacher Class" << endl;
    }
};
int main() {
const int size = 3;
Faculty* f1[size];
Administrator a1;
Teacher t1;
AdministratorTeacher at1;
f1[0] = &a1;
f1[1] = &t1;
f1[2] = &at1;
for(int i = 0; i < size; i++) {
    f1[i]->print();
}
cout << at1.get_id();
//before adding virtual keyword,calling loop was showing 3 times "This Is Faculty Class". To resolve this issue we add virtual keyword to faculty class print method, now it shows the print message of administrator and teacher class.
//there was ambiguity when calling print function of administratorteacher class , so by adding virtual keyword in administrator and teacher class at the time of inheritance will resolve the issue.
//error: request for member ‘get_id’ is ambiguous. Because there is no overrided get_id function in administratorteacher class and AdministratorTeacher object as now it has holds two copies of the Faculty class.
//This works because there is only one copy of the Faculty class in the AdministratorTeacher object. 
return 0;
}
