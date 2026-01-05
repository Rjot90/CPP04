#include "Animal/Animal.hpp"
#include "WrongAnimal/WrongAnimal.hpp"
#include "WrongCat/WrongCat.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"

int main() {

    const Animal *animal = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << std::endl << "===== SOUND TEST =====" << std::endl;

    std::cout << std::endl << "Animal sound: " << std::endl;
    animal->makeSound();

    std::cout << std::endl << "Dog sound: " << std::endl;
    dog->makeSound();

    std::cout << std::endl << "Cat sound: " << std::endl;
    cat->makeSound();

    std::cout << std::endl << "===== GETTERS TEST =====" << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl << std::endl;

    std::cout << std::endl << "===== WRONG ANIMAL TEST =====" << std::endl;
    std::cout << std::endl << "WrongCat sound: " << std::endl;
    wrongCat->makeSound();

    delete animal;
    delete dog;
    delete cat;
    delete wrongCat;

    return 0;
}