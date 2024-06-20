#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Shape
{
public:
  double area;
  double volume;
};

class Cube : public Shape
{
public:
  double side;
  Cube(double side)
  {
    this->side = side;
    this->area = side * side * 6;
    this->volume = side * side * side;
  }
};

class Sphere : public Shape
{
public:
  double radius;
  Sphere(double radius)
  {
    this->radius = radius;
    this->area = 4 * 3.14159 * (radius * radius);
    this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
  }
};

int main()
{

  Cube cube(10);
  cout << "Area: " << cube.area << "cm2\n";
  cout << "Volume: " << cube.volume << "cm3\n";

  cout << "************************\n";

  Sphere sphere(5);
  cout << "Area: " << sphere.area << "cm2\n";
  cout << "Volume: " << sphere.volume << "cm3\n";

  return 0;
}