#pragma once
#include "transport.h"
#include <string>

class Trucks : public Transport
{
public:
  Trucks(int carrying);
  int getCarrying();
  void setCarrying(int enCarrying);
protected:
  int carrying;
};
