#include <iostream>
#include <vector>

#include "./sorts.cpp"




std::vector <int> createVector () {

  std::vector <int> vec;

  int sizeVec;


  std::cout << "\n\nВведите размерность массива\n\n";

  std::cin >> sizeVec;


  std::cout << "\n\nЗаполните массив\n\n";


  for (int i = 0;  i < sizeVec;  i++) {

    int elem;


    std::cout << "\nЯчейка " << (i + 1) << " из " << sizeVec << "\n";


    std::cin >> elem;


    vec. push_back (elem);

  }


  return vec;

}


int main () {

  return 0;

}
