#pragma once
#include <iostream>
#include <string>
#include "Person.hpp"
#include <vector>
using namespace std;

class Player : public Person
{
private:
    string id;
    uint totalWins;
    uint totalLosses;
    double ranking;
    void _determineRanking();
    void _produceId();
    vector<string> playedTournaments;

public:
    Player(string firstName, string lastName, uint totalWins, uint totalLosses,
           string country, int dateOfBirth, string id = "");

    uint updateTotalWins(uint totalWins);
    uint updateTotalLosses(uint totalLosses);

    // getters
    string getId() const;
    uint getTotalWins() const;
    uint getTotalLosses() const;
    double getRanking() const;
    const vector<string> &getPlayedTournaments() const;

    // other methods
    virtual void printInfo() override; // printInfo realization
    void participate(string tournamentId) const;
};
