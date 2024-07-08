#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
#include <iomanip>
# include "Contact.hpp"

class PhoneBook {

private:
	Contact _contact[8];
	int _contact_index;
public:
	PhoneBook(void);
	~PhoneBook(void);

	void add(void);
	void search(void);
};

#endif
