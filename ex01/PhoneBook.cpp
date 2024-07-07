#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "  _____  _                        ____              _    " << std::endl;
    std::cout << " |  __ \\| |                      |  _ \\            | |   " << std::endl;
    std::cout << " | |__) | |__   ___  _ __   ___  | |_) | ___   ___ | | __" << std::endl;
    std::cout << " |  ___/| '_ \\ / _ \\| '_ \\ / _ \\ |  _ < / _ \\ / _ \\| |/ /" << std::endl;
    std::cout << " | |    | | | | (_) | | | |  __/ | |_) | (_) | (_) |   < " << std::endl;
    std::cout << " |_|    |_| |_|\\___/|_| |_|\\___| |____/ \\___/ \\___/|_|\\_\\" << std::endl;
    std::cout << std::endl;
	return;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook destructor called" << std::endl;
	return;
}

void PhoneBook::add(void){
    std::string values;
    // while(std::getline(std::cin,values ))
    // {
    //     std::
    // }
}

void PhoneBook::search(void) {

}