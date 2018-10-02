#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "lab1.cpp"
#include "muldiv.hpp"

int main(int argc, const char *argv[])
{
  int num;
  num = atoi(argv[1]);
  
  struct muldiv_entry **t =  generate_tables(num);

  print_tables(t, num);

  free_tables(t,num);

  return 0;
}

