#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"

using namespace std;

class PlayerList
{
private:
    vector<Player> Players;

public:
    const Player &getPlayerById(string playerId) const;
    void mintPlayer(string firstName, string lastName, uint totalWins, uint totalLosses,
                    string country, int dateOfBirth, string id = "");
};