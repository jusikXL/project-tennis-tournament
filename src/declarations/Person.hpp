#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    time_t dateOfBirth;
    uint age;
    string country;

    void _determineAge();

public:
    virtual void printInfo();

    // Getters
    string getFirstName() const;
    string getLastName() const;
    time_t getDateOfBirth() const;
    uint getAge() const;
    string getCountry() const;
};