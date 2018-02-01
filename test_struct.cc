#include <iostream>

struct Book{
  char name[10];
  int id;
};

int main()
{
   Book bk;
   Book* pbk;
   pbk = &bk;
   std::cout << bk.id << std::endl;
   std::cout << pbk->id << std::endl;
   return 0;
}
