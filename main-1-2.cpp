#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main()
{
    int n = 5;

    // use the function
    PersonList personList = createPersonList(n);

    // output the name and age of every Person struct arrays
    for (int i = 0; i < personList.numPeople; ++i)
    {
        std::cout << "Person " << i + 1 << ": " << personList.people[i].name
                  << ", Age: " << personList.people[i].age << std::endl;
    }

    // free the dynamically allocated memory
    delete[] personList.people;

    return 0;
}