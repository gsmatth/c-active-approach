#include "Engine.h"
#include <string>

using std::string;


void Engine::SetCylinders(unsigned short cylinders)
{
  m_cylinders = cylinders;
}
unsigned short Engine::GetCylinders()
{
  return m_cylinders;
}
Engine::Engine(int cycl, float displace, char manf[], FuelType fuel)
{
  m_cylinders = cycl;
  m_displacement = displace;
  strcpy(m_manufacturer, manf);
  m_fuel = fuel;
}