#include <iostream>
#include <string>
using namespace std;
class PaymentMethod {
public:
    void process_payment(double amount);
    void refund_payment(double amount);
};
class CreditCard : public PaymentMethod {
public:
    void process_payment(double amount);
    void refund_payment(double amount);
};
class PayPal : public PaymentMethod {
public:
    void process_payment(double amount);
    void refund_payment(double amount);
};
void PaymentMethod::process_payment(double amount) {
    cout << "Processing payment of $" << amount << endl;
}
void PaymentMethod::refund_payment(double amount) {
    cout << "Refunding $" << amount << endl;
}
void CreditCard::process_payment(double amount) {
    cout << "Processing credit card payment of $" << amount << endl;
}
void CreditCard::refund_payment(double amount) {
    cout << "Refunding $" << amount << " to the credit card" << endl;
}
void PayPal::process_payment(double amount) {
    cout << "Processing PayPal payment of $" << amount << endl;
}
void PayPal::refund_payment(double amount) {
    cout << "Refunding $" << amount << " to PayPal account" << endl;
}
void make_payment(PaymentMethod* method, double amount) {
    method->process_payment(amount);
}
int main() {
    PaymentMethod* paymentMethod;
    cout << "Credit Card Payment: " << endl;
    CreditCard creditCard;
    paymentMethod = &creditCard;
    make_payment(paymentMethod, 100.0);
    paymentMethod->refund_payment(50.0);
    cout << endl;
    cout << "***PayPal Payment***" << endl;
    PayPal payPal;
    paymentMethod = &payPal;
    make_payment(paymentMethod, 200.0);
    paymentMethod->refund_payment(100.0);
    return 0;
}
