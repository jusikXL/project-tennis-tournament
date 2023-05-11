#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Court.hpp"

using namespace std;

class CourtList
{
private:
    vector<Court> courts;

public:
    string addCourt(string location, string name, uint capacity);
    Court &getCourtById(string courtId);
    void printCourts();
};
