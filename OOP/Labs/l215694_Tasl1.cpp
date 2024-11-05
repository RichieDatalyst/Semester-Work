#include <iostream>
using namespace std;
class Product {
    protected:
    long barcodes;
    string name;
    public:
    Product(long barc = 0, string nam = "") : barcodes(barc), name(nam) {}
    void setCode(long barcodes) {
        this->barcodes = barcodes;
    }
    long getCode() {
        return this->barcodes;
    }
   virtual void scanner() {
        cout << "Enter Name Of The Product : ";
        cin >> name;
    }
   virtual void printer() {
    cout << "Barcode : " << getCode() << endl << " Name : " << name << endl;
    }
};
class PrepackedFood : public Product {
    private:
    float unitPrice;
    public:
    PrepackedFood(long barc = 0, string nam = "", float up = 0.0) : Product(barc, nam), unitPrice(up) {}
    void scanner() {
        cout << "Enter Unit Price Of The Product : ";
        cin >> unitPrice;
    }
    void printer() {
        Product::printer();
    cout << "Unit Price : " << unitPrice << endl;
    }
};
class FreshFood : public Product {
    private:
    float weight;
    float pricePerKilo;
    public:
    FreshFood(long barc = 0, string nam = "", float wei = 0.0, float ppk = 0.0) : Product(barc, nam), weight(wei), pricePerKilo(ppk) {}
    void setWeight(float weight) {
        this->weight = weight;
    }
    float getWeight() {
        return this->weight;
    }
    
    void scanner() {
        cout << "Enter Price Per Kilo Of The Product : ";
        cin >> pricePerKilo;
    }
    void printer() {
        Product::printer();
    cout << "Total Price : " << getWeight() * pricePerKilo << endl;
    }
};
int main() {
    cout << "****PRODUCT****" << endl;
    Product p1(957145213, "Processed Kiwis");
    p1.printer();
    cout << endl;
    cout << "****PREPACKED FOOD****" << endl;
    PrepackedFood pp1(987145653, "Processed Strawberries", 350);
    pp1.printer();
    cout << endl;
    cout << "****FRESH FOOD****" << endl;
    FreshFood f1(987255213, "Processed Mangoes", 20.3, 80.54);
    f1.printer();
    cout << endl;
    Product p2;
    p2.setCode(987356123);
    p2.getCode();
    p2.scanner();
    cout << "****PRODUCT****" << endl;
    p2.printer();
    cout << endl;
    PrepackedFood pp2;
    pp2.scanner();
    cout << "****PREPACKED FOOD****" << endl;
    pp2.printer();
    cout << endl;
    FreshFood f2;
    f2.setWeight(18);
    f2.getWeight();
    f2.scanner();
    cout << "****FRESH FOOD****" << endl;
    f2.printer();
    return 0;
}