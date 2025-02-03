#include <iostream>

void serialize(char characters[])
{
  std::cout << sizeof(characters) << std::endl;
}

int main()
{
  char characters[] = {'a', 'b', 'c'};

  std::cout << sizeof(characters) << std::endl;

  serialize(characters);
}
