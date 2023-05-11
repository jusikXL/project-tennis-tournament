#include "Player.hpp"
#include <cassert>

void testPlayer()
{
    Player p1("John", "Doe", 10, 5, "USA", 1990);

    assert(p1.getId() != "");
    assert(p1.getTotalWins() == 10);
    assert(p1.getTotalLosses() == 5);
    assert(p1.getRanking() > 0);

    // Updating total wins and losses
    p1.updateTotalWins(2);
    p1.updateTotalLosses(1);
    assert(p1.getTotalWins() == 12);
    assert(p1.getTotalLosses() == 6);

    // Participating in tournament
    p1.participate("tournament_1");
    p1.participate("tournament_2");
    const auto &tournaments = p1.getPlayedTournaments();
    assert(tournaments.size() == 2);
    assert(tournaments[0] == "tournament_1");
    assert(tournaments[1] == "tournament_2");

    // Printing player info
    p1.printInfo();
}

int main()
{
    testPlayer();
    return 0;
}
