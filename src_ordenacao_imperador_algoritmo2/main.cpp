#include <iostream>
#include "./include/Civilization.hpp"
#include "./include/Bubble.hpp"

using namespace Emperor2;

int main()
{
    clock_t start, end;

    /* Recording the starting clock tick.*/
    start = clock();
    Bubble *bubble = new Bubble();
    int numberOfCivilizations = 0;
    std::cin >> numberOfCivilizations;
    Civilization *unorderedCivilizations = new Civilization[numberOfCivilizations];
    Civilization *orderedCivilizations = new Civilization[numberOfCivilizations];

    for (int i = 0; i < numberOfCivilizations; i++)
    {
        unorderedCivilizations[i].read();
    }

    orderedCivilizations = bubble->BubbleSort(unorderedCivilizations, numberOfCivilizations);

    for (int i = 0; i < numberOfCivilizations; i++)
    {
        orderedCivilizations[i].print();
    }

    end = clock();

    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << "Time taken by program is : " << std::fixed << time_taken;
    std::cout << " sec " << std::endl;

    return 0;
}