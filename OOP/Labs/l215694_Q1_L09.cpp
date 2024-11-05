

#include <iostream>
#include <string>

using namespace std;

// Base class "Product"
class Product {
protected:
    int product_id;
    string name;
    double price;
    int quantity_in_stock;

public:
    Product(int id, string n, double p, int quantity)
        : product_id(id), name(n), price(p), quantity_in_stock(quantity) {}

    void displayDetails() {
        cout << "Product ID: " << product_id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity in Stock: " << quantity_in_stock << endl;
    }

    void updateStock(int quantity) {
        quantity_in_stock += quantity;
        cout << "Stock updated. New quantity: " << quantity_in_stock << endl;
    }
};

// Derived class "Electronics" inheriting from "Product"
class Electronics : public Product {
private:
    string brand;
    string warranty_period;
    double power_consumption;

public:
    Electronics(int id, string n, double p, int quantity, string b, string warranty, double power)
        : Product(id, n, p, quantity), brand(b), warranty_period(warranty), power_consumption(power) {}

    void displayDetails() {
        Product::displayDetails(); // Call the base class displayDetails() method

        cout << "Brand: " << brand << endl;
        cout << "Warranty Period: " << warranty_period << endl;
        cout << "Power Consumption: " << power_consumption << " Watts" << endl;
    }
};

int main() {
    // Testing the classes
    Product genericProduct(1001, "Generic Product", 49.99, 100);
    Electronics electronicProduct(2001, "Smartphone", 599.99, 50, "Samsung", "1 year", 5.5);

    cout << "Generic Product Details:" << endl;
    genericProduct.displayDetails();
    cout << endl;

    cout << "Electronic Product Details:" << endl;
    electronicProduct.displayDetails();
    cout << endl;

    // Testing the updateStock() method
    genericProduct.updateStock(50);

    return 0;
}
