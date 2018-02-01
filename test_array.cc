#include <iostream>

int main(){
  int balance[10];
  
  for(int i = 0 ; i < 10 ; i ++){
    balance[i] = i;
  }
  
  int balance_1[10] = {};
  int* p_b = new int[10];
  for(int i = 0 ; i < 10 ; i++){
    //std::cout << balance_1[i] << std::endl;
    std::cout << *(p_b+i) << std::endl;
  }
  delete[] p_b;
  return 0;
}
