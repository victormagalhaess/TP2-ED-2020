#include "../include/Bubble.hpp"

using namespace Emperor2;

Civilization *Bubble::BubbleSort(Civilization *civilizations, int numberOfCivilizations)
{
    Civilization swapAux;
    for (int i = 0; i < numberOfCivilizations - 1; i++)
    {
        for (int j = 0; j < numberOfCivilizations - i - 1; j++)
        {
            if (civilizations[j] > civilizations[j + 1])
            {
                swapAux = civilizations[j];
                civilizations[j] = civilizations[j + 1];
                civilizations[j + 1] = swapAux;
            }
        }
    }
    return civilizations;
}