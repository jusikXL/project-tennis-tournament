#include "../headers/Court.hpp"
#include <iostream>
#include <random>
#include <sstream>

void Court::_produceId()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1000, 9999);

    std::stringstream ss;
    ss << "C-" << location[0] << name[0] << "-" << dis(gen);
    id = ss.str();
}

Court::Court(string location, string name, uint capacity)
    : location(location), name(name), capacity(capacity)
{
    _produceId();
}

// setters
void Court::setLocation(string _location)
{
    location = _location;
}

void Court::setName(string _name)
{
    name = _name;
}

void Court::setCapacity(uint _capacity)
{
    capacity = _capacity;
}

// getters
string Court::getLocation() const
{
    return location;
}

string Court::getName() const
{
    return name;
}

uint Court::getCapacity() const
{
    return capacity;
}

string Court::getId() const
{
    return id;
}

// other
void Court::printDetails()
{
    cout << "Court Details:" << endl;
    cout << "ID: " << id << endl;
    cout << "Location: " << location << endl;
    cout << "Name: " << name << endl;
    cout << "Capacity: " << capacity << endl;
}
