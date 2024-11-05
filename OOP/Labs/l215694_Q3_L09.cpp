#include <iostream>
using namespace std;
class LibraryItem {
    public:
    string item_id; 
    string title; 
    string author;
    int publication_year;
    bool is_available;
   LibraryItem(string id, string t, string ac, int year) : item_id(id), title(t), author(ac), publication_year(year), is_available(true) {}
    void displayDetails() {
        cout << "Item ID : " << item_id << endl;
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Publication Year : " << publication_year << endl;
        if(is_available) {
            cout << "Available" << endl;
        }
        else {
            cout << "Not Available" << endl;
        }
    }
    bool removeItem() {
        if (is_available) {
            is_available = false;
            cout << "Item successfully borrowed." << endl;
            return true;
        }
        cout << "Item is not available for borrowing." << endl;
        return false;
    }
};
class Book : public LibraryItem {
private:
    string ISBN;
    string genre;

public:
    Book(string id, string t, string ac, int year, string isbn, string g) : LibraryItem(id, t, ac, year), ISBN(isbn), genre(g) {}
    void displayDetails() {
        LibraryItem::displayDetails();
        cout << "ISBN : " << ISBN << endl;
        cout << "Genre : " << genre << endl;
    }
    void addBook() {
    string id, title, author, isbn, genre;
    int year;
    cout << "Enter Book ID : ";
    cin >> id;
    cout << "Enter Book Title : ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter Book Author : ";
    getline(cin, author);
    cout << "Enter Publication Year : ";
    cin >> year;
    cout << "Enter Book ISBN : ";
    cin.ignore();
    getline(cin, isbn);
    cout << "Enter Book Genre : ";
    getline(cin, genre);
    Book newBook(id, title, author, year, isbn, genre);
    newBook.displayDetails();
}
};
class Magazine : public LibraryItem {
private:
    int issue_number;
    string topic;

public:
    Magazine(string id, string t, string ac, int year, int issue, string tp) : LibraryItem(id, t, ac, year), issue_number(issue), topic(tp) {}
    void displayDetails() {
        LibraryItem::displayDetails();
        cout << "Issue Number : " << issue_number << endl;
        cout << "Topic : " << topic << endl;
    }
    void addMagazine() {
    string id, title, author, topic;
    int year, issue;
    cout << "Enter Magazine ID : ";
    cin >> id;
    cout << "Enter Magazine Title : ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter Magazine Author : ";
    getline(cin, author);
    cout << "Enter Publication Year : ";
    cin >> year;
    cout << "Enter Magazine Issue Number : ";
    cin >> issue;
    cout << "Enter Magazine Topic : ";
    cin.ignore();
    getline(cin, topic);
    Magazine newMagazine(id, title, author, year, issue, topic);
    newMagazine.displayDetails();
}
};
class DVD : public LibraryItem {
private:
    int duration;
    string director;
public:
    DVD(string id, string t, string ac, int year, int dur, string dir) : LibraryItem(id, t, ac, year), duration(dur), director(dir) {}
    void displayDetails() {
        LibraryItem::displayDetails();
        cout << "Duration : " << duration << " minutes" << endl;
        cout << "Director : " << director << endl;
    }
void addDVD() {
    string id, title, author, director;
    int year, duration;
    cout << "Enter DVD ID : ";
    cin >> id;
    cout << "Enter DVD Title : ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter Author : ";
    getline(cin, author);
    cout << "Enter DVD Director : ";
    getline(cin, director);
    cout << "Enter Publication Year : ";
    cin >> year;
    cout << "Enter DVD Duration (in minutes) : ";
    cin >> duration;
    DVD newDVD(id, title, author, year, duration, director);
    newDVD.displayDetails();
}
};
int main() {
    LibraryItem l("121212", "THE GOAT", "PEARSON", 1957);
    Book b("121212", "THE GOAT", "PEARSON", 1957, "14-774147", "Romance");
    Magazine m("121212", "THE GOAT", "PEARSON", 1957, 48, "LOVE & FARM");
    DVD d("121212", "THE GOAT", "PEARSON", 1957, 135, "DARAK KHAN");
    b.addBook();
    b.removeItem();
    b.displayDetails();
    m.addMagazine();
    m.removeItem();
    m.displayDetails();
    d.addDVD();
    d.removeItem();
    d.displayDetails();
    return 0;
}


