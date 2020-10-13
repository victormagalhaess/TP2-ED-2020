#include <iostream>
#include "./include/Civilization.hpp"
#include "./include/Quick.hpp"

using namespace Aliance2;

int main()
{
    clock_t start, end;

    /* Recording the starting clock tick.*/
    start = clock();
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

    end = clock();

    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    std::cout << "Time taken by program is : " << std::fixed << time_taken;
    std::cout << " sec " << std::endl;

    return 0;
}