#include <iostream>


int main_1()
{
  int var1 = 0;
  char var2[10];
  int* p_v;
  p_v = &var1;
  *p_v = 5;
 
  std::cout << var1 << std::endl; 
  std::cout << "var1 addresss" ;
  std::cout << &var1 << std::endl;

  std::cout << "var2 address" ;
  std::cout << &var2 << std::endl;
  std::cout << "hello" << std::endl;
  std::cout << var2 << std::endl;

  return 0;
}

template<typename T>
class TD;


int main_3(){
  int *ptr = NULL;
  std::cout << "ptr value is : " << ptr << std::endl;
  if(!ptr)
    std::cout << "ptr is NULL" << std::endl;
  
  int var[3] = {10,20,30};
  int* p_v ;
  //get_type(var);
  p_v = var;
  
  for(int i = 0 ;i < 3; i ++){
    std::cout << *p_v << std::endl;
    p_v ++;
  } 

  return 0;
}

void add_array(int* p_array,size_t array_size){
  for(int i = 0 ; i < array_size ; i++){
    *(p_array + i) += 4;
  }
}

int main(){
  //指针数组  数组里面的元素是 const char*
  const char *name[3] = { \
                        "Only","Zara","HM" };

  for(int i = 0 ; i < 3 ; i ++){
    std::cout << name[i] << std::endl;
    std::cout << *name[i] << std::endl;
    std::cout << (*name[i]+1) << std::endl;
  }

  const char** ptr = &name[0];
  std::cout << *ptr << std::endl;
  return 0;
}

