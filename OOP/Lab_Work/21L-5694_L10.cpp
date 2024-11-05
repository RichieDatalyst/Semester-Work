#include <iostream>
#include <conio.h>
using namespace std;
class Animal {
    private:
    string message;
    public:
    virtual string speak() {
        cout << "This is an Animal class" << endl;
        return message = "Speak() called.";
    }
    virtual inline ~Animal() { 
        cout << "~Animal() called." << endl; 
    }
};
class Dog : public Animal {
    public:
    string speak() {
        cout << "This is Dog class" << endl;
        return "Woof.";
    }
    inline ~Dog() { 
        cout << "~Dog() called." << endl; 
    }
};
class Cat : public Animal {
    public:
    string speak() {
        cout << "This is Cat class" << endl;
        return "Meow.";
    }
    inline ~Cat() { 
        cout << "~Cat() called." << endl; 
    }
};
int main() {
    //Exercise 1 main function is below
    Animal objAnimal;
    Dog objDog;
    Animal *ptrAnimal = &objAnimal;
    Dog *ptrDog = &objDog;
    cout << objAnimal.speak() << endl;
    cout << objDog.speak() << endl;
    cout << ptrAnimal->speak() << endl;
    cout << ptrDog->speak() << endl;
    //Exercise : 1 OUTPUT FOR ABOVE MAIN FUNCTIONS ARE GIVEN BELOW:
    //This is an Animal class
    //speak() called.
    //This is Dog class
    //Woof
    //This is an Animal class
    //speak() called.
    //This is Dog class
    //Woof
    //Exercise 2 main function is below
    Dog lassie;
    Animal *myPet = &lassie;
    cout << myPet->speak() << endl;
    //Exercise : 2 OUTPUT FOR ABOVE MAIN FUNCTIONS ARE GIVEN BELOW:
    //This is an Animal class
    //speak() called.
    //Now adding virtual keyword in base class speak method.
    //OUTPUT after adding virtual keyword
    //This is Dog class
    //Woof
    //Exercise 3 main function is below
    const int size = 2;
    Animal* myPets[size];
    Cat whiskers;
    Dog mutley;
    myPets[0] = &whiskers;
    myPets[1] = &mutley;
    for(int i=0; i < size; i++)
    cout << myPets[i]->speak() << endl;
    //OUTPUT for exercise 3 is below
    //This is Cat class
    //Meow.
    //This is Dog class
    //Woof.
    //Exercise 4 main function is below
    const int Size = 6;
    Animal* MyPets[Size];
    Cat persian;
    Cat sphynx;
    Cat birman;
    Dog labrador;
    Dog yorkshire;
    Dog bulldog;
    MyPets[0] = &persian;
    MyPets[1] = &sphynx;
    MyPets[2] = &birman;
    MyPets[3] = &labrador;
    MyPets[4] = &yorkshire;
    MyPets[5] = &bulldog;
    int i = 0;
    while (i < Size) {
    cout << "Press 1 for a Dog and 2 for a Cat." << endl;
    int choice;
    cin >> choice;
    if (choice == 1) {
        MyPets[i] = new Dog;
        cout << "Dog added at position " << i << endl << endl;
        i++;
        }
    else if (choice == 2) {
        MyPets[i] = new Cat;
        cout << "Cat added at position " << i << endl << endl;
        i++;
        }
    else {
        cout << "Invalid input. Enter again." << endl << endl;
        }
    }  
    for(int i=0; i < Size; i++) {
    cout << MyPets[i]->speak() << endl;
    delete MyPets[i];
    }
    //OUTPUT for exercise 4 is below
    //Press 1 for a Dog and 2 for a Cat.
    //1
    //Dog added at position 0

    //Press 1 for a Dog and 2 for a Cat.
    //1
    //Dog added at position 1

    //Press 1 for a Dog and 2 for a Cat.
    //1
    //Dog added at position 2

    //Press 1 for a Dog and 2 for a Cat.
    //2
    //Cat added at position 3

    //Press 1 for a Dog and 2 for a Cat.
    //2
    //Cat added at position 4

    //Press 1 for a Dog and 2 for a Cat.
    //2
    //Cat added at position 5

    //This is Dog class
    //Woof.
    //This is Dog class
    //Woof.
    //This is Dog class
    //Woof.
    //This is Cat class
    //Meow.
    //This is Cat class
    //Meow.
    //This is Cat class
    //Meow.
    //for exercise 5 only base class destructor was called
    //now adding virtual keyword in base class destructor
    //after adding virtual keyword output is below
    //~Dog() called.
    //~Animal() called.
    //This is Dog class
    //Woof.
    //~Dog() called.
    //~Animal() called.
    //This is Dog class
    //Woof.
    //~Dog() called.
    //~Animal() called.
    //This is Cat class
    //Meow.
    //~Cat() called.
    //~Animal() called.
    //This is Cat class
    //Meow.
    //~Cat() called.
    //~Animal() called.
    //This is Cat class
    //Meow.
    return 0;
}
