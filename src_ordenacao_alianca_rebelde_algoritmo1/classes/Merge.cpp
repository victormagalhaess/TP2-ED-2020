#include "../include/Merge.hpp"

using namespace Aliance1;
void Merge::MergeSort(Civilization *civilizations, int numberOfCivilizations)
{
    Civilization *auxArr = new Civilization[numberOfCivilizations];
    this->MergeSort(civilizations, auxArr, 0, numberOfCivilizations);
}

void Merge::MergeSort(Civilization *civilizations, Civilization *auxArr, int start, int end)
{
    if ((end - start) < 2)
    {
        return;
    }

    int middle = ((start + end) / 2);
    this->MergeSort(civilizations, auxArr, start, middle);
    this->MergeSort(civilizations, auxArr, middle, end);
    this->MergeArr(civilizations, auxArr, start, middle, end);
}
