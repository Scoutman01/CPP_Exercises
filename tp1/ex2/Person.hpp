#include <string>

class Person {
public:
    Person(std::string first, std::string sur);
    std::string get_first_name();
    std::string get_surname();

private:
    std::string first_name;
    std::string surname;
};