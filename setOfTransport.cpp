#include <iostream>
#include <string>
#include "setOfTransport.h"

SetOfTransport::SetOfTransport()
{
  countOfCar = 0;
  Set = nullptr;
}

SetOfTransport::~SetOfTransport()
{
  if (Set != nullptr)
    delete[] Set;
}

void SetOfTransport::Print()
{
  for (int q = 0; q < countOfCar; q++)
  {
    Set[q]->Exhaust();
  }
}

void SetOfTransport::AddTransport(Transport* car)
{
  if (countOfCar == 0)
  {
    Set = new Transport* [1];
    countOfCar = 1;
    Set[0] = car;
  }
  else
  {
    Transport** temporary = new Transport* [countOfCar + 1];
    
    for (int q = 0; q < countOfCar; q++)
    {
      temporary[q] = Set[q];
    }
    
    delete Set;
    Set = temporary;
    Set[countOfCar] = car;
    countOfCar++;
  }
}
