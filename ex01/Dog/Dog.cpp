#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = other._type;
	brain = new Brain(*other.brain); // DEEP COPY
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other); // TYPE COPY
		delete brain;
		brain = new Brain(*other.brain); // DEEP COPY
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Brain* Dog::getBrain() const {
	return this->brain;
}

void Dog::makeSound() const {
	std::cout << "wouaf :p" << std::endl;
}