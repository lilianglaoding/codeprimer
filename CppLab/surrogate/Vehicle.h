class Vehicle
{
 public:
  virtual double weight() const = 0;
  virtual void start() = 0;
};

class RoadVehicle: public Vehicle
{
  
};

class AutoVehicle: public RoadVehicle
{
  
};

class Aircraft: public Vehicle
{
  
};

class Helicopter: public Aircraft
{
  
};
