#include <iostream>
#include <string>

int main()
{
  while (true)
  {
    int version = 1;
    std::cout << "(s)tart again, (c)rash, (e)xit. Version: " + std::to_string(version) << std::endl;

    char input;
    std::cin >> input;
    switch (input)
    {
    case 'c':
    {
      int* ptr = nullptr;
      *ptr = 5;
      break;
    }
    case 'e':
      return 0;
    case 's':
    default:
      continue;
    }
  }
    return 0;
}

