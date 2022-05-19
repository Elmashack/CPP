#include "PhoneBook.hpp"



int PhoneBook::PutTheContact(int id) {

   contacts[id].AddContact();
   if (contacts[id].EmptyContact())
   {
       std::cout << RED"Empty contact"RESET << std::endl;
       return id;
   }
   else
   {
       std::cout << GREEN"Contact ID " << id + 1 << " added successfully"RESET << std::endl;
       return id + 1;
   }
   return 0;
}

void PhoneBook::GetAllContact() {

    std::string ind;
    int con_len = 0;

    std::cout << "==================================================================="<< std::endl;
    std::cout << std::setw(10) << "Index |" << std::setw(10) << "Name |" << std::setw(10) << "Surname |";
    std::cout << std::setw(10) << "Nickname |" << std::endl;
    for (int i = 0; i < BOOK_SIZE; i++){
        if (!contacts[i].EmptyContact())
        {
            contacts[i].PrintContacts(i);
            con_len++;
        }
    }
    while (true){
        std::cout << "Enter contact index"<< std::endl;
        std::getline(std::cin, ind);
        if (std::cin.eof())
        {
            std::cout << "Incorrect index" << std::endl;
            break;
        }
        else if (ind == "BACK")
            break;
        else if (!std::isdigit(ind[0]))
            std::cout << "Enter the number"<< std::endl;
        else if (ind.length() > 1)
            std::cout << "Incorrect index"<< std::endl;
        else if (std::stoi(ind) > con_len || std::stoi(ind) < 1 )
            std::cout << "There is no such contact"<< std::endl;
        else{
            contacts[std::stoi(ind) - 1].ContactDetails();
            break;
        }
    }

}

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}
