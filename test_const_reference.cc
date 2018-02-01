#include <iostream>

// there is no difference "const T&" and "T const&"

void test_1(int& a){}

void test_2(const int& a){}

int get_val(){ return 3; }

void draw_line(){ std::cout << "**********************" << std::endl; }

int main(){
  //int& a = 2;//不合法,如果合法岂不是可以修改常量2
  const int& a = 2;
  draw_line();  

  int b = 3;
  test_1(b); //okay
  //test_1(3); error 
  //test_1(get_val());
  test_2(3);//okay 接受l-value
  test_2(get_val());
  draw_line();  


  return 0;
}
