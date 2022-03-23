#pragma once
#include "cars.h"
#include <string>

class Sedans : public Cars
{
public:
  virtual void Exhaust();
  Sedans(int doors);
  int getDoors();
  void setDoors(int enDoors);
protected:
  int doors;
};
