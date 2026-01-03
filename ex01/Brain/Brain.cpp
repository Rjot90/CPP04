#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other)
        for (size_t i = 0; i < 10; i++)
            this->idea[i] = other.idea[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, std::string inputIdea) {
    if (index < 10 && index >= 0)
        this->idea[index] = inputIdea;
    else
        std::cout << "Out of range" << std::endl;
}

std::string Brain::getIdea(int index) {
    if (index > 10 || index < 0)
        return "OOF";
    return idea[index];
}
