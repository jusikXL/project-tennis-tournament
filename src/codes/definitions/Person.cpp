#include "Person.hpp"
#include <ctime>

void Person::_determineAge()
{
    time_t now = time(0);
    int currentYear = localtime(&now)->tm_year + 1900;
    int birthYear = localtime(&dateOfBirth)->tm_year + 1900;
    age = currentYear - birthYear;
}

void Person::printInfo()
{
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Date of Birth: " << dateOfBirth << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
}

// Getters
string Person::getFirstName() const
{
    return firstName;
}

string Person::getLastName() const
{
    return lastName;
}

time_t Person::getDateOfBirth() const
{
    return dateOfBirth;
}

uint Person::getAge() const
{
    return age;
}

string Person::getCountry() const
{
    return country;
}
