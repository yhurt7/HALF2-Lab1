#pragma once
#include "transport.h"
#include <string>

class Cars : public Transport
{
public:
  virtual void Exhaust();
  Cars(double engineCapacity, std::string size);
  std::string getSize();
  void setSize(std::string enSize);
  double getEngineCapacity();
  void setEngineCapacity(double enEngineCapacity);
protected:
  std::string size;
  double engineCapacity;
};
