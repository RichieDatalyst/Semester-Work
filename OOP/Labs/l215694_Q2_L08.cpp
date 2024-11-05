#include <iostream>
using namespace std;
class MyClass;
class FriendClass{
  public:
  void displaySecretData(const MyClass& obj);
  void modifySecretData(MyClass& obj, const string& secretData1);
};
class MyClass {
    private:
    string secretData;
    public:
    MyClass(string secretData) {
        this->secretData = secretData;
    }
    friend FriendClass;
};
  void FriendClass::displaySecretData(const MyClass& obj) {
      cout << "Secret Data : " << obj.secretData << endl;
  }
  void FriendClass::modifySecretData(MyClass& obj, const string& secretData1) {
      obj.secretData = secretData1;
      cout << "Modified Secret Data : " << obj.secretData << endl;
  }
int main()
{
MyClass obj("Hello, friend!");
FriendClass friendObj;
friendObj.displaySecretData(obj);
friendObj.modifySecretData(obj, "Updated secret data");
return 0;
}