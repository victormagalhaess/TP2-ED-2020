#include <iostream>
#include "./include/Civilization.hpp"
#include "./include/Bubble.hpp"

using namespace Emperor2;

int main()
{
    Bubble *bubble = new Bubble();
    int numberOfCivilizations = 0;
    std::cin >> numberOfCivilizations;
    Civilization *unorderedCivilizations = new Civilization[numberOfCivilizations];
    Civilization *orderedCivilizations = new Civilization[numberOfCivilizations];

    for (int i = 0; i < numberOfCivilizations; i++)
    {
        unorderedCivilizations[i].read();
    }

    orderedCivilizations = bubble->BubbleSort(unorderedCivilizations, numberOfCivilizations);

    for (int i = 0; i < numberOfCivilizations; i++)
    {
        orderedCivilizations[i].print();
    }

    return 0;
}