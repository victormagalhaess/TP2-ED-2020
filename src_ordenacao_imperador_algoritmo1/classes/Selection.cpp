#include "../include/Selection.hpp"

using namespace Emperor1;

Civilization *Selection::SelectionSort(Civilization *civilizations, int numberOfCivilizations)
{
    Civilization swapAux;
    int minor = 0;
    for (int i = 0; i < numberOfCivilizations; i++)
    {
        minor = i;
        for (int j = i + 1; j < numberOfCivilizations; j++)
        {
            if (civilizations[minor] > civilizations[j])
            {
                minor = j;
            }
        }
        swapAux = civilizations[i];
        civilizations[i] = civilizations[minor];
        civilizations[minor] = swapAux;
    }

    return civilizations;
}