#include <iostream>
#include <string>
#include "intercityBuses.h"

IntercityBuses::IntercityBuses (int price, int distance) : Buses(seats)
{
  this -> price = price;
  this -> distance = distance;
}

int IntercityBuses::getPrice()
{
  return price;
}

void IntercityBuses::setPrice(int enPrice)
{
  if (enPrice != 0)
  {
      price = enPrice;
  }
}

int IntercityBuses::getDistance()
{
  return distance;
}

void IntercityBuses::setDistance(int enDistance)
{
  if (enDistance != 0)
  {
      distance = enDistance;
  }
}
