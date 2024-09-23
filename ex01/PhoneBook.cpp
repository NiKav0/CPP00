#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <cstring>
#include <stdio.h>

PhoneBook::PhoneBook(void): _contact_index(0) {
	std::cout << "  _____  _                        ____              _    " << std::endl;
    std::cout << " |  __ \\| |                      |  _ \\            | |   " << std::endl;
    std::cout << " | |__) | |__   ___  _ __   ___  | |_) | ___   ___ | | __" << std::endl;
    std::cout << " |  ___/| '_ \\ / _ \\| '_ \\ / _ \\ |  _ < / _ \\ / _ \\| |/ /" << std::endl;
    std::cout << " | |    | | | | (_) | | | |  __/ | |_) | (_) | (_) |   < " << std::endl;
    std::cout << " |_|    |_| |_|\\___/|_| |_|\\___| |____/ \\___/ \\___/|_|\\_\\" << std::endl;
	std::cout << std::endl;
	std::cout << "Type one of the following commands \"ADD\", \"SEARCH\" or \"EXIT\"." << std::endl;
	return;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook destructor called" << std::endl;
	return;
}

bool is_digits(std::string str) {
    int i;
    for (i = 0; str[i]; i++) {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

void PhoneBook::add() {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, first_name);
	_contact[_contact_index].set_first_name(first_name);

	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	_contact[_contact_index].set_last_name(last_name);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	_contact[_contact_index].set_nickname(nickname);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	// do {
	// 	if (phone_number.length() != 10 || !is_digits(phone_number)) {
	// 		std::cout << "Phone number must be 10 digits and must be all digits." << std::endl;
	// 		std::cout << "Enter phone number: ";
	// 		std::getline(std::cin, phone_number);
	// 	}
	// }
	// while (phone_number.length() != 10);
	_contact[_contact_index].set_phone_number(phone_number);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);
	_contact[_contact_index].set_darkest_secret(darkest_secret);

	if (_contact_index > 7)
	{
        _contact_index = 0;
	}
	std::cout << "contact frfrfrfr " << _contact_index << std::endl;
	_contact_index++;
	std::cout << "Contact added." << std::endl;
	std::cout << "Type one of the following commands \"ADD\", \"SEARCH\" or \"EXIT\"." << std::endl;
	return ;
}

std::string truncate(const std::string &str) {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::search() {
	std::string line;
    std::cout << std::string(43, '-') << std::endl;
    std::cout << std::right << std::setw(10) << "Index" << "|"
              << std::right << std::setw(10) << "First Name" << "|"
              << std::right << std::setw(10) << "Last Name" << "|"
              << std::right << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::string(43, '-') << std::endl;

    for (int i = 0; i < 8; ++i) {
        if (_contact[i].get_first_name().empty()) 
		{
            continue;
        }
        std::cout << std::right << std::setw(10) << i << "|"
                  << std::right << std::setw(10) << truncate(_contact[i].get_first_name()) << "|"
                  << std::right << std::setw(10) << truncate(_contact[i].get_last_name()) << "|"
                  << std::right << std::setw(10) << truncate(_contact[i].get_nickname()) << std::endl;
        std::cout << std::string(43, '-') << std::endl;
    }
	std::cout << "Who do you wish to Search for ? (type index)" << std::endl;
	while (std::getline(std::cin, line))
	{
		if(std::isdigit(line[0])&& std::atoi(line.c_str()) < this->_contact_index) // 7it katfot inde 8 kaysegfolti
		{
		if (std::atoi(line.c_str()) <= this->_contact_index-1 )
		{
			std::cout << "First Name: " << this->_contact[std::atoi(line.c_str())].get_first_name() << std::endl;
			std::cout << "Last Name: " << this->_contact[std::atoi(line.c_str())].get_last_name() << std::endl;
			std::cout << "Nickname: " << this->_contact[std::atoi(line.c_str())].get_nickname() << std::endl;
			std::cout << "Phone Number: " << this->_contact[std::atoi(line.c_str())].get_phone_number() << std::endl;
			std::cout << "Darkest Secret: " << this->_contact[std::atoi(line.c_str())].get_darkest_secret() << std::endl;
			std::cout << "Type one of the following commands \"ADD\", \"SEARCH\" or \"EXIT\"." << std::endl;
			break;
		}
		}
		else 
		{
			std::cout << "Index out of range." << std::endl;
			std::cout << "Who do you wish to Search for ? (type index)" << std::endl;
		}
	}
	
}
