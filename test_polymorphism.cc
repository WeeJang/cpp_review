#include<iostream>

class Shape{
  public:
    virtual void get_shape(){
    //void get_shape(){
      std::cout << "Shape" << std::endl;
    }
};


class Rec : public Shape{
  public:
    void get_shape(){
      std::cout << "Rec" << std::endl;
    }
};


class Tri : public Shape{
  public:
    void get_shape(){
      std::cout << "Tri" << std::endl;
    }
};

void call_get_shape(Shape* p_s){
  p_s->get_shape();
}

int main(){
  Rec rec;
  Tri tri;
  call_get_shape(&rec);
  call_get_shape(&tri); 
}

