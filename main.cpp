#include <iostream>
#include <string>
#include "transport.h"
#include "cars.h"
#include "buses.h"
#include "trucks.h"
#include "hatchbacks.h"
#include "sedans.h"
#include "intracityBuses.h"
#include "intercityBuses.h"
#include "setOfTransport.h"

int main()
{
  Sedans NissanPrimera(4);
  
  double NissanPrimeraCapacity = 1.8;
  int NissanPrimeraPower = 120;
  int NissanPrimeraDoors = 4;
  std::string NissanPrimeraColor = "dark blue";
  std::string NissanPrimeraSize = "large";
    
  NissanPrimera.setEngineCapacity(NissanPrimeraCapacity);
  NissanPrimera.setColor(NissanPrimeraColor);
  NissanPrimera.setPower(NissanPrimeraPower);
  NissanPrimera.setSize(NissanPrimeraSize);
  NissanPrimera.setDoors(NissanPrimeraDoors);
  
  SetOfTransport autoPark;
  autoPark.AddTransport(&NissanPrimera);
  autoPark.Print();
  
  return 0;
}
