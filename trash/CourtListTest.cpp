#include <cassert>
#include "CourtList.hpp"

void test_get_court_by_id()
{
    CourtList courtList;
    courtList.mintCourt("Location A", "Court 1", 100);
    courtList.mintCourt("Location B", "Court 2", 50);
    courtList.mintCourt("Location C", "Court 3", 200);

    const Court &court1 = courtList.getCourtById("COURT-1");
    const Court &court2 = courtList.getCourtById("COURT-2");
    const Court &court3 = courtList.getCourtById("COURT-3");

    assert(court1.getName() == "Court 1");
    assert(court1.getLocation() == "Location A");
    assert(court1.getCapacity() == 100);

    assert(court2.getName() == "Court 2");
    assert(court2.getLocation() == "Location B");
    assert(court2.getCapacity() == 50);

    assert(court3.getName() == "Court 3");
    assert(court3.getLocation() == "Location C");
    assert(court3.getCapacity() == 200);
}

int main()
{
    test_get_court_by_id();
    std::cout << "All tests passed!\n";
    return 0;
}
