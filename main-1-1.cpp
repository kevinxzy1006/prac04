#include <iostream>
#include "Person.h"

extern Person *createPersonArray(int n);

int main()
{
    int n = 5;                              // Assume that the array includes 5 person
    Person *persons = createPersonArray(n); // Use the function

    // output the information of persons
    for (int i = 0; i < n; i++)
    {
        std::cout << "Person " << i + 1 << ": \n"
                  << "Name: " << persons[i].name << ", Age: " << persons[i].age << std::endl;
    }
    delete[] persons;

    return 0;
}