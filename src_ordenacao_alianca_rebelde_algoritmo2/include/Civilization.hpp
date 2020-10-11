#include <stdio.h>
#include <iostream>
#ifndef CIVILIZATION
#define CIVILIZATION

namespace Aliance2
{
    class Civilization
    {
    private:
        std::string name;
        int distance;
        int population;

    public:
        void setName(std::string _name);
        void setDistance(int _distance);
        void setPopulation(int _population);
        std::string getName();
        int getDistance();
        int getPopulation();
        void read();
        void print();
        friend bool operator<(const Civilization &civilization1, const Civilization &civilization2)
        {
            return ((civilization1.distance < civilization2.distance) ||
                    (civilization1.distance == civilization2.distance &&
                     civilization2.population < civilization1.population));
        };

        friend bool operator>(const Civilization &civilization1, const Civilization &civilization2)
        {
            return !((civilization1.distance < civilization2.distance) ||
                     (civilization1.distance == civilization2.distance &&
                      civilization2.population < civilization1.population));
        };

        Civilization(std::string name, int distance, int population);
        Civilization();
        ~Civilization();
    };
} // namespace Aliance2

#endif