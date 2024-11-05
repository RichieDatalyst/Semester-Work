#include<iostream>
using namespace std;
class Student{
  private:
  string name;
  float eng;
  float math;
  float sci;
  float total;
  public:
  void Take_data(){
      cout<<"Enter Name : ";
      cin.ignore();
      getline(cin,name);
      cout<<"Enter English Marks : ";
      cin>>eng;
      cout<<"Enter Math Marks : ";
      cin>>math;
      cout<<"Enter Science Marks : ";
      cin>>sci;
  }
   void ctotal(){
       total=eng+math+sci;
   } 
   void Show_data(){
       cout<<"Name : "<<name<<endl;
       cout<<"English Marks : "<<eng<<endl;
       cout<<"Math Marks : "<<math<<endl;
       cout<<"Science Marks : "<<sci<<endl;
       cout<<"Total Marks : "<<total<<endl;
   }
};
int main(){
    Student s1,s2;
    s1.Take_data();
    s1.ctotal();
    s1.Show_data();
    s2.Take_data();
    s2.ctotal();
    s2.Show_data();
}