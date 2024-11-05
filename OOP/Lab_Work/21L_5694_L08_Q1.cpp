#include <iostream>
#include<string>
using namespace std;
class Date {
private:
    int month;
    int day;
    int year;
public:
    Date() {
        month = 1;
        day = 1;
        year = 1990;
    }
    Date(int month, int day, int year) {
        this->month = month;
        this->day = day;
        this->year = year;
        cout << "Date Object Constructor : " << toString() << endl;
    }
    ~Date() {
        cout << "Date Object Destructor : " << toString() << endl;
    }
    string toString() const {
        return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
    }
    void setMonth(int month) {
        if (month >= 1 && month <= 12) {
            this->month = month;
        }
        else {
            month = 1;
        }
    }
    int getMonth() const {
        return month;
    }
    void setDay(int day) {
        if (day >= 1 && day <= 31) {
            this->day = day;
        }
        else {
            day = 1;
        }
    }
    int getDay() const {
        return day;
    }
    void setYear(int year) {
        this->year = year;
    }
    int getYear()const {
        return year;
    }
    bool checkDay(int day) const {
        if (day < 1 || day > 31) {
            return false;
        }
        else {
            return true;
        }
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month || 12) {
            day = 31;
        }
        else {
            day = 30;
        }
        if (month == 2) {
            if (year % 4 == 0) {
                day = 29;
            }
            else if (year % 100 == 0) {
                day = 28;
            }
        }
    }
};
class Employee {
private:
    string firstName;
    string lastName;
    Date birthDate;
    Date hireDate;
public:
    Employee() {
        firstName = "";
        lastName = "";
    }
    Employee(string fName, string lName, const Date& dateOfBirth, const Date& dateOfHire) {
        firstName = fName;
        lastName = lName;
        birthDate = dateOfBirth;
        hireDate = dateOfHire;
        cout << "Employee Object Constructor : " << firstName << " " << lastName << endl;
    }
    ~Employee() {
        cout << "Employee Object Destructor : " << firstName << " " << lastName << endl;
    }
    string toString() const {
            return firstName + " " + lastName + " Hired: " + hireDate.toString() + " Birthday: " + birthDate.toString();
        }
};
int main() {
    const Date birthDate(7, 24, 1949);
    const Date hireDate(3, 12, 1988);
    Employee e1("Kashif", "Zafar", birthDate, hireDate);
    cout << e1.toString() << endl;
    return 0;
}
// 1. First, the Date object constructor with parameter values for birthDate and hireDate is called.
// 2. After that, the Employee object constructor with parameter values firstName and lastName is called.
// 3. When the program exits, the Employee object destructor is called.
// 4. Then, the Date object destructor with parameter values for hireDate is called.
// 5. After that, the Date object destructor with parameter values for birthDate is called.
