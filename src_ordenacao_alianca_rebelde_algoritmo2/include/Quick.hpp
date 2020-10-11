#include <stdio.h>
#include <iostream>
#include "./Civilization.hpp"
#ifndef QUICK
#define QUICK
namespace Aliance2
{
    class Quick
    {
    public:
        void QuickSort(Civilization *civilizations, int numberOfCivilizations);
        void QuickSort(Civilization *civilizations, int start, int end);
    };
} // namespace Aliance2
#endif