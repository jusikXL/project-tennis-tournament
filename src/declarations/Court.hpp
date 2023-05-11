#pragma once
#include <string>
using namespace std;

class Court
{

private:
    string location;
    string name;
    uint capacity;
    string id;
    void _produceId();

public:
    Court(string location, string name, uint capacity);
    // setters
    void setLocation(string location);
    void setName(string name);
    void setCapacity(uint capacity);
    // getters
    string getLocation() const;
    string getName() const;
    uint getCapacity() const;
    string getId() const;
    // other
    void printDetails();
};
