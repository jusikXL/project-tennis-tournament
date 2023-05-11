#include "Match.hpp"
#include <cassert>
#include <sstream>

void test_constructor()
{
    Match m("player1Id", "player2Id", MIDDLE_ROUND, 20230101, "Court1", "matchId");
    assert(m.getId() == "matchId");
    assert(m.getRound() == MIDDLE_ROUND);
    assert(m.getDate() == 20230101);
    assert(m.getCourt() == "Court1");
    assert(m.getWinner() == false);
    assert(m.getScore() == nullptr);
}

void test_update_score()
{
    Match m("player1Id", "player2Id", MIDDLE_ROUND, 20230101, "Court1");
    m.updateScore(5, true);
    assert(m.getScore() != nullptr);
    assert(m.getScore()->firstPlayerScore == 5);
    assert(m.getScore()->secondPlayerScore == 0);

    m.updateScore(2, false);
    assert(m.getScore()->secondPlayerScore == 2);
}

void test_determine_winner()
{
    Match m("player1Id", "player2Id", MIDDLE_ROUND, 20230101, "Court1");
    m.updateScore(6, true);
    m.updateScore(3, false);
    m.determineWinner();
    assert(m.getWinner() == true);

    Match m2("player1Id", "player2Id", MIDDLE_ROUND, 20230101, "Court1");
    m2.updateScore(5, true);
    m2.updateScore(7, false);
    m2.determineWinner();
    assert(m2.getWinner() == false);
}

int main()
{
    test_constructor();
    test_update_score();
    test_determine_winner();

    std::cout << "All tests passed!\n";

    return 0;
}
