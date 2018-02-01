//g++ a.cc b.cc -o a.out

#include <iostream>

extern int e_a;

void write_extern(void){
  std::cout << "Count is" << e_a << std::endl;
}


