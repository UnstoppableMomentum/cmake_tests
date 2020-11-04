#include <iostream>

#include <mylib.h>

int main(int args, const char * argv[])
{
  std::cout << "<<<" << std::endl;
  A a(123);
  ProcessA(a);
  return 0;
}
