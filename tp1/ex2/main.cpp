#include "Person.hpp"
#include <iostream>
#include <vector>
#include <sstream>

int main() {
    int persons;
    std::stringstream builder;
    std::vector<Person> vec;
    std::cout << "Nombre de personnes: ";
    std::cin >> persons;
    for (int i = 0; i < persons; i++) {
        std::string prenom, nom;
        std::cout << "Prenom: ";
        std::cin >> prenom;
        std::cout << "Nom: ";
        std::cin >> nom;
        //Person p (prenom, nom);
        //vec.push_back(p);
        vec.emplace_back(prenom, nom);
    }
    std::cout << "Les personnes sont ";
    for (int i = 0; i < persons; i++) {
        builder << vec[i].get_first_name() << " " << vec[i].get_surname();
        if (i == persons - 1) {
            builder << ".";
        } else {
            builder << ", ";
        }
    }
    std::cout << builder.str() << std::endl;
    return 0;
}