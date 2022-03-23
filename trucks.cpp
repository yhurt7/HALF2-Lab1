#include <iostream>
#include <string>
#include "trucks.h"

Trucks::Trucks (int carriyng) : Transport(power, color)
{
  this -> carrying = carrying;
}

int Trucks::getCarrying()
{
  return carrying;
}

void Trucks::setCarrying(int enCarrying)
{
  if (enCarrying != 0)
  {
      carrying = enCarrying;
  }
}
