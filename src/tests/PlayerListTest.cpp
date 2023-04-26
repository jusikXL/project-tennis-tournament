#include "PlayerList.hpp"
#include <cassert>

void testPlayerList()
{
    PlayerList playerList; // Adding players to the player list
    playerList.mintPlayer("John", "Doe", 10, 5, "USA", 1990, "001");
    playerList.mintPlayer("Jane", "Smith", 8, 3, "Canada", 1985, "002");
    playerList.mintPlayer("David", "Brown", 12, 7, "UK", 1988, "003");

    // Getting player by id
    const Player &player1 = playerList.getPlayerById("001");
    assert(player1.getFirstName() == "John");
    assert(player1.getLastName() == "Doe");
    assert(player1.getTotalWins() == 10);
    assert(player1.getTotalLosses() == 5);
    assert(player1.getCountry() == "USA");
    assert(player1.getDateOfBirth() == 1990);
    assert(player1.getId() == "001");

    const Player &player2 = playerList.getPlayerById("002");
    assert(player2.getFirstName() == "Jane");
    assert(player2.getLastName() == "Smith");
    assert(player2.getTotalWins() == 8);
    assert(player2.getTotalLosses() == 3);
    assert(player2.getCountry() == "Canada");
    assert(player2.getDateOfBirth() == 1985);
    assert(player2.getId() == "002");

    const Player &player3 = playerList.getPlayerById("003");
    assert(player3.getFirstName() == "David");
    assert(player3.getLastName() == "Brown");
    assert(player3.getTotalWins() == 12);
    assert(player3.getTotalLosses() == 7);
    assert(player3.getCountry() == "UK");
    assert(player3.getDateOfBirth() == 1988);
    assert(player3.getId() == "003");
}

int main()
{
    testPlayerList();

    std::cout << "All tests passed!\n";

    return 0;
}