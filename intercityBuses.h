#pragma once
#include "buses.h"
#include <string>

class IntercityBuses : public Buses
{
public:
  IntercityBuses(int price, int distance);
  int getPrice();
  void setPrice(int enPrice);
  int getDistance();
  void setDistance(int enDistance);
protected:
  int price;
  int distance;
};
