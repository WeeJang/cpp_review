#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int write_to_file(const string& file_path,const string& content){
  //定义文件输出流
  std::ofstream outfile;

  //创建文件
  outfile.open(file_path,std::ios::out | std::ios::trunc);
  if(!outfile)
     return 1;
  outfile << content << std::endl;
  outfile.close();
  return 0;
}

int read_from_file(const string& file_path,string& content){
   //定义输入流
   std::ifstream infile;
   
   infile.open(file_path,std::ios::in);
   if(!infile)
     return 1;
   string new_str((std::istreambuf_iterator<char>(infile)),std::istreambuf_iterator<char>());
   std::cout << new_str << std::endl;
   content.append(new_str);
   infile.close();
   return 0;
}


int main(){
  const string file_path("./test.dat");
  const string& content("hello world");
  std::cout << write_to_file(file_path,content) << std::endl;

  string target_content;
  std::cout << read_from_file(file_path,target_content) << std::endl;
  std::cout << target_content << std::endl;
  return 0;
}
