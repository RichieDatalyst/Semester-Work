#include <iostream>
#include <string>
using namespace std;

// Define the Employee struct
struct Employee {
    int code;
    string name;
    string date;
    int year; //Enter last two digits
};

int main() {
    const int n = 3;
    Employee e1[n];
    e1[0]={123,"Ali","21st January 2015",15};
    e1[1]={133,"Ahmad","21st April 2018",18};
    e1[2]={143,"Akbar","21st June 2014",14};
    int currentyr;
    cout << "Enter current date in year : "; //last two digits of the year
    cin >> currentyr;
    for (int i = 0; i < n; i++) {
        int tenure = (currentyr - e1[i].year);
        if (tenure >= 3) {
            cout << e1[i].name << endl;
        }
    }

    return 0;
}
