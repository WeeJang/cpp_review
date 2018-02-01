#include <iostream>

namespace A{

namespace B{

void func(void){
  std::cout << "hello world" << std::endl;
}


};//namespace B

};//namespace A

int main(int argc,char** argv){
  A::B::func();
}
