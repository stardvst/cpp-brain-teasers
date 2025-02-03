#include <iostream>
#include <numeric>
#include <vector>

/*

template <class InputIt, class T>
T accumulate(InputIt first, InputIt last, T init);

*/

int main()
{
  std::vector<int> numbers = { -2, -3 };
  std::cout << std::accumulate(numbers.begin(), numbers.end(), numbers.size()) << std::endl;
}
