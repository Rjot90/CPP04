#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat& other) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
    brain = new Brain(*other.brain); // DEEP COPY
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type; // TYPE COPY
        delete brain;
        brain = new Brain(*other.brain); // DEEP COPY
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Brain* Cat::getBrain() const {
    return this->brain;
}

void Cat::makeSound() const {
    std::cout << "miaou :3" << std::endl;
}
