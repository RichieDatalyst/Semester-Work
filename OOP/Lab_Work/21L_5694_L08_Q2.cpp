#include<iostream>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;
public:
    Date() {
        month = 0;
        day = 0;
        year = 0;
    }
    Date(int month, int day, int year) {
        this->month = month;
        this->day = day;
        this->year = year;
    }
    void setMonth(int month) {
        this->month = month;
    }
    void setDay(int day) {
        this->day = day;
    }
    void setYear(int year) {
        this->year = year;
    }
    void printDate() {
        cout << month << "/" << day << "/" << year;
    }
};

class Doctor {
private:
    string firstName;
    string lastName;
    Date dateOfBirth;
    string specialty;
public:
    Doctor() {
        firstName = "";
        lastName = "";
        specialty = "";
    }
    Doctor(string firstName, string lastName, const Date& dateOfBirth, string specialty) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->dateOfBirth = dateOfBirth;
        this->specialty = specialty;
    }
    string getFirstName() {
        return firstName;
    }
    string getLastName() {
        return lastName;
    }
    Date getDOB() const {
        return dateOfBirth;
    }
    string getSpecialty() {
        return specialty;
    }
    void printdDetails() {
        cout << "Doctor Name : " << firstName << " " << lastName << endl;
        cout << "Date of Birth : ";
        dateOfBirth.printDate();
        cout << endl << "Specialty: " << specialty << endl;
    }
};

class Patient {
private:
    int patientID;
    string firstName;
    string lastName;
    Doctor doc;
    Date dateOfBirth;
    Date admitDate;
    Date dischargeDate;
public:
    Patient() {
        patientID = 0;
        firstName = "";
        lastName = "";
    }
    Patient(const Doctor& doc, int patientID, const string& firstName, const string& lastName, const Date& dateOfBirth, const Date& admitDate, const Date& dischargeDate) {
        this->doc = doc;
        this->patientID = patientID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->dateOfBirth = dateOfBirth;
        this->admitDate = admitDate;
        this->dischargeDate = dischargeDate;
    }
    string getFirstName() {
        return firstName;
    }
    string getLastName() {
        return lastName;
    }
    void printpDetails() {
        cout << "Patient ID : " << patientID << endl;
        cout << "Patient Name : " << firstName << " " << lastName << endl;
        cout << "Date of Birth : ";
        dateOfBirth.printDate();
        cout << endl;
        cout << "Admit Date : ";
        admitDate.printDate();
        cout << endl << "Discharge Date : ";
        dischargeDate.printDate();
        cout << endl;
    }
};

class Bill {
private:
    int doctorFee;
    int roomCharges;
    int pharmacyCharges;
    int nursingCharges;
public:
    Bill(int doctorFee, int roomCharges, int pharmacyCharges, int nursingCharges) {
        this->doctorFee = doctorFee;
        this->roomCharges = roomCharges;
        this->pharmacyCharges = pharmacyCharges;
        this->nursingCharges = nursingCharges;
    }
    void printBill() {
        cout << "Doctor Fee : " << doctorFee << endl;
        cout << "Room Charges : " << roomCharges << endl;
        cout << "Pharmacy Charges : " << pharmacyCharges << endl;
        cout << "Nursing Charges : " << nursingCharges << endl;
    }
};

    int main() {
        //date of birth for doctor
        Date dDOB(3, 14, 1985);
        //All info of doctor
        Doctor INFO("Mirza", "Sikander", dDOB, "Orthodontist");
        INFO.printdDetails();
        //patient info
        Date pDOB(7, 8, 2003);
        Date admitDate(6,5, 2023);
        Date dischargeDate(17, 5, 2023);
        Patient PAT(INFO, 1137210, "Tabraiz", "Bhatti", pDOB, admitDate, dischargeDate);
        PAT.printpDetails();
        //Bill info
        Bill bill(3000, 5000, 3000, 2000);
        bill.printBill();
        return 0;
    }
