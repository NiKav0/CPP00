#include "Contact.hpp"

void Contact::set_first_name(const std::string &first_name) {
    this->_first_name = first_name;
}

void Contact::set_last_name(const std::string &last_name) {
    this->_last_name = last_name;
}

void Contact::set_nickname(const std::string &nickname) {
    this->_nickname = nickname;
}

void Contact::set_phone_number(const std::string &phone_number) {
    this->_phone_number = phone_number;
}

void Contact::set_darkest_secret(const std::string &darkest_secret) {
    this->_darkest_secret = darkest_secret;
}

std::string Contact::get_first_name() const {
    return _first_name;
}

std::string Contact::get_last_name() const {
    return _last_name;
}

std::string Contact::get_nickname() const {
    return _nickname;
}

std::string Contact::get_phone_number() const {
    return _phone_number;
}

std::string Contact::get_darkest_secret() const {
    return _darkest_secret;
}
