#include <iostream>
#include "Person.h"

PersonList createPersonList(int n)
{
    // create a PersonList struct
    PersonList personlist;
    personlist.numPeople = n;

    // Dynamically allocate n person struct arrays
    personlist.people = new Person[n];

    // Initialise the name and age of every Person
    for (int i = 0; i < n; i++)
    {
        personlist.people[i].name = "John Doe";
        personlist.people[i].age = 0;
    }

    return personlist;
}