#include <future>
#include <iostream>

int main()
{
  char counter = 0; // 1 byte memory

  auto future1 = std::async(std::launch::async, [&]
  {
    ++counter;
  });
  auto future2 = std::async(std::launch::async, [&]
  {
    return counter;
  });

  future1.wait();
  std::cout << static_cast<int>(future2.get()) << std::endl;
}
