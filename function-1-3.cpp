#include <string>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl)
{
    PersonList copy;
    copy.numPeople = pl.numPeople;

    // Dynamically allocate n person struct arrays
    copy.people = new Person[copy.numPeople];

    // Inisialise the name and age of every Person
    for (int i = 0; i < copy.numPeople; i++)
    {
        copy.people[i].name = pl.people[i].name;
        copy.people[i].age = pl.people[i].age;
    }

    return copy;
}