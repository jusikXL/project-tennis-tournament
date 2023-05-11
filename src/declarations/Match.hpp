#pragma once
#include <iostream>
#include <string>
using namespace std;

enum Round
{
    OPENING_ROUND,
    MIDDLE_ROUND,
    QUATER_FINAL,
    SEMI_FINAL,
    FINAL
};

class Match
{
private:
    string id;
    Round round;
    uint date;
    string court;
    bool winner;
    string players[2];
    // struct ScoreNode
    // {
    //     uint firstPlayerScore;
    //     uint secondPlayerScore;
    //     ScoreNode *next;
    // };
    // ScoreNode *scoreHead;

    void _produceId();

public:
    Match(string player1Id, string player2Id, Round round, uint date, string court, string id = "");

    // getters
    string getId() const;
    Round getRound() const;
    uint getDate() const;
    string getCourt() const;
    bool getWinner() const;
    // ScoreNode *getScore() const;

    // other methods
    void determineWinner();
    // void updateScore(uint score, bool player);
    // void printScore();
    void printDetails();
};
