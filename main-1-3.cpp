#include <iostream>
#include "Person.h"
extern PersonList deepCopyPersonList(PersonList pl);

int main()
{
    // create the original PersonList
    PersonList original;
    original.numPeople = 2;
    original.people = new Person[original.numPeople];

    original.people[0].name = "Alice";
    original.people[0].age = 25;

    original.people[1].name = "Bob";
    original.people[1].age = 30;

    // deep copy
    PersonList copy = deepCopyPersonList(original);

    // change the origional data for testing

    original.people[0].name = "Changed";
    original.people[0].age = 99;

    // output the data copied，to test if it has been influenced by the original data
    std::cout << "Copy[0] Name: " << copy.people[0].name << ", Age: " << copy.people[0].age << std::endl;
    std::cout << "Copy[1] Name: " << copy.people[1].name << ", Age: " << copy.people[1].age << std::endl;

    // clear the memory
    delete[] original.people;
    delete[] copy.people;

    return 0;
}