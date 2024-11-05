#include <iostream>
#include <cstring>
using namespace std;
class Student{
    private:
        string rollno,name,degree,address;
        int cnic;
    public:
        Student(string roll=" ",string nam=" ",string deg=" ",string add=" ",int nic=0){
            rollno = roll;
            name = nam;
            degree = deg;
            address = add;
            cnic = nic;
        }
        void setRollno(string roll){
            rollno = roll;
        }
        void setName(string nam){
            name = nam;
        }
        void setDegree(string deg){
            degree = deg;
        }
        void setAddress(string add){
            address = add;
        }
        void setCnic(int nic){
            cnic = nic;
        }
        string getRollno(){
            return rollno;
        }
        string getName(){
            return name;
        }
        string getDegree(){
            return degree;
        }
        string getAddress(){
            return address;
        }
        int getCnic(){
            return cnic;
        }
        void input(){
        	cout<<"Enter Your Roll No : ";
        	cin>>rollno;
        	cout<<"Enter Your Name : ";
        	cin>>name;
        	cout<<"Enter Your Degree : ";
        	cin>>degree;
        	cout<<"Enter Your Address : ";
        	cin>>address;
        	cout<<"Enter Your CNIC : ";
        	cin>>cnic;
		}
        void print(){     
            cout << "Your Roll number is : " << rollno << endl;
            cout << "Your name is : " << name << endl;
            cout << "Degree is : " << degree << endl;
            cout << "Address is : " << address << endl;
            cout << "CNIC is : " << cnic << endl;
        }
};
int main(){
    Student s1;
    Student s2;
    s1.setRollno("21L-5694");
    s1.setName("Richie");
    s1.setDegree("Data Science");
    s1.setAddress("1010");
    s1.setCnic(111222);
    s1.print();
    s2.input();
    s2.print();
    return 0;
}

