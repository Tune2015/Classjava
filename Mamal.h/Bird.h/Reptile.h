// Mammal.h
#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <iostream>

class Mammal : public Animal {
public:
    Mammal(std::string name, int age)
        : Animal(name, age, "Mammal") {}

    void makeSound() const override {
        std::cout << "Mammal Sound" << std::endl;
    }

    void displayInfo() const override {
        std::cout << "Name: " << name << ", Age: " << age << ", Species: " << species << std::endl;
    }
};

#endif

// Bird.h and Reptile.h would be similar, with unique makeSound() implementations.
