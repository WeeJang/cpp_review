#include <iostream>


int main(){
  //构建m*n的二维矩阵
  int m = 4;
  int n = 3;
  int** p_array = new int*[m];
  for(int i = 0 ; i < m ; i ++){
    *(p_array+i) = new int[n];
  } 
 
  for(int i = 0 ; i < m ; i ++){
    for(int j = 0 ; j < n ; j ++){
      //std::cout << *(*(p_array + i) + j) << '\t' ;
      *(*(p_array + i) + j) = (i * n + j);
    }
    std::cout << std::endl;
  }

  for(int i = 0 ; i < m ; i ++){
    for(int j = 0 ; j < n ; j ++){
      std::cout << *(*(p_array + i) + j) << '\t' ;
    }
    std::cout << std::endl;
  }

  for(int i = 0 ; i < m ; i ++){
     delete [] p_array[i];
  }
  delete [] p_array;

  return 0; 
}
