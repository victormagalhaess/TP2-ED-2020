#include "../include/Civilization.hpp"

using namespace Aliance2;

Civilization::Civilization(std::string name, int distance, int population)
{
    this->name = name;
    this->distance = distance;
    this->population = population;
}

Civilization::Civilization()
{
}

Civilization::~Civilization() {}

void Civilization::setName(std::string _name)
{
    this->name = _name;
}

void Civilization::setDistance(int _distance)
{
    this->distance = _distance;
}

void Civilization::setPopulation(int _population)
{
    this->population = _population;
}

std::string Civilization::getName()
{
    return this->name;
}

int Civilization::getDistance()
{
    return this->distance;
}

int Civilization::getPopulation()
{
    return this->population;
}

void Civilization::read()
{
    std::cin >> this->name;
    std::cin >> this->distance;
    std::cin >> this->population;
}

void Civilization::print()
{
    std::cout << this->name << " " << this->distance << " " << this->population << std::endl;
}
