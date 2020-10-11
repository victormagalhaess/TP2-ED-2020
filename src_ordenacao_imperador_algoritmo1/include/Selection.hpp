#include <stdio.h>
#include <iostream>
#include "./Civilization.hpp"
#ifndef SELECTION
#define SELECTION
namespace Emperor1
{
    class Selection
    {
    public:
        Civilization *SelectionSort(Civilization *civilizations, int numberOfCivilizations);
    };
} // namespace Emperor1
#endif