#include<iostream>

class A{
public:
  A(int a,int b) : a(a),b(b) {
    std::cout << "A(" << a << "," << b << ")" << std::endl;
  }
  
  //~A() { std::cout << "~A()" << std::endl; } 这样的话，下面的多态使用时，就不会调用~B()
  virtual ~A() { std::cout << "~A()" << std::endl; }
private:
  int a;
  int b;
};


class B : public A {
public:
  B(int a,int b,int c): A (a,b),c(c){
    std::cout << "B(" << a << "," << b << "," << c << ")" << std::endl;
  }
  ~B() { std::cout << "~B() " << std::endl; }

private:
  int c;
};




int main(){
  A* p_a;
  p_a = new B(1,2,3);
  delete p_a;
  return 0;
}
