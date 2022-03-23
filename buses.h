#pragma once
#include "transport.h"
#include <string>

class Buses : public Transport
{
public:
  Buses(int seats);
  int getSeats();
  void setSeats(int enSize);
protected:
  int seats;
};
