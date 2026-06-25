#include <iostream>
#include "functions.hpp"

int main(int argc, char* argv[])
{
  if (argc != 2 && argc != 0)
  {
    std::cerr << "Input processing error" << "\n";
    return 1;
  }

  size_t size = 10;
  lavrentev::Person* notes = new lavrentev::Person[size];
  size_t* ids = new size_t[size];

  try
  {
    lavrentev::readfile(argv[1], notes, ids, size);
  }
  catch (const std::runtime_error&)
  {
    std::cerr << "Input processing error" << "\n";
    return 2;
  }
}
