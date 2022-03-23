#pragma once
#include <string>

class Transport
{
public:
  virtual void Exhaust() = 0;
  Transport(int power, std::string color);
  int getPower();
  void setPower(int enPower);
  std::string getColor();
  void setColor(std::string enColor);
protected:
  int power;
  std::string color;
};
