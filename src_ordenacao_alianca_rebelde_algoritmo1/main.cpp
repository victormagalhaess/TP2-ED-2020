#include <iostream>
#include "./include/Civilization.hpp"
#include "./include/Merge.hpp"

using namespace Aliance1;

int main()
{
    Merge *merge = new Merge();
    int numberOfCivilizations = 0;
    std::cin >> numberOfCivilizations;
    Civilization *unorderedCivilizations = new Civilization[numberOfCivilizations];

    for (int i = 0; i < numberOfCivilizations; i++)
    {
        unorderedCivilizations[i].read();
    }

    merge->MergeSort(unorderedCivilizations, numberOfCivilizations);

    for (int i = 0; i < numberOfCivilizations; i++)
    {
        unorderedCivilizations[i].print();
    }

    return 0;
}