#pragma once
#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog();

        virtual void makeSound() const;
};

