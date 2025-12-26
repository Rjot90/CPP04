#pragma once
#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        virtual ~Cat();

        virtual void makeSound() const;
};

