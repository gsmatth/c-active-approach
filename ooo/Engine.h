#ifndef ENGINE_H//if not defined
#define ENGINE_H//Define it


enum FuelType {GASOLINE, DIESEL};

class Engine 
{
  public:
    Engine(int cyl, float displace, char manf[], FuelType fuel);
    void SetCylinders(unsigned short cylinders);
    unsigned short GetCylinders();

    private:
      unsigned short m_cylinders;
      float m_displacement;
      char m_manufacturer[35];
      FuelType m_fuel;

};

#endif//end of conditional compilation


