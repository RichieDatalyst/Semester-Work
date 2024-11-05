#include <iostream>
using namespace std;
class Account {
  protected:
  string accountNumber;
  float accountBalance;
  public:
  Account(string accnum, float accbal) : accountNumber(accnum), accountBalance(accbal) {}
  string AccountNumber() {
      return accountNumber;
  }
  float AccountBalance() {
      return accountBalance;
  }
  virtual void debit(float amount) = 0;
  virtual void credit(float amount) = 0;
  virtual void print() {
      cout << "Account Number : " << accountNumber << endl << "Account Balance : " << accountBalance << endl;;
  }
  virtual ~Account() {}
};
class CurrentAccount : public Account {
  private:
  float serviceCharges;
  float minimumBalance;
  public:
  CurrentAccount(string accnum, float accbal, float serch, float minba) : Account(accnum, accbal), serviceCharges(serch), minimumBalance(minba) {}
  void print() {
      Account::print();
      cout << "Service Charges : " << serviceCharges << endl << "Minimum Balance : " << minimumBalance << endl;
  }
  void credit(float amount) {
      amount = amount + accountBalance;
  }
  void debit(float amount) {
      if(amount <= accountBalance) {
          cout << "Amount to be debited is less than Account Balance" << endl;
      }
      if (amount < minimumBalance) {
                amount -= serviceCharges;
            }
  }
  ~CurrentAccount() {}
};
  class SavingAccount : public Account {
    private: 
    float interestRate;
    public:
    SavingAccount(string accnum, float accbal, float intra) : Account(accnum, accbal), interestRate(intra) {}
    void print() {
      Account::print();
      cout << "Interest Rate : " << interestRate << endl;
  }
  void credit(float amount) {
      amount = amount + accountBalance;
  }
  void debit(float amount) {
      if(amount <= accountBalance) {
          cout << "Amount to be debited is less than Account Balance" << endl;
      }
  }
  ~SavingAccount() {}
  };
  int main() {
    Account* accounts[2];
    accounts[0] = new CurrentAccount("212", 3000, 150, 500);
    accounts[1] = new SavingAccount("313", 10000, 0.05);
    accounts[0]->credit(1000);
    accounts[0]->debit(2000);
    accounts[1]->credit(500);
    accounts[1]->debit(15000);
    for (int i = 0; i < 2; i++) {
        accounts[i]->print();
    }
    for (int i = 0; i < 2; i++) {
        delete accounts[i];
    }
    return 0;
}
