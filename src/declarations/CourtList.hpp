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
    void mintCourt(string location, string name, uint capacity);
    const Court &getCourtById(string courtId) const;
};