#include <iostream>


class T{
  public:
    T(int n):size_(n){
      p_array = new int[size_];
    }

    T(const T& rhs){
      size_ = rhs.size();
      p_array = new int[rhs.size()];
      for(int i = 0 ; i < rhs.size() ; i ++){
        p_array[i] = rhs.elem(i);
      }
    }
    /*
    T& operator=(const T& rhs){
      size_ = rhs.size();
      p_array = new int[rhs.size()];
      for(int i = 0 ; i < rhs.size() ; i ++){
        p_array[i] = rhs.elem(i);
      }
      return *this;
    }
    */
    T& operator=(const T& rhs);

    int size() const { return size_ ;}
    int elem(size_t pos) const { return p_array[pos]; }
    void elem(size_t pos,int value) { p_array[pos] = value; }
    ~T() { delete [] p_array; }
     
  private:
    int size_;
    int* p_array;
};

T& T::operator=(const T& rhs){
   if(&rhs == this){
     return *this;
   } 
   size_ = rhs.size();
   p_array = new int[size_];
   for(int i = 0 ; i < size_ ; i ++){
     p_array[i] =  rhs.elem(i); 
   }
   return *this;
}


void output(const T& t){
  std::cout << "hello" << std::endl;
  std::cout << t.size() << std::endl;
  std::cout << "hello" << std::endl;
  for(int i = 0; i < t.size() ; i ++){
    std::cout << t.elem(i) << "\t" ;
  }
  std::cout << std::endl;
}

int main()
{
  int size = 4;
  T t(size);
  for(int i = 0 ; i < size ; i ++){
    t.elem(i,i*i);
  }

  T t1 = t;
  T t2(t);
  output(t1);
  output(t2);
  return 0;
}
