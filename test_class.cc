#include <iostream>

class Test{
  public:
    Test(int n){
      num = n;
    }
  private:
    int num;

  public:
    void set_n(int n);
};


void Test::set_n(int n){
  num = n;
}

class D{
public:
  D(){std::cout << "D()" << std::endl;}
  ~D(){std::cout << "~D()" << std::endl;}
};

class B: virtual public D{
public:
  B(){std::cout << "B()" << std::endl;}
  virtual ~B(){std::cout << "~B()" << std::endl;}
};

class A: virtual public D{
public:
  A(){std::cout << "A()" << std::endl;}
  virtual ~A(){std::cout << "~A()" << std::endl;}
};

class C: public A, public B{
public:
  C(){std::cout << "C()" << std::endl;}
  virtual ~C(){std::cout << "~C()" << std::endl;}
};

int main(){
  C c;
  std::cout << "hello world" << std::endl;
  return 0;
}


