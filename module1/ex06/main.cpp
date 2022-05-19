//
// Created by Nakloz Luya on 2/26/22.
//

#include "Karen.h"

enum com {DEFAULT, DEBUG, INFO, WARNING, ERROR};

int main(int argc, char **argv)
{
    Karen karen;
    std::string str((argc != 2) ? "defualt" : argv[1]);

	switch (str == "DEBUG" ? DEBUG :
			str == "INFO" ? INFO :
			str == "WARNING" ? WARNING :
			str == "ERROR" ? ERROR :
			DEFAULT)
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("DEBUG");
			std::cout << std::endl;
            break;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("INFO");
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("WARNING");
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			std::cout << std::endl;
        default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

    return 0;
}
