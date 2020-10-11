#include <iostream>
#include "./include/Civilization.hpp"
#include "./include/Selection.hpp"

using namespace Emperor1;

int main()
{
    Selection *selection = new Selection();
    int numberOfCivilizations = 0;
    std::cin >> numberOfCivilizations;
    Civilization *unorderedCivilizations = new Civilization[numberOfCivilizations];
    Civilization *orderedCivilizations = new Civilization[numberOfCivilizations];

    for (int i = 0; i < numberOfCivilizations; i++)
    {
        unorderedCivilizations[i].read();
    }

    orderedCivilizations = selection->SelectionSort(unorderedCivilizations, numberOfCivilizations);

    for (int i = 0; i < numberOfCivilizations; i++)
    {
        orderedCivilizations[i].print();
    }

    return 0;
}