#include<iostream>
using namespace std;
class Book {
  int id;
  string title;
  public:
  Book() {
      id = 0;
      title = "";
  }
  bool operator ==(const Book& b) {
      Book b1;
      if(b.id == b1.id) {
          return true;
      }
      else {
          return false;
      }
      return 0;
  }
 friend istream& operator >>(istream& in, Book& b1) {
	cout << "Please Provide Book Details" << endl;
	cout << "Enter ID : ";
	in >> b1.id;
	cout << "Enter Title : ";
	in >> b1.title;
	return in;
}
friend ostream& operator <<(ostream& out, Book& b1) {
	cout << "Details Of The Book" << endl;
	out << b1.id << endl;
	out << b1.title << endl;
	return out;
  }
};
int main() {
    Book book1;
    Book book2;
    cout << "*************************" << endl;
    cin >> book1;
    cout << "*************************" << endl;
    cin >> book2;
    cout << "------------------" << endl;
    cout << book1;
    cout << "------------------" << endl;
    cout << book2;
    if(book1 == book2) {
        cout << "ID's of both book are same" << endl;
    }
    else {
        cout << "ID's of both book are not same" << endl;
    }
    return 0;
}