#include<iostream>
using namespace std;
class Person{
	protected:
		int id;
		char name[50];
		char address[100];
		public:
			Person(){
		 id=0;
		 name[0]='\0';
		 address[0]='\0';
			}
			void input(){
				cout<<"Enter ID : ";
				cin>>id;
				cout<<"Enter Name : ";
				cin.ignore();
				cin.get(name,50);
				cout<<"Enter Address : ";
				cin.ignore();
				cin.get(address,50);
			}
			void output(){
				cout<<"Personal Information"<<endl;
				cout<<"ID : "<<id<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Address : "<<address<<endl;
			}
		};
class Student : public Person{
	private:
		int rollno;
		int marks;
	public:
		Student(){
	    rollno=0;
		marks=0;
	}
	        void input(){
	        	Person::input(); 
				cout<<"Enter Roll No : ";
				cin>>rollno;
				cout<<"Enter Marks : ";
				cin>>marks;
			}
			void output(){
				Person::output();
				cout<<"Educational Information"<<endl;
				cout<<"Roll No : "<<rollno<<endl;
				cout<<"Marks : "<<marks<<endl;
			}
};			
class Scholarship : public Student{
	private:
		char sname[50];
		int amount;
		public:
		    void input(){
		    	Student::input();
				cout<<"Enter Scholrship Name : ";
				cin.ignore();
				cin.get(sname,50);
				cout<<"Enter Amount : ";
				cin>>amount;
			}
			void output(){
				Student::output();
				cout<<"Scholarship Information"<<endl;
				cout<<"Scholarship Name : "<<sname<<endl;
				cout<<"Amount : "<<amount<<"Rs"<<endl;
			}
};			
	int main(){
		Scholarship obj;
		obj.input();
		obj.output();
		return 0;
	}		
			
			
			
