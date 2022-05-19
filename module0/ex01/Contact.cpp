#include "PhoneBook.hpp"



void Contact::AddContact() {

    std::cout << "FirstName: ";
    std::getline(std::cin, _first_name);
    if (std::cin.eof())
        std::cout << "Empty FirstName" << std::endl;
    std::cout << "Last Name: ";
    std::getline(std::cin, _last_name);
    if (std::cin.eof())
        std::cout << "Empty LastName" << std::endl;
    std::cout << "Nickname: ";
    std::getline(std::cin, _nickname);
    if (std::cin.eof())
        std::cout << "Empty NickName" << std::endl;
    std::cout << "Phone Number: ";
    std::getline(std::cin, _phone_num);
    if (std::cin.eof())
        std::cout << "Empty PhoneNumber" << std::endl;
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, _dark_secret);
    if (std::cin.eof())
        std::cout << "Empty Darkest Secret" << std::endl;
}

int Contact::EmptyContact() {

    if(_first_name.empty())
        return 1;
    if(_last_name.empty())
        return 1;
    if(_nickname.empty())
        return 1;
    if(_phone_num.empty())
        return 1;
    if(_dark_secret.empty())
        return 1;
    return 0;
}

void Contact::PrintContacts(int ind) {

    std::cout << std::setw(9) << ind + 1<< '|';
    PrintField(_first_name);
    PrintField(_last_name);
    PrintField(_nickname);
    std::cout << std::endl;

}

void Contact::PrintField(std::string str)
{
    if (str.length() > 9)
        std::cout << std::setw(10) << str.substr(0, 9) + ".|";
    else
        std::cout << std::setw(10) << str + "|";
}

void Contact::ContactDetails() {
    std::cout << "First name: " << _first_name << std::endl;
    std::cout << "Last name: " << _last_name << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone number: " << _phone_num << std::endl;
    std::cout << "Dark secret: " << _dark_secret << std::endl;
}

Contact::Contact() {}

Contact::~Contact() {}
