#include "PhoneBook.hpp"


int main()
{
    std::string cmd;
    PhoneBook phone_book;
    int id = 0;

    while (true)
    {
        std::cout << "Enter the command" << std::endl;
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
        {
            if (id > 7) {
                id = 0;
            }
            id = phone_book.PutTheContact(id);
        }
        else if (cmd == "SEARCH")
        {
            phone_book.GetAllContact();
        }
        else if (cmd == "EXIT")
            break;
        else
        {
            std::cout << "Incorrect command" << std::endl;
        }
        if (std::cin.eof())
            break;


    };
    return 0;
}
