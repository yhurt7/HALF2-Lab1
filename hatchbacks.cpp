#include <iostream>
#include <string>
#include "hatchbacks.h"

void Hatchbacks::Exhaust()
{
  std::cout << "exhaustStartHatchback" << std::endl;
}

Hatchbacks::Hatchbacks (int doors) : Cars(engineCapacity, size)
{
  this -> doors = doors;
}

int Hatchbacks::getDoors()
{
  return doors;
}

void Hatchbacks::setDoors(int enDoors)
{
  if (enDoors != 0)
  {
      doors = enDoors;
  }
}
