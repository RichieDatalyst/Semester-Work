#include <iostream>
using namespace std;

class tollBooth {
private:
    int totalCars;
    double totalCash;

public:
    tollBooth() {
        totalCars = 0;
        totalCash = 0.0;
    }

    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }

    void nopayCar() {
        totalCars++;
    }

    void display() {
        cout << "Total cars: " << totalCars << endl;
        cout << "Total cash: $" << totalCash << endl;
    }
};

int main() {
    tollBooth booth;
    char key;

    cout << "Press 'p' to count a paying car, 'n' to count a non-paying car, or 'q' to quit." << endl;

    while (true) {
        cin >> key;

        if (key == 'p') {
            booth.payingCar();
            cout << "Paying car counted." << endl;
        } else if (key == 'n') {
            booth.nopayCar();
            cout << "Non-paying car counted." << endl;
        } else if (key == 'q') {
            break;
        } else {
            cout << "Invalid input. Press 'p', 'n', or 'q'." << endl;
        }
    }

    booth.display();

    return 0;
}
