#include<iostream>
using namespace std;
class book{
	private:
	int id;
	int edition;
	string name;
	string author;
	public:
		book(){
			id=0;
			edition=0;
			name=" ";
			author=" ";
		}
		book(int id,int edition,string name,string author){
		this->id=id;
		this->edition=edition;
		this->name=name;
		this->author=author;
		}
		void setid(int ID){
			id=ID;
		}
		void setdition(int edi){
			edition=edi;
		}
		void setname(string nam){
			name=nam;
		}
		void setauthor(int aut){
			author=aut;
		}
			int getid(){
			return id;
		}
		int getedition(){
			return edition;
		}
		string getname(){
			return name;
		}
		string getauthor(){
			return author;
		}
		void display(){
			cout<<"Book ID : "<<id<<endl;
			cout<<"Book Edition: "<<edition<<endl;
			cout<<"Book Name : "<<name<<endl;
			cout<<"Book Author : "<<author<<endl;
		}
};
		class library{
			int id;
			string name;
			book *ptr;
			public:
			    library(){
				id=0;
				ptr=NULL;
			    }
		library(int id,string name,book *btr){
		this->id=id;
		this->name=name;
		this->ptr=btr;
		}
		void setid(int Id){
		id=Id;
		}
		void setname(string nam){
		name=nam;
		}
		void setbook(book *ptr){
		this->ptr=ptr;
		}
        int getid(){
			return id;
		}
		string getname(){
			return name;
		}
		book* getbook(){
		return ptr;
		}
        void display(){
        cout<<"Library ID : "<<id<<endl;
        cout<<"Library Name : "<<name<<endl;
        ptr->display();
        }
};
int main(){
book b(333,2,"LOVE","RICHIE");
{
library l(555,"ROMANCE",&b);
cout<<"Details Of Library & Book"<<endl;
l.display();
cout<<endl;
}
cout<<"Details Of The Book After Destroying The Library"<<endl;
b.display();
system("pause");
return 0;
}
