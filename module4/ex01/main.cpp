#include <iostream>

#include "Dog.h"
#include "Cat.h"


int main()
{
//    const Animal* j = new Dog();
//    const Animal* i = new Cat();
//    delete j; //should not create a leak
//    delete i;
    std::cout << "CREATING AND DELETING ANIMALS ARRAY" << std::endl;
    int	size = 10;
    Animal	*animalsArr[size];

    for (int n = 0; n < size; ++n) {
        if (n % 2 == 0) {
            std::cout << "animal number " << n << " : \n";
            animalsArr[n] = new Dog();
        }
        else {
            std::cout << "animal number " << n << " : \n";
            animalsArr[n] = new Cat();
        }
    }
    std::cout << "......................................" << std::endl;
    for (int n = 0; n < size; ++n)
        delete	animalsArr[n];
    // system("leaks animal");
    return 0;
}
