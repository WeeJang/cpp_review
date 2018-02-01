#include <iostream>

class Test{
  public:
    Test(int n){
      //num 被默认初始化
      std::cout << num << std::endl;
      num = n;
      std::cout << num << std::endl;
    } 

  private:
    int num;
};


class Test2{
  public:
    explicit Test2(int n){
      std::cout << num << std::endl;
      num = n; 
      std::cout << num << std::endl;
    }
  private:
    int num;
};


int main(int argc,char** argv){
  std::cout << "hello world" << std::endl; 
  Test t1(10);
  Test t2 = 10;
  //Test2 t3 = 20;
  return 0;
}
