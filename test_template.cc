#include <iostream>

template<typename T>
const T& Max(const T& a,const T& b){
  return a < b ? b : a ;
}

int main()
{
  int a = 3,b = 4;
  double c = 6;
  std::cout << Max(a,b) << std::endl;
  //std::cout << Max(c,b) << std::endl; 编译器没办法自动推导
  std::cout << Max<double>(c,b) << std::endl;
  return 0;
}


