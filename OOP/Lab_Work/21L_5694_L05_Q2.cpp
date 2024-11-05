#include<iostream>
using namespace std;
class Student{
	int *marks;

	public:
		Student()
		{
			marks = new int[5];
		}
		 Student(Student &S){
	     	marks = new int[5];
	     	for(int i = 0; i < 5; i++){
	     			marks[i] = S.marks[i];
			 }
	     	
		 }
		void set_marks(int mark , int index)
		{
		    	if(index < 0 || index >= 5)
			{
				cout << "Invalid Index Location"<<endl;
			}
			marks[index] = mark;
			 
		
			
		}
		void display()
		{
			for(int i = 0; i < 5; i++)
			{
				cout << marks[i] << " ";
			}
		}
	   
		 ~Student(){
		 	delete[] marks;
		 }
};
int main(){
			 	 Student student1;
			 	 int number , index;
			 	 cout << "Enter Marks" << endl;
			 	 for(int i = 0; i < 5; i++){
			 	     cin >> number;
			 	      student1.set_marks(number , i);
			 	 }
			     Student S2(student1);
				 cout << "Data Of 1st Object" << endl;
				 student1.display();
				 cout << endl;
			     cout << "Copied Data Of 1st Object" << endl;
				 S2.display(); 
			 }