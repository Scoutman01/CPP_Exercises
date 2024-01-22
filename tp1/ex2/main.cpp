#include "Person.hpp"
#include <iostream>

int main() {
    Person p = {"Palluche", "La Faluche"};
    std::cout << "La personne s'appelle " << p.get_first_name() << " " << p.get_surname() << std::endl;
    return 0;
}