#include <iostream>
#include <string>
#include "cars.h"

void Cars::Exhaust()
{
  std::cout << "exhaustEnd" << std::endl;
}

Cars::Cars (double engineCapacity, std::string size) : Transport(power, color)
{
  this -> engineCapacity = engineCapacity;
  this -> size = size;
}

std::string Cars::getSize()
{
  return size;
}

void Cars::setSize(std::string enSize)
{
  if (enSize != "")
  {
      size = enSize;
  }
}

double Cars::getEngineCapacity()
{
  return engineCapacity;
}

void Cars::setEngineCapacity(double enEngineCapacity)
{
  if (enEngineCapacity != 0.0)
  {
      engineCapacity = enEngineCapacity;
  }
}
