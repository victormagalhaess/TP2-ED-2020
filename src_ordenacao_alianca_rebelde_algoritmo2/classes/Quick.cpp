#include "../include/Quick.hpp"

using namespace Aliance2;

void Quick::QuickSort(Civilization *civilizations, int numberOfCivilizations)
{
    this->QuickSort(civilizations, 0, numberOfCivilizations);
}

void Quick::QuickSort(Civilization *civilizations, int start, int end)
{
    int i, j, pivot;
    Civilization auxCivilization;
    i = start;
    j = end - 1;
    pivot = (start + end) / 2;
    while (i <= pivot && j >= pivot)
    {
        while (civilizations[i] < civilizations[pivot] && i < pivot)
        {
            i++;
        }
        while (civilizations[j] > civilizations[pivot] && j > pivot)
        {
            j--;
        }

        if (i <= pivot && j >= pivot)
        {
            auxCivilization = civilizations[i];
            civilizations[i] = civilizations[j];
            civilizations[j] = auxCivilization;
            i++;
            j--;
        }
    }
    if (j > start)
    {
        this->QuickSort(civilizations, start, j + 1);
    }
    if (i < end)
    {
        this->QuickSort(civilizations, i, end);
    }
}