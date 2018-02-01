#include <iostream>

int main()
{
  //char greeting[] = "hello";
  char greeting[6] = {'h','e','l','l','o','\0'}; //以'\0'结尾
  std::cout << greeting << std::endl;
  std::cout << "sizeof : " << sizeof(greeting) << std::endl; //6
  std::cout << "strlen : " << strlen(greeting) << std::endl; //5
  return 0;
}
