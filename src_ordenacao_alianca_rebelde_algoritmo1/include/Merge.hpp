#include <stdio.h>
#include <iostream>
#include "./Civilization.hpp"
#ifndef MERGE
#define MERGE
namespace Aliance1
{
    class Merge
    {
    public:
        void MergeSort(Civilization *civilizations, int numberOfCivilizations);
        void MergeSort(Civilization *civilizations, Civilization *auxArr, int start, int end);
        void MergeArr(Civilization *civilizations, Civilization *auxArr, int start, int middle, int end)
        {
            int left = start;
            int right = middle;
            for (int i = start; i < end; i++)
            {
                if ((left < middle) && ((right >= end) || (civilizations[left] < civilizations[right])))
                {
                    auxArr[i] = civilizations[left];
                    left++;
                }
                else
                {
                    auxArr[i] = civilizations[right];
                    right++;
                }
            }

            for (int i = start; i < end; i++)
            {
                civilizations[i] = auxArr[i];
            }
        }
    };
} // namespace Aliance1
#endif