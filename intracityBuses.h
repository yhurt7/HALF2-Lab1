#pragma once
#include "buses.h"
#include <string>

class IntracityBuses : public Buses
{
public:
  IntracityBuses(int price, int distance);
  int getPrice();
  void setPrice(int enPrice);
  int getDistance();
  void setDistance(int enDistance);
protected:
  int price;
  int distance;
};
