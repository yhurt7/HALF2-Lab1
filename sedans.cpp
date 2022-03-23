#include <iostream>
#include <string>
#include "sedans.h"

void Sedans::Exhaust()
{
  std::cout << "exhaustStartSedan" << std::endl;
}

Sedans::Sedans (int doors) : Cars(engineCapacity, size)
{
  this -> doors = doors;
}

int Sedans::getDoors()
{
  return doors;
}

void Sedans::setDoors(int enDoors)
{
  if (enDoors != 0)
  {
      doors = enDoors;
  }
}
