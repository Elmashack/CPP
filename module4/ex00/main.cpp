#include <iostream>

#include "Dog.h"
#include "Cat.h"
#include "WrongCat.h"

int main()
{
    const WrongAnimal	*animal = new WrongAnimal("WrongAnimal");
    const WrongAnimal	*cat = new WrongCat();

    std::cout << "animal pointer is a : " << animal->getType() << std::endl;
    std::cout << "He's doing : ";
    animal->makeSound();

    std::cout << "cat pointer is a : " << cat->getType() << std::endl;
    std::cout << "He's doing : ";
    cat->makeSound(); // will not work because the method is not virtual, will always call the parent method
    // so that's polymorphism baby!
    delete	animal;
    delete	cat;

    return 0;
}
