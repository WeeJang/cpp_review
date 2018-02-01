#include <iostream>

void swap(int& a,int& b){
  int temp = a;
  a = b;
  b = temp;
}

void swap_2(int* p_a,int* p_b){
  int temp = *p_a;
  *p_a = *p_b;
  *p_b = temp;  
}

int main(){

  int a = 10;
  int b = 20;
  int& r_a = a;
  r_a = 11;
  std::cout <<"a : " <<  a << " b : " << b << std::endl;
  swap(a,b);
  std::cout <<"a : " <<  a << " b : " << b << std::endl;
  swap_2(&a,&b);
  std::cout <<"a : " <<  a << " b : " << b << std::endl;
  return 0;
}
