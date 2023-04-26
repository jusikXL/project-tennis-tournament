#include <cassert>
#include <iostream>
#include "Tournament.hpp"

void test_add_player()
{
    Tournament t("Test Tournament", 20230101, 20230131);
    t.addPlayer("player1");
    t.addPlayer("player2");
    t.addPlayer("player3");
    assert(t.getPlayerIds().size() == 3);
    assert(t.getActivePlayerIds().size() == 3);
}

void test_generate_bracket()
{
    Tournament t("Test Tournament", 20230101, 20230131);
    t.addPlayer("player1");
    t.addPlayer("player2");
    t.addPlayer("player3");
    t.addPlayer("player4");
    t.generateBracket();
    assert(t.getBracket().size() == 2);
    assert(t.getBracket()[0].size() == 2);
    assert(t.getBracket()[1].size() == 2);
    assert(t.getMatches().size() == 2);
    assert(t.getActivePlayerIds().size() == 4);
}

void test_remove_player_from_active_ones()
{
    Tournament t("Test Tournament", 20230101, 20230131);
    t.addPlayer("player1");
    t.addPlayer("player2");
    t.addPlayer("player3");
    t.addPlayer("player4");
    t.generateBracket();
    t.removePlayerFromActiveOnes("player1");
    assert(t.getActivePlayerIds().size() == 3);
}

int main()
{
    test_add_player();
    test_generate_bracket();
    test_remove_player_from_active_ones();

    std::cout << "All tests passed!\n";

    return 0;
}
