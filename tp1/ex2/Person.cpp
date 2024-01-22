#include "Person.hpp"
#include <iostream>

Person::Person(std::string first, std::string sur)
    : first_name(first)
    , surname(sur) {
    }

std::string Person::get_first_name() {
    return first_name;
}

std::string Person::get_surname() {
    return surname;
}
