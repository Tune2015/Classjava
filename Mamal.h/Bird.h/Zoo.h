// Zoo.h
#ifndef ZOO_H
#define ZOO_H

#include "Animal.h"
#include <iostream>

class Zoo {
private:
    Animal** animals;
    int numAnimals;
    int maxAnimals;

    void resize() {
        maxAnimals *= 2;
        Animal** newAnimals = new Animal*[maxAnimals];
        for (int i = 0; i < numAnimals; ++i) {
            newAnimals[i] = animals[i];
        }
        delete[] animals;
        animals = newAnimals;
    }

public:
    Zoo() : numAnimals(0), maxAnimals(10) {
        animals = new Animal*[maxAnimals];
    }

    ~Zoo() {
        for (int i = 0; i < numAnimals; ++i) {
            delete animals[i];
        }
        delete[] animals;
    }

    void addAnimal(Animal* animal) {
        if (numAnimals == maxAnimals) {
            resize();
        }
        animals[numAnimals++] = animal;
    }

    void displayAllAnimals() const {
        for (int i = 0; i < numAnimals; ++i) {
            animals[i]->displayInfo();
        }
    }

    // Add methods for removing animals, saving to file, loading from file.
};

#endif
