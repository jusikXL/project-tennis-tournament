#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Match.hpp"
using namespace std;

enum Round
{
    OPENING_ROUND,
    MIDDLE_ROUND,
    QUATER_FINAL,
    SEMI_FINAL,
    FINAL
};

class Tournament
{
private:
    string name;
    string id;
    uint startDate;
    uint endDate;
    string winner; // playerId
    vector<string> players;
    vector<Match> matches;
    vector<vector<string>> bracket;
    vector<string> activePlayers;

    void _produceId();

public:
    Tournament(string name, uint startDate, uint endDate, string id = "");

    // getters
    string getName() const;
    string getId() const;
    uint getStartDate() const;
    uint getEndDate() const;
    string getWinner() const;
    const vector<string> &getPlayerIds() const;
    const vector<Match> &getMatches() const;
    const vector<vector<string>> &getBracket() const;
    const vector<string> &getActivePlayerIds() const;

    // other methods
    void addPlayer(string playerId);
    void generateBracket();
    void _generateMatch(string player1Id, string player2Id, Round round, uint date, string court, string id = "");
    void removePlayerFromActiveOnes(string playerId);
    void printDetails() const;
};
