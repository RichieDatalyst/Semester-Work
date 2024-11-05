#include <iostream>
using namespace std;

const int MAX_CUSTOMERS = 100; // Maximum number of customer profiles that can be stored

class Customer {
private:
    int id;
    string name;
    string email;
    string phone;

public:
    Customer() {
        id = 0;
        name = "";
        email = "";
        phone = "";
    }

    Customer(int customerId, const string& customerName, const string& customerEmail, const string& customerPhone) {
        id = customerId;
        name = customerName;
        email = customerEmail;
        phone = customerPhone;
    }

    void PrintProfile() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
    }
};

int main() {
    Customer customers[MAX_CUSTOMERS];
    int numCustomers = 0;
    cout << "Customer Management System" << endl
    char createNewProfile;
    do {
        int customerId;
        string customerName, customerEmail, customerPhone;
        cout << "Enter customer ID : ";
        cin >> customerId;
        cin.ignore(); 
        cout << "Enter customer name : ";
        getline(cin, customerName);
        cout << "Enter customer email : ";
        getline(cin, customerEmail);
        cout << "Enter customer phone : ";
        getline(cin, customerPhone);
        // Create and store the new customer profile
        if (numCustomers < MAX_CUSTOMERS) {
            customers[numCustomers] = Customer(customerId, customerName, customerEmail, customerPhone);
            numCustomers++;
            cout << "Customer profile created successfully." << endl;
        } else {
            cout << "Maximum number of customer profiles reached." << endl;
            break;
        }

        cout << "Do you want to create another customer profile? (y/n) : ";
        cin >> createNewProfile;
    } while (createNewProfile == 'y' || createNewProfile == 'Y');

    cout << "Customer Profiles:" << endl;
    for (int i = 0; i < numCustomers; i++) {
        cout << "--------------------" << endl;
        customers[i].PrintProfile();
    }

    return 0;
}
