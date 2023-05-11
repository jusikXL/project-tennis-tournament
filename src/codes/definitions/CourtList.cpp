#include "../../declarations/CourtList.hpp"

#include <sstream>

// Method to add a new court to the list
string CourtList::addCourt(string location, string name, uint capacity)
{
    Court newCourt(location, name, capacity);
    courts.push_back(newCourt);
    return newCourt.getId();
}

// Method to retrieve a court by its ID
Court &CourtList::getCourtById(string courtId)
{
    for (Court &court : courts)
    {
        if (court.getId() == courtId)
        {
            return court;
        }
    }
    throw invalid_argument("No court found with the provided ID.");
}

void CourtList::printCourts()
{
    if (courts.empty())
    {
        cout << "No courts found." << endl;
        return;
    }

    cout << "List of Courts:" << endl;

    for (const Court &court : courts)
    {
        stringstream ss;

        ss << "ID: " << court.getId() << endl;
        ss << "Location: " << court.getLocation() << endl;
        ss << "Name: " << court.getName() << endl;
        ss << "Capacity: " << court.getCapacity() << endl;

        cout << ss.str() << endl;
    }
}
