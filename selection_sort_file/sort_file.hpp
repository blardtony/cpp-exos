// Do not change
#include <iostream>
#include <fstream>
#include <string>

#include <list>
#include <vector>
#include <deque>

#include "my_sort.hpp"

// Change here
// All occurences of XXX need to be replaced with
// something more meaningful


template<class INPUT, class COUNT>
void read_file_to_cont(INPUT& f, COUNT c) {
  return;
}


template<class INPUT, class OUTPUT>
void read_and_sort(INPUT& fi, OUTPUT& fo) {
  return;
}


template<class INPUT, class OUTPUT>
void read_and_sort_decide_container(INPUT& fi, OUTPUT& fo) {
  std::string line;

  if (fi.is_open())
  { 
    getline(fi, line);
  }

  std::cout << line[0] << std::endl;

  switch(line[0])
  {
    case 'l':
      std::cout << "l is good " << std::endl;
      break;

    case 'v':
      std::cout << "v is good " << std::endl;
      break;

    case 'd':
      std::cout << "d is good " << std::endl;
      break;

    default:
      std::runtime_error("Type container doesn't match");
      break;
  }
}


template<class INPUT, class OUTPUT>
void read_and_sort_decide_valuetype(INPUT& fi, OUTPUT& fo) {
  std::string line;

  if (fi.is_open())
  {
    getline(fi, line);
  }

  std::cout << line[0] << std::endl;

  switch(line[0])
  {
    case 'i':
      std::cout << "s is good " << std::endl;
      break;

    case 'u':
      std::cout << "u is good " << std::endl;
      break;

    case 'f':
      std::cout << "f is good " << std::endl;
      break;

    case 'd':
      std::cout << "d is good " << std::endl;
      break;

    case 'c':
      std::cout << "c is good " << std::endl;
      break;

    case 's':
      std::cout << "s is good " << std::endl;
      break;

    default:
      std::runtime_error("Type value doesn't match");
      break;
  }
}



