#include "../headers/Court.hpp"
#include <cassert>

void ConstructorTest()
{
    Court c("New York", "Madison Square Garden", 20000, "MSG");
    assert(c.getLocation() == "New York");
    assert(c.getName() == "Madison Square Garden");
    assert(c.getCapacity() == 20000);
    assert(c.getId() == "MSG");
}

void SettersAndGettersTest()
{
    Court c("Los Angeles", "Staples Center", 18000);
    assert(c.getLocation() == "Los Angeles");
    assert(c.getName() == "Staples Center");
    assert(c.getCapacity() == 18000);
    assert(c.getId() == "");

    c.setLocation("Chicago");
    assert(c.getLocation() == "Chicago");

    c.setName("United Center");
    assert(c.getName() == "United Center");

    c.setCapacity(22000);
    assert(c.getCapacity() == 22000);
}

int main()
{
    ConstructorTest();
    SettersAndGettersTest();
    return 0;
}
