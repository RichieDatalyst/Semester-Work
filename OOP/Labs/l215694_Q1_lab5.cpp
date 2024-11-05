#include <iostream>
using namespace std;

class Book {
private:
    int id;
    string title;
    string author_name;
    int quantity_available;
public:
    Book() {
        id = 0;
        title = "";
        author_name = "";
        quantity_available = 0;
    }

    void input() {
        cout << "Enter ID of the book : ";
        cin >> id;
        cout << "Enter Title of the book : ";
        cin >> title;
        cout << "Enter Author of the book : ";
        cin >> author_name;
        cout << "Enter Quantity : ";
        cin >> quantity_available;
    }

    void UpdateBookQuantity(Book* books, int numBooks, int identifier, int newQuantity) {
        for (int i = 0; i < numBooks; i++) {
            if (books[i].id == identifier) {
                books[i].quantity_available = newQuantity;
                return;
            }
        }
        cout << "Book with ID " << identifier << " not found." << endl;
    }

    void print() {
        cout << "ID : " << id << endl;
        cout << "Title : " << title << endl;
        cout << "Author : " << author_name << endl;
        cout << "Quantity : " << quantity_available << endl;
    }
};

int main() {
    int key;
    Book b;
    cout << "Enter Details For The Book" << endl;
    do {
        b.input();
        cout << "Enter -1 to stop or any other number to continue : ";
        cin >> key;
    } while (key != -1);

    Book books[10];
    books[0] = b;

    b.UpdateBookQuantity(books, 1, 3, 13);

    for (int i = 0; i < 1; i++) {
        books[i].print();
    }

    return 0;
}
