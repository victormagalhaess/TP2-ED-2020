#include <stdio.h>
#include <iostream>
#include "./Civilization.hpp"
#ifndef BUBBLE
#define BUBBLE
namespace Emperor2
{
    class Bubble
    {
    public:
        Civilization *BubbleSort(Civilization *civilizations, int numberOfCivilizations);
    };
} // namespace Emperor2
#endif