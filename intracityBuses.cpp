#include <iostream>
#include <string>
#include "intracityBuses.h"

IntracityBuses::IntracityBuses (int price, int distance) : Buses(seats)
{
  this -> price = price;
  this -> distance = distance;
}

int IntracityBuses::getPrice()
{
  return price;
}

void IntracityBuses::setPrice(int enPrice)
{
  if (enPrice != 0)
  {
      price = enPrice;
  }
}

int IntracityBuses::getDistance()
{
  return distance;
}

void IntracityBuses::setDistance(int enDistance)
{
  if (enDistance != 0)
  {
      distance = enDistance;
  }
}
