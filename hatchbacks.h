#pragma once
#include "cars.h"
#include <string>

class Hatchbacks : public Cars
{
public:
  virtual void Exhaust();
  Hatchbacks(int doors);
  int getDoors();
  void setDoors(int enDoors);
protected:
  int doors;
};
