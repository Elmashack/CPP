#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <string>
#include <cstring>
#include "Contact.hpp"

# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define RESET   "\x1b[0m"

#define  BOOK_SIZE  8

class PhoneBook
{
private:
    Contact contacts[BOOK_SIZE];
public:
    PhoneBook();
    ~PhoneBook();
    void GetAllContact();
    int PutTheContact(int id);
};

#endif