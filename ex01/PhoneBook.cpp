#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <stdio.h>

PhoneBook::PhoneBook(void): _contact_index(0) {
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

void PhoneBook::add(void) {
    std::string values;
    std::cout << "Enter your contact's first name: " << std::endl;
    std::cin >> values;
    _contact[_contact_index].set_first_name(values);
    std::cin.clear();

    std::cout << "Enter your contact's last name: " << std::endl;
    std::cin >> values;
    _contact[0].set_last_name(values);
    std::cin.clear();

    std::cout << "Enter your contact's nickname: " << std::endl;
    std::cin >> values;
    _contact[0].set_nickname(values);
    std::cin.clear();

    do {
        std::cout << "Enter your contact's phone number: " << std::endl;
        std::cin >> values;
        if (!std::is_digits(values))
            std::cout << "Phone number should only contain digits. Please try again." << std::endl;
    }
    while (!std::is_digits(values));
    _contact[_contact_index].set_phone_number(values);
    std::cin.clear();

    std::cout << "Enter your contact's darkest secret: " << std::endl;
    std::cin >> values;
    _contact[0].set_darkest_secret(values);
    std::cin.clear();

    _contact_index++;
    if (_contact_index > 7)
        _contact_index = 0;
    std::cout << "Contact added successfully!\n";
}

std::string truncate(const std::string &str) {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::search() {
    std::cout << std::string(43, '-') << std::endl;
    std::cout << std::right << std::setw(10) << "Index" << "|"
              << std::right << std::setw(10) << "First Name" << "|"
              << std::right << std::setw(10) << "Last Name" << "|"
              << std::right << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::string(43, '-') << std::endl;

    for (int i = 0; i < 8; ++i) {
        if (_contact[i].get_first_name().empty()) {
            continue;
        }
        std::cout << std::right << std::setw(10) << i << "|"
                  << std::right << std::setw(10) << truncate(_contact[i].get_first_name()) << "|"
                  << std::right << std::setw(10) << truncate(_contact[i].get_last_name()) << "|"
                  << std::right << std::setw(10) << truncate(_contact[i].get_nickname()) << std::endl;
        std::cout << std::string(43, '-') << std::endl;
    }
}

// std::string truncate(const std::string &str) {
//     if (str.length() > 10) {
//         return str.substr(0, 9) + ".";
//     }
//     return str;
// }

// void PhoneBook::search(void) {
//     std::cout << std::string(43, '-') << std::endl;
//     std::cout << std::right << std::setw(10) << "Index" << "|"
//               << std::right << std::setw(10) << "First Name" << "|"
//               << std::right << std::setw(10) << "Last Name" << "|"
//               << std::right << std::setw(10) << "Nickname" << std::endl;
//     std::cout << std::string(43, '-') << std::endl;

//     for (int i = 0; i < 8; ++i) {
//         if (_contact[i].get_first_name().empty()) {
//             continue;
//         }

//     std::cout << std::right << std::setw(10) << i << "|"
//               << std::right << std::setw(10) << truncate(this->_contact[i].get_first_name()) << "|"
//               << std::right << std::setw(10) << truncate(this->_contact[i].get_last_name()) << "|"
//               << std::right << std::setw(10) << truncate(this->_contact[i].get_nickname()) << std::endl;
//     std::cout << std::string(43, '-') << std::endl;
// }
