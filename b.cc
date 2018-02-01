//g++ a.cc b.cc -o a.out

int e_a = 10;
extern void write_extern();

int main(){
  write_extern();
  e_a ++;
  write_extern();
}

