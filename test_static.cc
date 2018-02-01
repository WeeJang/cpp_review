#include <iostream>

void fn();

void fn(){
  static int n = 10;
  std::cout << n << std::endl;
  n ++;
}

class Test{
  public:
    Test(int n){
      this->num = n;
    }
    void show(){
      std::cout << this->num << std::endl;
    }
    static void show_s(){
      std::cout << s_num << std::endl; 
    }
  public:
    static int s_num;
  private:
    int num;
};

//静态成员变量在class外部定义
int Test::s_num = 10;


int main(){
  //fn();
  Test t = 10;
  t.show();
  Test::show_s();
  return 0;
}


