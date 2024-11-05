#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
    Angle(int deg, float min, char dir) {
        degrees = deg;
        minutes = min;
        direction = dir;
    }

    void getAngle() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }

    void displayAngle() {
        cout << degrees << "°" << minutes << "' " << direction << endl;
    }
};

int main() {
    Angle angle(149, 34.8, 'W');
    angle.displayAngle();

    char choice;
    do {
        Angle userAngle(0, 0.0, ' ');
        userAngle.getAngle();
        userAngle.displayAngle();

        cout << "Do you want to enter another angle? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
