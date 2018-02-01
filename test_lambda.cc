//g++ test_lambda.cc -std=c++11

#include <iostream>

int main()
{
  auto basicLambda = []{std::cout << "hello world" << std::endl;};
  basicLambda();
  auto testLambda = [](int a,int b)->int { return a+b;};
  std::cout << testLambda(4,5) << std::endl;
  return 0;
}
