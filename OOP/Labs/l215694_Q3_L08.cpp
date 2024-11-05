#include <iostream>
using namespace std;
class Author {
  string name;
  string email;
  char gender;
  public:
  Author(const string & name, const string & email, char gender) {
     this->name = name;
     this->email = email;
     this->gender = gender;
  }
  string getName() const {
      return name;
  }
  string getEmail() const {
      return email;
  }
  void setEmail(const string & email) {
      this->email = email;
  }
  char getGender() const {
      return gender;
  }
  void print() const {
      cout << name << " " << email << " " << gender << endl;
  }
};
class Book {
    string name;
    Author& author;
    double price;
    int qtyInStock = 0;
    public:
    Book(string name, Author& author, double price, int qtyInStock) : author(author) {
        this->name = name;
        this->author = author;
        this->price = price;
        this->qtyInStock = qtyInStock;
    }
    string getName() {
        return name;
    }
    Author getAuthor() {
        return author;
    }
    double getPrice() {
        return price;
    }
    void setPrice(double price) {
        this->price = price;
    }
    int getQtyInStock() {
        return qtyInStock;
    }
    void setQtyInStock(int qtyInStock) {
        this->qtyInStock = qtyInStock;
    } 
    string getAuthorName() {
        return author.getName();
    }
    void print() {
        cout << name << " " << price << " " << qtyInStock << endl;
        author.print();
    }
};
int main() {
// Declare and construct an instance of Author
Author peter("Peter Jones", "peter@somewhere.com", 'M');
peter.print(); // Peter Jones (m) at peter@somewhere.com
// Declare and construct an instance of Book
Book book("C++ for Dummies", peter, 19.99, 50);
book.print();
// 'C++ for Dummies' by Peter Jones (m) at peter@somewhere.com
peter.setEmail("peter@xyz.com");
peter.print(); // Peter Jones (m) at peter@xyz.com
book.print();
// 'C++ for Dummies' by Peter Jones (m) at peter@somewhere.com
book.getAuthor().setEmail("peter@abc.com");
book.print();
// 'C++ for Dummies' by Peter Jones (m) at peter@somewhere.com
return 0;
}