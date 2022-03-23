#pragma once
#include "transport.h"

class SetOfTransport
{
public:
  SetOfTransport();
  ~SetOfTransport();
  void Print();
  void AddTransport(Transport* car);
private:
  Transport** Set;
  int countOfCar;
};

