#include <iostream>
#include <string>
#include "buses.h"

Buses::Buses(int seats) : Transport(power, color)
{
  this -> seats = seats;
}

int Buses::getSeats()
{
  return seats;
}

void Buses::setSeats(int enSeats)
{
  if (enSeats != 0)
  {
      seats = enSeats;
  }
}
