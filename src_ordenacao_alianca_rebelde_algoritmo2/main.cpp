#include <iostream>
#include "./include/Civilization.hpp"
#include "./include/Quick.hpp"

using namespace Aliance2;

int main()
{
    Quick *quick = new Quick();
    int numberOfCivilizations = 0;
    std::cin >> numberOfCivilizations;
    Civilization *civilizations = new Civilization[numberOfCivilizations];

    for (int i = 0; i < numberOfCivilizations; i++)
    {
        civilizations[i].read();
    }
    quick->QuickSort(civilizations, numberOfCivilizations);

    for (int i = 0; i < numberOfCivilizations; i++)
    {
        civilizations[i].print();
    }

    return 0;
}