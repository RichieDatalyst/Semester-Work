#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
using namespace std;

class Superhero {
private:
    string name;
    int power_level;
    string special_ability[5];

public:
    Superhero(string name, int power_level, string special_ability[5]) {
        this->name = name;
        if (power_level < 1 || power_level > 100) {
            throw invalid_argument("Invalid power level. Power level should be between 1 and 100.");
        }
        this->power_level = power_level;

        for (int i = 0; i < 5; i++) {
            if (special_ability[i].empty()) {
                throw invalid_argument("Special ability cannot be empty.");
            }
            this->special_ability[i] = special_ability[i];
        }
    }

    string getName() const {
        return name;
    }

    int getPowerLevel() const {
        return power_level;
    }

    string getSpecialAbility(int index) const {
        return special_ability[index];
    }
};

void addSuperhero(Superhero* superheroes[], int& num_superheroes) {
    if (num_superheroes >= 10) {
        cout << "The superhero team is full. Cannot add more superheroes." << endl;
        return;
    }

    string name, special_ability[5];
    int power_level;

    try {
        cout << "Enter the name of the superhero: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter the power level of the superhero (1 to 100): ";
        cin >> power_level;

        if (cin.fail() || power_level < 1 || power_level > 100) {
            throw invalid_argument("Invalid power level. Power level should be an integer between 1 and 100.");
        }

        cin.ignore();
        for (int i = 0; i < 5; i++) {
            cout << "Enter special ability " << (i + 1) << ": ";
            getline(cin, special_ability[i]);

            if (special_ability[i].empty()) {
                throw invalid_argument("Special ability cannot be empty.");
            }
        }

        Superhero* newHero = new Superhero(name, power_level, special_ability);
        superheroes[num_superheroes] = newHero;
        num_superheroes++;

        cout << "Superhero added successfully!" << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        addSuperhero(superheroes, num_superheroes); // Retry adding superhero after an error
    }
}

void displayTeam(Superhero* const superheroes[], int num_superheroes) {
    if (num_superheroes == 0) {
        cout << "The superhero team is empty." << endl;
        return;
    }

    cout << "Superhero Team Details:" << endl;
    for (int i = 0; i < num_superheroes; i++) {
        cout << "Name: " << superheroes[i]->getName() << endl;
        cout << "Power Level: " << superheroes[i]->getPowerLevel() << endl;
        cout << "Special Abilities: ";
        for (int j = 0; j < 5; j++) {
            cout << superheroes[i]->getSpecialAbility(j) << ", ";
        }
        cout << endl << endl;
    }
}

int main() {
    Superhero* superheroes[10];
    int num_superheroes = 0;

    char choice;
    do {
        cout << "Do you want to add a new superhero? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            addSuperhero(superheroes, num_superheroes);
        }
        else if (choice == 'n' || choice == 'N') {
            break;
        }
        else {
            cout << "Invalid choice. Please enter 'y' or 'n'." << endl;
        }
    } while (true);

    displayTeam(superheroes, num_superheroes);

    // Clean up dynamically allocated memory
    for (int i = 0; i < num_superheroes; i++) {
        delete superheroes[i];
    }

    return 0;
}
