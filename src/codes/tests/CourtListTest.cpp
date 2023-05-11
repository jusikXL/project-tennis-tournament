#include <cassert>
#include <iostream>

#include "../../declarations/CourtList.hpp"
#include "../../declarations/CourtList.hpp"

using namespace std;

void CourtListTests()
{
    cout << "\n --- Court List Tests start --- \n"
         << endl;
    CourtList courtList;
    string court1Id = courtList.addCourt("Location A", "Court 1", 100);
    string court2Id = courtList.addCourt("Location B", "Court 2", 50);
    string court3Id = courtList.addCourt("Location C", "Court 3", 200);

    assert(courtList.getCourtById(court1Id).getName() == "Court 1");
    assert(courtList.getCourtById(court1Id).getLocation() == "Location A");
    assert(courtList.getCourtById(court1Id).getCapacity() == 100);

    assert(courtList.getCourtById(court2Id).getName() == "Court 2");
    assert(courtList.getCourtById(court2Id).getLocation() == "Location B");
    assert(courtList.getCourtById(court2Id).getCapacity() == 50);

    assert(courtList.getCourtById(court3Id).getName() == "Court 3");
    assert(courtList.getCourtById(court3Id).getLocation() == "Location C");
    assert(courtList.getCourtById(court3Id).getCapacity() == 200);

    courtList.printCourts();

    cout << "\n --- Court List Tests end --- \n"
         << endl;
}
