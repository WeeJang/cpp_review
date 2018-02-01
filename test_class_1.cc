#include <iostream>

class T{
public:
  T(){ std::cout << "construct function" << std::endl; }
  T(const T& rhs) { std::cout << "copy construnct function" << std::endl; }
  void func(){}
};

void func2(T t){
  t.func();
}

int main(){
  T t;
  T t_2 = t;
  func2(t); 
  return 0;
}
