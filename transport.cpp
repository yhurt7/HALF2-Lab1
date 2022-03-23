#include <iostream>
#include <string>
#include "transport.h"

void Transport::Exhaust()
{
  std::cout << "exhaustStart" << std::endl;
}

Transport::Transport(int power, std::string color)
{
  this -> power = power;
  this -> color = color;
}

int Transport::getPower()
{
  return power;
}

void Transport::setPower(int enPower)
{
  if (enPower > 0)
  {
    power = enPower;
  }
}

std::string Transport::getColor()
{
  return color;
}

void Transport::setColor(std::string enColor)
{
  if (enColor != "")
  {
      color = enColor;
  }
}
