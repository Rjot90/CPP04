#pragma once
#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        virtual ~Dog();

        virtual void makeSound() const;
};

