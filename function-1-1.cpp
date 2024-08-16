#include <iostream>

#include "Person.h"

Person *createPersonArray(int n)
{
    // Dynamically allocate a struct array that includes n Person
    Person *people = new Person[n];

    // Initialise the name and age of every Person struct
    for (int i = 0; i < n; i++)
    {
        people[i].name = "John Doe";
        people[i].age = 0;
    }

    return people;
}