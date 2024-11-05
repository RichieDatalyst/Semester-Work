#include<iostream>
#include<string>
using namespace std;
class MyString {
	char* str;
	int length;
public:
	MyString() {
		str = nullptr;
		length = 0;
	}
	MyString(const char* ptr) {
		length = strlen(ptr);
		str = new char[length + 1];
		strcpy_s(str, length+  1, ptr);
	}
	MyString(const MyString& obj) {
		length = obj.length;
		str = new char[length + 1];
		strcpy_s(str, length + 1, obj.str);
	}
	~MyString() {
		delete[] str;
	}
	void operator++() {
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				str[i] -= 32;
			}
		}
	}
	friend istream& operator >>(istream& in, MyString& obj) {
		cout << "Enter the string : ";
		char buffer[100];
		in.getline(buffer, 100);
		delete[] obj.str;
		obj.length = strlen(buffer);
		obj.str = new char[obj.length + 1];
		strcpy_s(obj.str, obj.length + 1, buffer);
		return in;
	}
	friend ostream& operator <<(ostream& out, MyString& obj) {
		out << "String is : " << obj.str << endl;
		return out;
	}
	MyString& operator=(const MyString& obj) {
		if (this == &obj) {
			return *this;
		}
		delete[] str;
		length = obj.length;
		str = new char[length + 1];
		strcpy_s(str, length + 1, obj.str);
		return *this;
	}
	char& operator[](int index) {
		if (index >= length) {
			cout << "Index Out Of Bound" << endl;
		}
		return str[index];
	}
	bool operator==(const MyString& obj) {
		if (length != obj.length) {
			return false;
		}
		for (int i = 0; i < length; i++) {
			if (str[i] == obj.str[i]) {
				return true;
			}
			else {
				return false;
			}
		}
		return 0;
	}
};
int main() {
	MyString mystr1;
	MyString mystr2;
	cin >> mystr1;
	cout << mystr1;
	cin >> mystr2;
	cout << mystr2;
	++mystr1;
	cout << "Upper case string 1 : " << mystr1 << endl;
	++mystr2;
	cout << "Upper case string 2 : " << mystr2 << endl;
	MyString mystr3 = mystr1;
	cout << "Copy Construtor : " << mystr3 << endl;
	//Accessing
	for (int i = 0; i < mystr1[i] != '\0'; i++) {
		cout << "Character at index " << i << " : " << mystr1[i] << endl;
	}
	for (int j = 0; j < mystr2[j] != '\0'; j++) {
		cout << "Character at index " << j << " : " << mystr2[j] << endl;
	}
	//Modifying
	mystr1[4] = 'G';
	cout << "------Modified String------ " << mystr1 << endl;
	mystr2[4] = 'Z';
	cout << "------Modified String------ " << mystr2 << endl;
	//Invalid Index
	cout << "Character at mystr1[3] : " << mystr1[3] << endl;
	cout << "Character at mystr2[4] : " << mystr2[4] << endl;
	if (mystr1 == mystr2) {
		cout << "Two strings are same" << endl;
	}
	else {
		cout << "Two strings are different" << endl;
	}
	return 0;
}