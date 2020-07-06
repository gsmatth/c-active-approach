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


