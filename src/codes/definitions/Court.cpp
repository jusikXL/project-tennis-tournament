#include "../../declarations/Court.hpp"
#include <iostream>
#include <random>
#include <sstream>
#include <iomanip>
#include <functional>

using namespace std;

void Court::_produceId()
{
    string combined = location + name + to_string(capacity);
    hash<string> hasher;
    size_t hash = hasher(combined);
    hash %= 10000; // to limit to 4 digits

    stringstream ss;
    ss << "#CR-" << setfill('0') << setw(4) << hash;
    // will be filled with 0 if fewer than 4 digits
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
    stringstream ss;
    ss << "Court Details:\n"
       << "ID: " << id << "\n"
       << "Location: " << location << "\n"
       << "Name: " << name << "\n"
       << "Capacity: " << capacity << "\n";
    cout << ss.str();
}
