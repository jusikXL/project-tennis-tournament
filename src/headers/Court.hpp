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
    Court(string location, string name, uint capacity, string id = "");
    // setters
    void setLocation(string location);
    void setName(string name);
    void setCapacity(uint capacity);
    // getters
    string getLocation();
    string getName();
    uint getCapacity();
    string getId();
};
