#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Stove
{
private:
  int temperature = 0;

public:
  Stove(int temperature)
  {
    setTemperature(temperature);
  }
  int getTemperature()
  {
    return temperature;
  }

  void setTemperature(int temperature)
  {
    if (temperature < 0)
    {
      this->temperature = 0;
    }
    else if (temperature > 10)
    {
      this->temperature = 10;
    }
    else
    {
      this->temperature = temperature;
    }
  }
};

int main()
{

  Stove stove(4);

  cout << stove.getTemperature() << "\n";
  stove.setTemperature(6);
  cout << stove.getTemperature() << "\n";

  return 0;
}
