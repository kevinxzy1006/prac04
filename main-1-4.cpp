#include <iostream>
#include "Person.h"

// declare the function
PersonList shallowCopyPersonList(PersonList pl);

int main()
{
    // create original PersonList
    PersonList original;
    original.numPeople = 2;
    original.people = new Person[original.numPeople];

    original.people[0].name = "Alice";
    original.people[0].age = 25;

    original.people[1].name = "Bob";
    original.people[1].age = 30;

    // shallow copy
    PersonList copy = shallowCopyPersonList(original);

    // change the data to test the funcion
    original.people[0].name = "Changed";
    original.people[0].age = 99;

    // output the data, to test if it has been influenced
    std::cout << "Copy[0] Name: " << copy.people[0].name << ", Age: " << copy.people[0].age << std::endl;
    std::cout << "Copy[1] Name: " << copy.people[1].name << ", Age: " << copy.people[1].age << std::endl;

    // clear memory.
    delete[] original.people;

    return 0;
}
