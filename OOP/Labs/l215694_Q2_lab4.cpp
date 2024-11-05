/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

class Car {
private:
    char* model;
    char* company;
    int year;

public:
    // Default constructor
    Car() {
        model = nullptr;
        company = nullptr;
        year = 0;
    }

    // Parameterized constructor
    Car(const char* model, const char* company, int year) {
        this->model = new char[strlen(model) + 1];
        strcpy(this->model, model);

        this->company = new char[strlen(company) + 1];
        strcpy(this->company, company);

        this->year = year;
    }

    // Copy constructor
    Car(const Car& other) {
        model = new char[strlen(other.model) + 1];
        strcpy(model, other.model);

        company = new char[strlen(other.company) + 1];
        strcpy(company, other.company);

        year = other.year;
    }

    // Destructor
    ~Car() {
        delete[] model;
        delete[] company;
    }

    // Getter functions
    const char* getModel() const {
        return model;
    }

    const char* getCompany() const {
        return company;
    }

    int getYear() const {
        return year;
    }

    // Setter functions
    void setModel(const char* model) {
        delete[] this->model;
        this->model = new char[strlen(model) + 1];
        strcpy(this->model, model);
    }

    void setCompany(const char* company) {
        delete[] this->company;
        this->company = new char[strlen(company) + 1];
        strcpy(this->company, company);
    }

    void setYear(int year) {
        this->year = year;
    }
};

void printCarList(const Car* carList, int numCars) {
    cout << "List of Available Cars:" << endl;
    for (int i = 0; i < numCars; i++) {
        cout << "Car " << i + 1 << ":" << endl;
        cout << "Make: " << carList[i].getCompany() << endl;
        cout << "Model: " << carList[i].getModel() << endl;
        cout << "Year: " << carList[i].getYear() << endl;
        cout << endl;
    }
}

void addCar(Car*& carList, int& numCars) {
    char model[100];
    char company[100];
    int year;

    cout << "Enter the car details:" << endl;
    cout << "Make: ";
    cin.ignore();
    cin.getline(company, 100);

    cout << "Model: ";
    cin.getline(model, 100);

    cout << "Year: ";
    cin >> year;

    Car newCar(model, company, year);

    Car* newCarList = new Car[numCars + 1];
    for (int i = 0; i < numCars; i++) {
        newCarList[i] = carList[i];
    }
    newCarList[numCars] = newCar;

    delete[] carList;
    carList = newCarList;
    numCars++;

    cout << "Car added successfully!" << endl;
}

void updateCar(Car* carList, int numCars) {
    if (numCars == 0) {
        cout << "No cars available to update." << endl;
        return;
    }

    cout << "Select a car to update:" << endl;
    for (int i = 0; i < numCars; i++) {
        cout << "Car " << i + 1 << ":" << endl;
        cout << "Make: " << carList[i].getCompany() << endl;
        cout << "Model: " << carList[i].getModel() << endl;
        cout << "Year: " << carList[i].getYear() << endl;
        cout << endl;
    }

    int choice;
    cout << "Enter the car number to update: ";
    cin >> choice;

    if (choice >= 1 && choice <= numCars) {
        char model[100];
        char company[100];
        int year;

        cout << "Enter the updated car details:" << endl;
        cout << "Make: ";
        cin.ignore();
        cin.getline(company, 100);

        cout << "Model: ";
        cin.getline(model, 100);

        cout << "Year: ";
        cin >> year;

        carList[choice - 1].setModel(model);
        carList[choice - 1].setCompany(company);
        carList[choice - 1].setYear(year);

        cout << "Car details updated successfully!" << endl;
    } else {
        cout << "Invalid car number. Please try again." << endl;
    }
}

void deleteCar(Car*& carList, int& numCars) {
    if (numCars == 0) {
        cout << "No cars available to delete." << endl;
        return;
    }

    cout << "Select a car to delete:" << endl;
    for (int i = 0; i < numCars; i++) {
        cout << "Car " << i + 1 << ":" << endl;
        cout << "Make: " << carList[i].getCompany() << endl;
        cout << "Model: " << carList[i].getModel() << endl;
        cout << "Year: " << carList[i].getYear() << endl;
        cout << endl;
    }

    int choice;
    cout << "Enter the car number to delete: ";
    cin >> choice;

    if (choice >= 1 && choice <= numCars) {
        Car* newCarList = new Car[numCars - 1];
        int j = 0;
        for (int i = 0; i < numCars; i++) {
            if (i != choice - 1) {
                newCarList[j] = carList[i];
                j++;
            }
        }

        delete[] carList;
        carList = newCarList;
        numCars--;

        cout << "Car deleted successfully!" << endl;
    } else {
        cout << "Invalid car number. Please try again." << endl;
    }
}

int main() {
    Car* carList = nullptr;
    int numCars = 0;

    char choice;
    do {
        cout << "Car Management System" << endl;
        cout << "---------------------" << endl;
        cout << "a. Add a new car to the inventory" << endl;
        cout << "b. Update the details of an existing car" << endl;
        cout << "c. Delete a car from the inventory" << endl;
        cout << "d. View the list of available cars" << endl;
                cout << "e. Exit the system" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                addCar(carList, numCars);
                break;
            case 'b':
                updateCar(carList, numCars);
                break;
            case 'c':
                deleteCar(carList, numCars);
                break;
            case 'd':
                printCarList(carList, numCars);
                break;
            case 'e':
                cout << "Exiting the system..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 'e');

    delete[] carList;

    return 0;
}
