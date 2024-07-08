#include "PhoneBook.hpp"

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

        std::cout << "Enter your contact's phone number: " << std::endl;
        std::cin >> values;
        _contact[0].set_phone_number(values);
        std::cin.clear();

        std::cout << "Enter your contact's darkest secret: " << std::endl;
        std::cin >> values;
        _contact[0].set_darkest_secret(values);
        std::cin.clear();
        _contact_index++;
        if (_contact_index > 7)
            _contact_index = 0;
}

void PhoneBook::search(void) {
    std::cout << std::string(43, '-') << std::endl;
    std::cout << std::right << std::setw(10) << "Index" << "|"
              << std::right << std::setw(10) << "First Name" << "|"
              << std::right << std::setw(10) << "Last Name" << "|"
              << std::right << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::string(43, '-') << std::endl;

    std::cout << this->_contact[0].get_first_name() << std::endl;

    std::cout << std::string(43, '-') << std::endl;
}