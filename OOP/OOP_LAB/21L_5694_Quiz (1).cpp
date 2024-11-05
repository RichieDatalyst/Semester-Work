#include<iostream>
#include<cstring>
using namespace std;
class Employee{
	private: 
	long long int emp_Id;
	string emp_Name;
	int emp_Age;
	int emp_Salary;
	public:
		Employee(long long int id,string name,int age, int salary){
     emp_Id=id;
	 emp_Name=name;
     emp_Age=age;
	 emp_Salary=salary;	
		}
		Employee(const Employee &emp2){
		emp_Id=emp2.emp_Id;
	    emp_Name=emp2.emp_Name;
        emp_Age=emp2.emp_Age;
	    emp_Salary=emp2.emp_Salary;	
	}
	    void Display(){
	    	cout<<emp_Id<<endl;
	    	cout<<emp_Name<<endl;
	    	cout<<emp_Age<<endl;
	    	cout<<emp_Salary<<endl;
		}
}; 
    int main(){
    	Employee emp1(3520250321407,"Roger",23,13500000);
    	Employee emp2(emp1);
    	cout<<"Employee 1"<<endl;
    	emp1.Display();
    	cout<<"Employee 2"<<endl;
    	emp2.Display();
    	return 0;
	}
