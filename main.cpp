/*
File: main.cpp
Author: Hanna Hayden
Date: 2/3/16
*/

#include "Executive.h"

int main(int argc, char* argv[])
{
  Executive exec(argv[1]);
  exec.run();
  return 0;
}
