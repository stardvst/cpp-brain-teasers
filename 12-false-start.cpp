#include <iostream>
#include <stdexcept>

struct Engine
{
  ~Engine() { std::cout << "Engine stopped" << std::endl; }
};

struct Machine
{
  Machine() { throw std::runtime_error("Failed to start machine"); }
  ~Machine() { std::cout << "Machine stopped" << std::endl; }

  Engine engine;
};

int main()
{
  try
  {
    Machine machine;
  }
  catch (...)
  {
  }
}
