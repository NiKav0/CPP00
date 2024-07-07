#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void) {
	PhoneBook pb;
	std::string values;
    while(std::getline(std::cin,values ))
    {
        std::cout << values << std::endl;
		if (values == "ADD")
			pb.add();
		else if (values == "SEARCH")
			pb.search();
		else if (values == "EXIT") {
			std::cout << "Program ended." << std::endl;
			exit(1);
		}
		else
			std::cout << "You might enter either \"ADD\" or \"SEARCH\" or \"EXIT\"." << std::endl;
    }
	return 0;
}
