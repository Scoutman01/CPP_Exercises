#include <iomanip>
#include <iostream>

int main()
{
    std::cout << "Entre ton nom: "; // affichage sur la sortie standard

    char name[20] = ""; // création d'un tableau de caractères de taille 20
    std::cin >> std::setw(20) >> name; // récupération de 19 caractères de l'entrée standard + un caractère nulle dans le tableau name
    std::cout << name << std::endl; // affichage de la chaine dans la sortie standard

    return 0;
}
