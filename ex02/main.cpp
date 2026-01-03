#include "Animal/Animal.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"

int main() {


    //const Animal *animal = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();

    std::cout << "===== EX00 TEST =====" << std::endl;

    std::cout << std::endl << "===== SOUND TEST =====" << std::endl;

    //std::cout << std::endl << "Animal sound: " << std::endl;
    //animal->makeSound();

    std::cout << std::endl << "Dog sound: " << std::endl;
    dog->makeSound();

    std::cout << std::endl << "Cat sound: " << std::endl;
    cat->makeSound();

    std::cout << std::endl << "===== GETTERS TEST =====" << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl << std::endl;

    //delete animal;
    delete dog;
    delete cat;

    std::cout << "===== EX00 END TEST =====" << std::endl;

    std::cout << "===== EX01 TEST =====" << std::endl;

    std::cout << std::endl << "===== DEEP COPY TEST =====" << std::endl;
    Dog dog1;
    Dog dog2(dog1);      // constructeur de copie
    Dog dog3;
    dog3 = dog1;         // operateur d'affectation

    std::cout << std::endl << "===== DOG3 TYPE =====" << std::endl;

    std::cout << dog3.getType() << std::endl;
    std::cout << std::endl;

    Cat cat1;
    Cat cat2(cat1);
    Cat cat3;
    cat3 = cat1;

    std::cout << std::endl << "===== CAT3 SOUND =====" << std::endl;

    cat3.makeSound();
    std::cout << std::endl;

    std::cout << std::endl << "===== SETTERS TEST =====" << std::endl;

    Dog a;
    a.getBrain()->setIdea(0, "I want food");

    Dog b = a;
    b.getBrain()->setIdea(0, "I want sleep");

    std::cout << std::endl << "===== GETIDEA TEST =====" << std::endl;

    std::cout << a.getBrain()->getIdea(0) << std::endl;
    std::cout << b.getBrain()->getIdea(0) << std::endl;
    std::cout << std::endl;

    std::cout << "===== EX01 END TEST =====" << std::endl;
    std::cout << std::endl;
    std::cout << "===== EX02 TEST =====" << std::endl;
    std::cout << std::endl;

    std::cout << "classe abstraite NE DEVRAIT PAS COMPILER SI DECOMMENTE" << std::endl;
    std::cout << "inutile d instancier un Animal sans heritage car inutile, la classe deviens abstraite" << std::endl;

    //Animal test;

    std::cout << std::endl;
    std::cout << "===== EX02 END TEST =====" << std::endl;

    return 0;
}