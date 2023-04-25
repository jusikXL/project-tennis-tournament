#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int dateOfBirth;
    uint age;
    string country;

    void _determineAge();

public:
    virtual void printInfo();

    // Getters
    string getFirstName() const;
    string getLastName() const;
    int getDateOfBirth() const;
    uint getAge() const;
    string getCountry() const;
};