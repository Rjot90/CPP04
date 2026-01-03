#include "Animal/Animal.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"

int main() {

    // Test classe abstraite (ne dois pas compiler)
    //Animal test
    Dog a;
    a.getBrain()->setIdea(0, "I want food");

    Dog b = a;
    b.getBrain()->setIdea(0, "I want sleep");

    std::cout << a.getBrain()->getIdea(0) << std::endl;
    std::cout << b.getBrain()->getIdea(0) << std::endl;

    return 0;
}