// main.cpp
#include "Zoo.h"
#include "Mammal.h"
// Include Bird.h and Reptile.h as well

void displayMenu() {
    std::cout << "1. Add an animal\n";
    std::cout << "2. Remove an animal\n";
    std::cout << "3. Display all animals\n";
    std::cout << "4. Save animals to file\n";
    std::cout << "5. Load animals from file\n";
    std::cout << "6. Exit\n";
}

int main() {
    Zoo zoo;
    int choice;
    std::string name;
    int age;

    while (true) {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter animal name: ";
                std::cin >> name;
                std::cout << "Enter animal age: ";
                std::cin >> age;
                zoo.addAnimal(new Mammal(name, age));  // This example is for Mammal. You can prompt for type and create appropriate object.
                break;
            case 2:
                // Implement removal logic
                break;
            case 3:
                zoo.displayAllAnimals();
                break;
            case 4:
                // Implement save to file logic
                break;
            case 5:
                // Implement load from file logic
                break;
            case 6:
                return 0;
        }
    }
}
